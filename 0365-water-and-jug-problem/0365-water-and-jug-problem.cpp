class Solution {
public:
    int findGCD(int a, int b){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    bool canMeasureWater(int x, int y, int target) {
        if(x + y < target) return false;
        int g = findGCD(x,y);
        return target % g == 0;
    }
};