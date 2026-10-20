class Solution {
public:
    long long sumAndMultiply(int n) {
         int sum = 0;
        int ans = 0, pt = 1;
        while(n != 0){
            int digit = n%10;
            sum += digit;
            if(digit != 0){
                ans += pt * digit;
                pt *= 10;
            }
            n/=10;
        }
        return (long)sum * ans;
    }
};