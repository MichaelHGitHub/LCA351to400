#pragma once

#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Twitter {
public:
    Twitter() {

    }

    void postTweet(int userId, int tweetId) {
        m_posts.push_back(pair<int, int>(userId, tweetId));
    }

    vector<int> getNewsFeed(int userId) {
        vector<int> feed;

        int index = m_posts.size() - 1;

        while (feed.size() < 10 && index >= 0)
        {
            if (m_posts[index].first == userId ||
                m_following_info[userId].find(m_posts[index].first) != m_following_info[userId].end())
            {
                feed.push_back(m_posts[index].second);
            }
            index--;
        }

        return feed;
    }

    void follow(int followerId, int followeeId) {
        m_following_info[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        if (m_following_info[followerId].find(followeeId) != m_following_info[followerId].end())
        {
            m_following_info[followerId].erase(followeeId);
        }
    }

private:
    unordered_map<int, unordered_set<int> > m_following_info;
    vector<pair<int, int> > m_posts;

};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
