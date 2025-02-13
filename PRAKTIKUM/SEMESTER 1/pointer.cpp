#include <iostream>
using namespace std;
void b(int x)
{
    x += 5;
}

int main()
{
    int a = 12;
    cout << a << endl;
    b(a);
    cout << a << endl;
}