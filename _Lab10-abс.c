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

    //ON 3
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
    
    //ON 4
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


    //ON 5
    int min, sumraz, min1, sum1, sum2, sum3, sum4, sum11, min11, sumraz1, sum22, sum33, sum44,
        sum111, min111, sumraz111, sum222, sum333, sum444;
    cout << "Введите количество минут: \n";
    cin >> min;

    if (min <= 50) {
        sumraz = 1 * min;
        cout << "Сумма за разговор: " << sumraz << " руб.\n";
    } else if (min <= 80 && min > 50) {
        min1 = min - 50; // на сколько минут проговорили больше 50 мин
        sum1 = 1 * 50; // посчитали 50 минут за 1 рубль
        sumraz = 80 * min1; // посчитали на сколько проговорили после 50 мин
        sum2 = sumraz % 100; //считаем копейки
        sum3 = (sumraz - sum2)/100; //считаем рубли
        sum4 = sum1 + sum3; //сумма рублей за 50мин и остаток до 80мин
        cout << "Сумма за разговор: " << sum4 << " руб. " << sum2 << " коп.\n";
    } else if (min > 80 && min <= 100) {
        sum1 = 1 * 50; // посчитали 50 минут за 1 рубль
        sum11 = ((80*30) /100) + sum1; //сколько за 80 минут
        min11 = min - 80; // на сколько минут проговорили больше 80 мин
        sumraz1 = 50 * min11; // посчитали на сколько наговорили на 50 коп.
        sum22 = sumraz1 % 100; //считаем копейки от целого
        sum33 = (sumraz1 - sum22)/100; //считаем рубли
        sum44 = sum11 + sum33; //сумма рублей за 80мин и остаток до 100мин
        cout << "Сумма за разговор: " << sum44 << " руб. " << sum22 << " коп.\n";
    } else {
        sum111 = (1*50) + ((80*30)/100) + ((50*20)/100);
        min111 = min - 100;
        sumraz111 = 30 * min111;
        sum222 = sumraz111 % 100; //считаем копейки от целого
        sum333 = (sumraz111 - sum222)/100; //считаем рубли
        sum444 = sum111 + sum333;
        cout << "Сумма за разговор: " << sum444 << " руб. " << sum222 << " коп.\n";
    }

}