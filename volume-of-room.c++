#include <iostream>
using namespace std;
class room
{
public:
    int a;
    int b;
    int c;
    int area()
    {
        return a * b * c;
    }
};
int main()
{
    room obj;
    cout << "enter length:";
    cin >> obj.a;
    cout << "enter breadth:";
    cin >> obj.b;
    cout << "enter height:";
    cin >> obj.c;
    cout << "area:" << obj.area() << endl;
}