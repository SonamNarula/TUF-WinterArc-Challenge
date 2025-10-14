// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1

// Print the pattern in the function given to you.

class Solution {
public:
    void pattern11(int n) {
        int start = 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) start = 1;

            else start = 0;
            for (int j = 0; j <= i; j++) {
                cout << start << " ";
                start = 1 - start;
            }
            cout << endl;
        }
    }
};
