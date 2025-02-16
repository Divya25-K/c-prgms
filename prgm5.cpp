#include <iostream>
using namespace std;
class counter
{
private:
int value;
public:
counter(int v = 0) {
value = v;
}
~counter() {
cout << "Destructor called" << endl;
}
counter& operator++() {
value++;
return *this;
}
counter operator++(int) {
counter temp = *this;
value++;
return temp;
}
counter& operator--() 
{
value--;
return *this;
}
counter operator--(int) 
{
counter temp = *this;
value--;
return temp;
}
void display() 
{
cout << "Value: " << value << endl;
}
};
int main() 
{
counter c(10);
cout << "Initial value: "<<endl;
c.display();
++c;
cout << "After prefix increment: "<<endl;
c.display();
c++;
cout << "After postfix increment: "<<endl;
c.display();
--c;
cout << "After prefix decrement: "<<endl;
c.display();
c--;
cout << "After postfix decrement: "<<endl;
c.display();
return 0;
}
