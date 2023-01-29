#include <iostream> 
using  namespace std;
void main()
{
    long a, b, a1, a2, a3, a4, a5, a6;  
    cout << "Enter a six-digit number:";
    cin >> a;
    b = a;
    a1 = a / 100000; b = a % 100000;
    a2 = b / 10000; b  %= 10000;
    a3 = b / 1000; b  %= 1000;
    a4 = b / 100; b  %= 100;
    a5 = b / 10; b  %= 10;
    a6 = b;
    if (99999 >= a || a > 999999)
        cout << "You entered uncorrect number!" << endl;
    else

        if ((a1 + a2 + a3) == (a4 + a5 + a6))
            cout << "You entered lucky number!" << endl;
        else
        {
            ((a1 + a2 + a3) != (a4 + a5 + a6));
            cout << "You entered not lucky number!" << endl;
        }


    system("pause");
}