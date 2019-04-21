#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int m,a;
    cin >> m;

    a=0;

    while ( m != 0 ){
        a = a*10 + m%10;
        m=m/10;
    }
    cout << a;
    getch();
    return 0;
}
