// Overload >>(stream extraction) and <<(stream insertion) operators to input and display time.

#include<iostream>

using namespace std;

class Time {
    int hr, min, sec;

public:
    friend ostream& operator<<(ostream &, Time &);
    friend istream& operator>>(istream &, Time &);
};

istream &operator>>(istream &input, Time &t) {
    input >> t.hr >> t.min >> t.sec;
    return input;
}

ostream &operator<<(ostream &output, Time &t) {
    output << t.hr << ":" << t.min << ":" << t.sec; 
    return output;
}


int main() {
    Time t;
    cout << "Enter time in format HH MM SS: ";
    cin >> t;  
    cout << "You entered: " << t << endl;
    return 0;
}