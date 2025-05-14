#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "Enter day: ";
    string day;

    cin >> day;

    if(day  == "sunday" || day == "saturday"){
        cout << "It's still the weekend." << endl;

    } else{

        cout << "It's a weekday." << endl; 
    }
    return 0;
}