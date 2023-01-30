#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:" << "\n";
    cin >> n;
    cout << "\n";
    int rev_n = 0;
    if (999 >= n || n > 9999)
        cout << "Input uncorrect number" << endl;
    while (n)
    {
        rev_n = rev_n * 10 + (n % 10);;
        n /= 10;
    }
    cout << rev_n << endl;
}
