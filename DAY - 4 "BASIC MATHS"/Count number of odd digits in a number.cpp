class Solution {
public:
    int countOddDigit(int n) {

        int oddDigits = 0;

        while (n > 0)
        {
            int lastDigit = n % 10;

            if(lastDigit % 2 != 0)
            {
                oddDigits += 1;
            }
            n /= 10;
        }

        return oddDigits;

    }
};
