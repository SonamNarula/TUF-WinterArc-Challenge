// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA


// Print the pattern in the function given to you.

class Solution {
public:
    void pattern17(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            char ch = 'A';
            int breakpoint = (2 * i + 1) / 2;
            for(int j = 1; j <= 2 * i + 1; j++) {
                cout << ch;
                if(j <= breakpoint)
                    ch++;
                else
                    ch--;
            }
            cout << endl;
        }
    }
};
