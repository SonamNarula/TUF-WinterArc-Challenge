class Solution {
public:
    int largestDigit(int n) {
        int largestDigit = 0;

        while (n > 0)
        {
            int lastDigit = n % 10;
            if(lastDigit > largestDigit)
            {
                largestDigit = lastDigit;
            }
            n /= 10;
        }
        return largestDigit;

    }
};
