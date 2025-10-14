// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

//     * 
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *


// Print the pattern in the function given to you.

class Solution {
public:

    void pattern9(int n) {
        erect_pyramid(n);
        inverted_pyramid(n);
    }
private: 
    void erect_pyramid(int n) {
        
        for (int i = 0; i < n; i++){

            for (int j = 0; j < n - i - 1; j++) {
                cout<< " ";
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout<< "*";
            }
            cout << endl;
        }
    }
    void inverted_pyramid(int n){
        for (int i = 0; i < n; i++){
            for (int j =0; j<i; j++){
                cout<< " ";
            }
            for(int j=0;j< 2*n -(2*i +1);j++){
                cout<< "*";
            }
            cout<< endl;
        }
    }
};
