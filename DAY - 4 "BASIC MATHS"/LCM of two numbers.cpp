class Solution {
public:
    int LCM(int n1,int n2) {
        int lcm;
        int n = max(n1, n2);
        int i = 1;
        while(1) {
            int mul = n * i;
            if(mul % n1 == 0 && mul % n2 == 0) {
                lcm = mul;
                break;
            }
            i++;
        }
        return lcm;
    }
};
