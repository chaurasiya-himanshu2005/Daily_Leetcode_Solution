class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        unordered_set<int> ans;
        vector<int> temp;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                for(int k = 0; k<n; k++){
                    if(digits[i] == 0) continue;
                    if(i == j || j==k || i==k) continue;
                    if(digits[k] % 2 != 0) continue;
                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                    ans.insert(num);
                }
            }
        }
        for(auto it:ans){
            temp.push_back(it);
        }
        sort(temp.begin(),temp.end());
        return temp;
    }
};