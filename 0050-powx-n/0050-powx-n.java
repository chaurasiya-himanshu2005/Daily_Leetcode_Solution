class Solution {
    public double callPower(double x, int n){
        if(n == 0) return 1;
        double p = callPower(x, n/2);
        if(n%2==0){
            return p*p;
        }else return p*p*x;
    }
    public double myPow(double x, int n) {
        if(x == 1 || n == 0) return 1;
        double res = callPower(x, Math.abs(n));
        if(n<0) return 1/res;
        return res;
    }
}