#include <iostream>
using namespace std;

int main() 
{
    int total = 0;
    int hitung = 0;
    int bilangan = 1;

    cout << "Deret bilangan ganjil: ";

    while (hitung < 10) 
    {
        cout << bilangan;
        total += bilangan;
        hitung++;
        {

            cout << " + ";
        }
        
        bilangan += 2; 
    }

    cout << " = " << total << endl;

    return 0;
}