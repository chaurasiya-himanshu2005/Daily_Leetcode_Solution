class Solution {
public:
    int reverse(int x) {
    long long int reverseNumber=0;
    while(x!=0){
        reverseNumber = reverseNumber*10 + x%10;
        x/=10;
    }
    if(reverseNumber >= pow(-2, 31) && reverseNumber <= (pow(2, 31)-1))
    return reverseNumber;
    else return 0;
    }
};