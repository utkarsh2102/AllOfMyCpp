#include<iostream>
using namespace std;

class introduction
{
    char name[20];
    int age;

    public: 
        void getdata();
        void putdata();
};

void introduction :: getdata()
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
}

void introduction :: putdata()
{
    cout << "What's up, " << name << "?\n";

    if (age < 19)
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
    introduction intro;
    intro.getdata();
    intro.putdata();
    return 0;
}
