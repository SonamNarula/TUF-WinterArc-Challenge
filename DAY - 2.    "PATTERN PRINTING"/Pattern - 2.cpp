// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// *
// **
// ***
// ****
// *****
// Print the pattern in the function given to you.

class Solution {
public:

    static void pattern2(int n) {
        
        // Outer loop for the rows.
        for (int i = 0; i < n; i++) {
            
            // Inner loop for the columns.
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            
            cout << endl;
        }
    }
};
