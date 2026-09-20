class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int revDeg = 0;
        for(int i = 0; i < n; i++){
            revDeg += (i+1) * (122 - s[i] + 1);
        }
        return revDeg;
    }
};