class Solution {
public:
    static bool cmp(const vector<int>& a, const vector<int>& b){
        return (a[1] < b[1]);
    };
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(), cmp);
        int maxMeetings = 0;
        int preEndTime = INT_MIN;
        for(int i = 0; i<intervals.size(); i++){
            int startTime = intervals[i][0];
            int endTime = intervals[i][1];
            if(startTime >= preEndTime){
                maxMeetings++;
                preEndTime = endTime;
            }
        }
        return intervals.size() - maxMeetings;
    }
};