#include <iostream> 
using  namespace std;
int main() {
    int now = 0, old = 0;
    for (int i = 0; i < 7; i++) {
        cout << i + 1 << "-th number: ";
        cin >> now;
        if (now > old) {
            old = now;
        }
    }
    cout << "Maximum number:" << old;
}
