#include <iostream>
using namespace std;
int main()

{
    while (true) //starting loop
     {
        int number; //declaration of variable 'number'
        
        cout << "enter a number (0 to exit): "; //user to enter a number
        cin >> number; //read the input by the user 
        
        if (number == 0) //checking if zero entered
        {
            break; //if yes, then exit the loop and end program
        }
     
        
        int reverse = 0; // Declare and initialize an integer variable 'reverse' to zero

        while (number != 0) //start loop as long as 'number' is not equal to zero
        {
            int digit = number % 10; //extract the last digit of the number by dividing the number by 10, as % here is for the remainder and one by one last digit will be extracted
            reverse = reverse * 10 + digit; //its adding each number extracted above,nitially, reverse is 0. So, 0 * 10 + 3 becomes 3. The notebook now says 3. Next time, if the digit was 2, it'd become 32. If the digit was 1, it'd become 321.
            number = number / 10; //remove the last digit from 'number'.Take away the last digit from the original number." So, if our original number was 123, after this line, it becomes 12. If it was 12, it'd become 1. And if it was 1, it'd become 0.
        }

        cout << "reversed number: " << reverse << endl; //Display the reversed number
     }

     return 0; 

}