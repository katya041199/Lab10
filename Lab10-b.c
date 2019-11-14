#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    
    int stknig, summapok, sdacha, nedostatok;
    cout << "Введите стоимость книг: \n";
    cin >> stknig;
    cout << "Введите сумму денег, внесенную покупателем: \n";
    cin >> summapok;

    if (summapok > stknig) {
        sdacha = summapok - stknig;
        cout << "Возьмите сдачу: " << sdacha << "\n";
    } else if (summapok < stknig) {
        nedostatok = stknig - summapok;
        cout << "Недостаточно средств, в размере: " << nedostatok << "\n";
    } else {
        cout << "Спасибо за покупку! \n";
    } 

}