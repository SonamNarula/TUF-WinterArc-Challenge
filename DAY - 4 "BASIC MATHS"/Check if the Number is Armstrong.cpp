class Solution {
private:
    int countDigit(int n) {
        int count = log10(n) + 1;
        return count;
    }
    
public:

    bool isArmstrong(int n) {
        int count = countDigit(n);
        int sum = 0;
        int copy = n;
        while(n > 0){
            int lastDigit = n % 10;
            sum += pow(lastDigit, count); 
            n = n / 10;
        }
        if(sum == copy) return true;
        return false;
    }
};
