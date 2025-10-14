// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// *****
// *****
// *****
// *****
// *****

// Print the pattern in the function given to you.


class Solution {
public:
    //Function to print pattren1
    void pattern1(int n) {
        
        // Outer loop will run for rows.
        for (int i = 0; i < n; i++) {
            
            // Inner loop will run for columns.
            for (int j = 0; j < n; j++) {
                cout << "*";
            }
            /* As soon as n stars are printed, move
            to the next row and give a line break.*/
            cout << endl;
        }
    }

};
