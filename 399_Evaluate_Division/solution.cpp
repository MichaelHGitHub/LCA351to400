#include "header.h"
#include <map>
#include <unordered_set>
#include <iostream>
#include <iomanip>

bool DFS(string& start, string& end,
    map<string, vector<string>>& graph,
    map<string, double>& weights,
    unordered_set<string>& visited,
    double& edge);

vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
    map<string, vector<string>> graph;
    map<string, double> weights;

    for (int i = 0; i < equations.size(); i++) {
        string a = equations[i][0];
        string b = equations[i][1];

        weights[a + "->" + b] = values[i];
        weights[b + "->" + a] = 1 / values[i];

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<double> results;
    for (int i = 0; i < queries.size(); i++) {
        string c = queries[i][0];
        string d = queries[i][1];

        if (graph.find(c) == graph.end() ||
            graph.find(d) == graph.end()) {
            results.push_back(-1.0);
        } else if (c == d) {
            results.push_back(1.0);
        }
        else {
            if (weights.find(c + "->" + d) != weights.end()) {
                results.push_back(weights[c + "->" + d]);
            }
            else {
                double edge = 1.0;
                unordered_set<string> visited;
                if (DFS(c, d, graph, weights, visited, edge)) {
                    results.push_back(edge);
                }
                else {
                    results.push_back(-1.0);
                }
            }
        }
    }
    return results;
}


bool DFS(string& start, string& end,
    map<string, vector<string>>& graph,
    map<string, double>& weights,
    unordered_set<string>& visited,
    double& edge) {

    bool found = false;

    if (visited.find(start) == visited.end()) {
        visited.insert(start);
        for (int i = 0; i < graph[start].size(); i++) {
            if (graph[start][i] == end) {
                found = true;
                edge *= weights[start + "->" + end];
                break;
            }
            else {
                if (DFS(graph[start][i], end, graph, weights, visited, edge)) {
                    edge *= weights[start + "->" + graph[start][i]];
                    found = true;
                    break;
                }
            }
        }
    }

    if (found) {
        weights[start + "->" + end] = edge;
        weights[end + "->" + start] = 1 / edge;
    }

    return found;
}