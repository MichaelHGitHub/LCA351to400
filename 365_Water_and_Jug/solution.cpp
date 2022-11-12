#include "header.h"
#include <queue>

// Treat two jugs as a big one, then we have 4 different options to change the volume of water
// {+j1, -j1, +j2, -j2}
// At any state, try the above 4 options.
bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity)
{
    bool result = false;
    vector<int> changes({ jug1Capacity, -jug1Capacity, jug2Capacity , -jug2Capacity });
    queue<int> states;
    states.push(0);

    int total = jug1Capacity + jug2Capacity;
    vector<int> visited(total + 1, 0);

    while (!states.empty())
    {
        int vol = states.front();
        states.pop();

        if (vol == targetCapacity)
        {
            result = true;
            break;
        }

        for (int i = 0; i < changes.size(); i++)
        {
            int new_state = vol + changes[i];
            if (new_state >= 0 && new_state <= total && visited[new_state] == 0)
            {
                states.push(new_state);
                visited[new_state] = 1;
            }
        }
    }

    return result;
}