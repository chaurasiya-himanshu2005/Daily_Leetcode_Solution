class Solution {
public:
    int largestInteger(int n, int s) {
        if(s > 9 * n) return -1;
        if(s == 0) return 0;

        int num = 0;

        while(n > 0){
            if(s >= 9){
                num = num * 10 + 9;
                s -= 9;
            }
            else{
                num = num * 10 + s;
                s = 0;
            }

            n--;
        }

        return num;
    }
};