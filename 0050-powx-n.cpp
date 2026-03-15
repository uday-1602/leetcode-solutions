class Solution {
private:
    double power(double x, long m){
        if(m==0) return 1;
        double half = power(x, m/2);
        if(m%2==0){
            return half*half;
        }
        else{
            return x*half*half;
        }
    }
public:
    double myPow(double x, int n) {
        long m = n;
        if(m<0){
            x = 1/x;
            m = -m;
        }
        return power(x, m);
    }
};