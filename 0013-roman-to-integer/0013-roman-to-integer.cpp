class Solution {
public:
    int convert(char ch){
        if(ch == 'I') return 1;
        else if(ch == 'V') return 5;
        else if(ch == 'X') return 10;
        else if(ch == 'L') return 50;
        else if(ch == 'C') return 100;
        else if(ch == 'D') return 500;
        else if(ch == 'M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int ans = 0;

        for(int i = 1; i<= s.size(); i++){
            int currVal = convert(s[i-1]);
            if(i < s.size() && currVal < convert(s[i])){
                ans = ans - currVal;
            }else{
                ans = ans + currVal;
            }
        }
        return ans;
    }
};