// Given an integer age, print on the screen:

// Adult if age >= 18
// Teen if age < 18
// Do not change the case of any letter in "Adult" and "Teen" while printing the answer.

class Solution {
public:

    /* Function to check if the person
    in an adult or a teen */
    void isAdult(int age) {
        
       // If age is greater than 18
        if (age >= 18) {
            // The person is an adult
            cout << "Adult\n";
        } 
        
        // Otherwise
        else {
            // The person is a teen
            cout << "Teen\n";
        }
    }
};
