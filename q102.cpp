#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> graph(numCourses);
        vector<int> indegree(numCourses, 0);

        for (auto& prerequisite : prerequisites) {
            int course = prerequisite[0];
            int required = prerequisite[1];

            graph[required].push_back(course);
            indegree[course]++;
        }

        queue<int> q;

        // Courses with no prerequisites
        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        int completed = 0;

        while (!q.empty()) {

            int current = q.front();
            q.pop();

            completed++;

            for (int next : graph[current]) {

                indegree[next]--;

                if (indegree[next] == 0) {
                    q.push(next);
                }
            }
        }

        return completed == numCourses;
    }
};