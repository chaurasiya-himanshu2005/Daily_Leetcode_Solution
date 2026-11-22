class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0) return true;
    if(x<0 || x%10==0) return false;
    long rev=0;
    int temp = x;
    while(x!=0){
        int ld = x % 10;
        rev = rev * 10 + ld;
        x/=10;
    }
    if(rev == temp) return true;
    return false;
    }
};