#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    cout << setw(6) << "Odd" << setw(6) << "Even" << endl;
    for(int i = 1; i < 20; i = i + 2){

        cout << setw(6) << i << setw(6) << i + 1 << endl;


    }
//this would be the same as the for loop basically for = while
    int i = 1;
    while(i < 20){

        cout << setw(6) << i << setw(6) << i + 1 << endl;
        i = i + 2;

    }
    

    return 0;
}//when the file is made. just do make rather then cmake to get it to save