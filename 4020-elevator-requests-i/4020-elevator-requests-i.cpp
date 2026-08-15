class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans = 0;
        for(int i = 0; i<requests.size()-1; i++){
            ans =  ans + abs(requests[i] - requests[i+1]);
        }
        ans += requests[0];
        return ans;
    }
};