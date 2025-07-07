class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        // Sort by start day
        sort(events.begin(), events.end());
        priority_queue<int, vector<int>, greater<int>> pq;

        int n = events.size(), i = 0, res = 0;
        int day = 1;

        // Find the max end day
        int maxDay = 0;
        for (auto& e : events) maxDay = max(maxDay, e[1]);

        while (day <= maxDay) {
            // Push all events that start today
            while (i < n && events[i][0] == day) {
                pq.push(events[i][1]);  // Push end day
                i++;
            }

            // Remove all events that have already expired
            while (!pq.empty() && pq.top() < day) {
                pq.pop();
            }

            // Attend the event that ends earliest
            if (!pq.empty()) {
                pq.pop();
                res++;
            }

            day++;
        }

        return res;
    }
};
