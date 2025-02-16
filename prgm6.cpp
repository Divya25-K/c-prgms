#include<iostream>
#include<string>
using namespace std;

class STRING
{
private:
    string str;  
public:
   
    STRING(const char* s = "") 
    {
        str = s;
    }

    STRING operator++(int) 
    {
        STRING temp = *this;  
        str += " concatenated";  
        return temp;  
    }

    bool operator==(const STRING& s) 
    {
        return (str == s.str);  
    }

    void display() const 
    {
        cout << "String: " << str << endl;
    }
};

int main() 
{
    char input1[100], input2[100];

    cout << "Enter the first string: ";
    cin.getline(input1, 100);

    cout << "Enter the second string: ";
    cin.getline(input2, 100);

    STRING s1(input1);
    STRING s2(input2);

    cout << "String 1: "<<endl;
    s1.display();

    cout << "String 2: "<<endl;
    s2.display();

    s1++;

    cout << "After concatenation using '++': "<<endl;
    s1.display();

    if (s1 == s2)
    {
        cout << "The strings are equal." << endl;
    }
    else 
    {
        cout << "The strings are not equal." << endl;
    }

    return 0;
}
