class Solution {
   private:
    bool isPrime(int n) {
        int count = 0;
        for (int i = 1; i <= n; ++i) {
            if (n % i == 0) {
                count = count + 1;
            }
        }
        if (count == 2) return true;
        return false;
    }

   public:
    int primeUptoN(int n) {
        int count = 0;
        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) count++;
        }
        return count;
    }
};
