#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int number; //this is the set up for the a, b, c, d, e
    int userInp = 0;
    int minimum = 0;
    int maximum = 0;
    int total = 0;

    //set up the count for the user to input
    while(userInp < 5){

        cout << "Enter five positive numbers that are greater then 0 and are all divisable by 3: " << endl;
        cin >> number;

        //now set up the if statement in here. I thought about doing the if-else for each one, but looked up some youtube videos to make the work less
        if (number > 0 && number % 3 == 0){

            //get the total from here. The loop will calculate each time
            total += number; 

            //min and max
            if (userInp == 0){

                minimum = number;
                maximum = number;

            } else{
                
                //Set the min and max
                if(number < minimum) minimum = number;
                if(number > maximum) maximum = number;

            }

            userInp++;

        }else{

            cout << "Invalid integer. Not a positive and or not a multiple of 3." << endl;

        }


    }

    //avg = total / userInp
    double avg = total / userInp; //the assignment states for an avg with a decimal point

    cout << endl;
    cout << setw(8) << "Count" << setw(10) << "Minimum" << setw(10) << "Maximum" << setw(10) << "Total" << setw(10) << "Average" << endl;
    cout << setw(8) << userInp << setw(10) << minimum << setw(10) << maximum << setw(10) << total;
    printf("%10.2f\n", avg);

    return 0;
}