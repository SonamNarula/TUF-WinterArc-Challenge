// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


// Print the pattern in the function given to you.


class Solution {
public:
    void pattern19(int n) {
        int iniS = 0;
        for(int i=0; i< n; i++){
            for(int j = 1; j <= n-i; j++){
                cout<<"*";
            }
            for(int j = 0; j <iniS; j++){
                cout<<" ";
            }
            for(int j = 1; j <= n-i; j++){
                cout<<"*";
            }
            iniS+=2;
            cout<<endl;
        }
        iniS = 2*n -2;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout<<"*";
            }
            for(int j = 0; j <iniS; j++){
                cout<<" ";
            }
            for(int j = 1; j <= i; j++){
                cout<<"*";
            }
            iniS-=2;
            cout<<endl;
        }
    }
};
