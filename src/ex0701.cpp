#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class Color {
private: 
    double r, g, b;

public:
    Color():r(0.0), g(0.0), b(0.0){}
    Color(double r, double g, double b):r(r), g(g), b(b){}

    string toRGB(){
        stringstream sout;
        sout << "rgb(" << static_cast<int>(r * 255) << "," << static_cast<int>(g * 255)
            << "," << static_cast<int>(b * 255) << ")";
        //static_cast<int> is a special process in C++ that forces into an int

        return sout.str();//gives us the sout from above. What happens if there  is 2?
    }

        string toHEX(){ // #01AC03
        stringstream sout;
        sout << "#" << setfill('0') << hex 
            << setw(2) << static_cast<int>(r * 255) 
            << setw(2) << static_cast<int>(g * 255)
            << setw(2) << static_cast<int>(b * 255);
        //This set is for the toHEX part. You can adjust the color manually from there

        return sout.str();//gives us the sout from above. What happens if there  is 2?
    }
};
int main(){
    Color c; //black with the 0 on all of the color set above
    Color c1(1.0, 0.25, .5); //this goes off the color in line 14

    cout << c.toRGB() << " --- " << c.toHEX() << endl;
    cout << c1.toRGB() << " --- " << c1.toHEX() << endl;
    return 0;
}