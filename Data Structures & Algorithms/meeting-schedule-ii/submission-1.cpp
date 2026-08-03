class Solution {
public:
    static bool compare(const Interval &a, const Interval &b) {
        return a.start < b.start;
    }

    int minMeetingRooms(vector<Interval>& intervals) {
        int n = intervals.size();
        if (n == 0) return 0;

        vector<int> starts, ends;

        for (auto &it : intervals) {
            starts.push_back(it.start);
            ends.push_back(it.end);
        }

        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        int rooms = 0, maxRooms = 0;
        int i = 0, j = 0;

        while (i < n) {
            if (starts[i] < ends[j]) {
                rooms++;
                maxRooms = max(maxRooms, rooms);
                i++;
            } else {
                rooms--;
                j++;
            }
        }

        return maxRooms;
    }
};