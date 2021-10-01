#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter number a:\n";
    cin >> a;
    cout << "Enter number b:\n";
    cin >> b;
    c = (a - b) / 2;
    float PLa = b * c;
    float PLb = b * b;
    float PL = 4 * PLa + PLb;
    cout << "Your answer is:" << PL << endl;
}