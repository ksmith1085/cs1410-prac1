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

    string toRGB() const{
        stringstream sout;
        sout << "rgb(" << static_cast<int>(r * 255) << "," << static_cast<int>(g * 255)
            << "," << static_cast<int>(b * 255) << ")";
        //static_cast<int> is a special process in C++ that forces into an int

        return sout.str();//gives us the sout from above. What happens if there  is 2?
    }

        string toHEX() const { // #01AC03
        stringstream sout;
        sout << "#" << setfill('0') << hex 
            << setw(2) << static_cast<int>(r * 255) 
            << setw(2) << static_cast<int>(g * 255)
            << setw(2) << static_cast<int>(b * 255);
        //This set is for the toHEX part. You can adjust the color manually from there

        return sout.str();//gives us the sout from above. What happens if there  is 2?
    }

    friend ostream& operator<<(ostream& out, const Color& c){
        out << c.toHEX();
        return out;
    }

    friend istream& operator>>(istream& in, Color& c){
        in >> c.r >> c.g >> c.b;
        return in;
    }

    double operator[](int index) const{
        switch(index){
            case 0: return r;
            case 1: return g;
            case 2: return b;
            default: return -1.0;//invalid value
        }
    }

    double& operator[](int index) {
        switch(index){
            case 0: return r;
            case 1: return g;
            case 2: return b;
            default: throw -1.0;
        }
    }

    bool operator==(const Color& c){
        return r == c.r && g == c.g && b == c.b;
    }
};
int main(){
    Color c; //black with the 0 on all of the color set above
    Color c1(1.0, 0.25, .5); //this goes off the color in line 14

    cout << c << endl; //<< (cout, c)
    cout << c1 << endl; 

    cout << c.toRGB() << " --- " << c.toHEX() << endl;
    cout << c1.toRGB() << " --- " << c1.toHEX() << endl;

    Color c2;
    cout << "Enter a color (three values between 0.0 and 1.0):";
    cin >> c2;

    cout << "\nC1 red:" << c1[0] << endl; //read-only
    cout << "\nC green:" << c[1] << endl;
    cout << "\nC2 blue:" << c2[2] << endl;

    c2[1] = .6; //write

    if(c1==c2){ //(==(c1, c2) becomes c1.==(c2)
        cout << "same" << endl;
    } else{
        cout << "differrent" << endl;
    } 

    return 0;
}