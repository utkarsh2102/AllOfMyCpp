#include<iostream>
using namespace std;

class introduction                                          // defining a class
{
    char name[20];                                          // private data members of the class
    int age;

    public: 
        void getdata();                                     // public member functions of the class
        void putdata();
};

void introduction :: getdata()                              // defining the scope of the function w.r.t. class
{
    cout << "Enter your name: ";
    cin >> name;                                            // accessing private data members through.. 
    cout << "Enter your age: ";
    cin >> age;                                             // ..public member functions   
}

void introduction :: putdata()
{
    cout << "What's up, " << name << "?\n";

    if (age < 13)
        cout << "Are you even born yet?" << endl;
    else if (age > 12 && age < 19)
        cout << "Eh, a teenager? You are just " << age << ". Grow up, kid!.\n";
    else if (age > 18 && age < 30)
        cout << "Oo, a young lad there! So you're " << age << ", haan? Sweet.\n";
    else if (age > 29 && age < 40)
        cout << "Oo, a mature person, are you? Flying in your " << age << ", eh? Awesome.\n";
    else
        cout << "Oh, my, my. You are getting old. You've lived " << age << " years already!\n";
}

int main (int argc, char *argv[])
{
    introduction intro;                                     // creating an object "intro" of the class
    intro.getdata();                                        // function calling    
    intro.putdata();
    return 0;
}
