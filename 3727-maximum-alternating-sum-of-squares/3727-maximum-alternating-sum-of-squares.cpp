class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> sq;

        for(int x : nums){ // sqaure of every element
            sq.push_back(1LL * x * x);
        }

        sort(sq.begin(), sq.end()); // sort in ascending order

        int n = sq.size(); // size of vector sq
        long long ans = 0;
        for(int i = 0; i<n/2; i++){ // subtract the first half
            ans -= sq[i];
        }
        for(int i = n/2; i<n; i++){ // add the second half
            ans += sq[i];
        }

        return ans;
    }
};