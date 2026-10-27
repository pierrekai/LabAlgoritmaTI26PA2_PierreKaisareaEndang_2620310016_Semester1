#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int a = 3, b = 2, c = 1, bil;

    cout << "Bil-A | Bil-B | Bil-C" << endl;
    cout << "---------------------" << endl;

    for (bil = 1; bil <= 10; ++bil) 
    {
        a += b;
        b += c;
        c += 2;

        cout << left << setw(5) << a << " | "
             << setw(5) << b << " | "
             << c << endl;

        if (c == 13) 
        {
            break;
        }
    }

    return 0;
}