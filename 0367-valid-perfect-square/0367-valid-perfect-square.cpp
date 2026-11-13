class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<1) return 0;
    for(long long i=1; i<=num; i++){
        if(i*i==num) return true;
    }
    return false;
    }
};