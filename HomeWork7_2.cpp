﻿#include <iostream>
#include<stdio.h>
using namespace std;
//int F(int n);
//int G(int n);

int F(int n)
{
    if (n == 1)
    
        return 1;

        if (n % 2 == 0)
        return  n + F(n - 1);
       
        else

        return  2 * F(n - 2);

    
    


}






int main()
{
    setlocale(LC_ALL, "RU");
   
    int n, m, result;
    cout << "Введите число " << "n :";
    cin >> n;
    F(n);
    cout << endl;
    cout << F(n);
    //result = F(n) + G(m);
    //cout << "F(n) = " << F(n) << ";" << endl;
    //cout << "G(n) = " << G(n) << ";" << endl;
    //cout << endl;
    //cout << "F(n) + G(m) = " << result;
}
//Напишите программу для  вычисления значения функции F(n), где n — натуральное число, задана следующими соотношениями :
//F(1) = 1;
//F(n) = n + F(n − 1), если n чётно;
//F(n) = 2 · F(n − 2), если n > 1 и при этом нечётно.
//Пользователь вводит n, программа должна вывести значение F(n).











