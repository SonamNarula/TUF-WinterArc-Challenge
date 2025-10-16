class Solution {
public:
    int GCD(int n1, int n2) {
        int gcd = 1;
        for(int i = 1; i <= min(n1, n2); i++) {
            if(n1 % i == 0 && n2 % i == 0) {
                gcd = i;
            }
        }
        return gcd;
    }
};
