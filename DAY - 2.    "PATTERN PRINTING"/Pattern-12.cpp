// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321


// Print the pattern in the function given to you.

class Solution {
public:
    void pattern12(int n) {
      int spaces = 2*(n-1);
      for(int i=1;i<=n;i++){
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          for(int j=i;j>=1;j--){
              cout<<j;
          }

          cout<<endl;

          spaces-=2;
        }
    }

};
