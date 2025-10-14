// Given two integers X and N, print the value X on the screen N times.

// Separate each number by a single space.
// Do not add a space after the last number.
// After printing all N numbers, move to the next line.
// If N = 0, still move to the next line (print an empty line).

class Solution {
public:
    void printX(int X, int N) {

        if(N < 0)
        {
            cout<<"Invalid no of times" << endl;
            return;
        }
        for(int i = 0; i < N; i++)
        {
            cout << X;

            if (i < N - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
};
