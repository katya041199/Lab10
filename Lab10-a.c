#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    int a, b, c, d, e, f, g;
    cout << "Введите три числа a, b, c: \n";
    cin >> a >> b >> c;
    cout << "Введите число d: \n";
    cin >> d;

    if (a == d) {
        cout << "Числа a и d совпадают\n";
    } else if (b == d) {
        cout << "Числа b и d совпадают\n";
    } else if (c == d) {
        cout << "Числа c и d совпадают\n";
    } else {
        e = d - a;
        f = d - b;
        g = d - c;
        
        if (e > f && e > g) {
            cout << "Максимальное d - a = " << e << "\n";
        } else if (f > e && f > g) {
            cout << "Максимальное d - b = " << f << "\n";
        } else {
            cout << "Максимальное d - c = " << g << "\n";
        }
    }
    

}