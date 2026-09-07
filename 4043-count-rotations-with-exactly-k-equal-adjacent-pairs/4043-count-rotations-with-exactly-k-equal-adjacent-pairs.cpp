class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.length();
        int ans = 0;
        for(int i = 0; i<n; i++){
            string temporary = s.substr(i) + s.substr(0,i);
            int count = 0;

            for(int j = 0; j<n-1; j++){
                if(temporary[j] == temporary[j+1]){
                    count++;
                }
            }
            if(count == k){
                ans++;
            }
        }
        return ans;
    }
};