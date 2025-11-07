//
// Created by Dr.Jorge on 06/11/25.
//
#include <iostream>
using namespace std;

int suma(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2, total;
    cout << "Ingresa el primer numero: "; cin >> num1;
    cout << "Ingresa el segundo numero: "; cin >> num2;

    total = suma(num1, num2);
    cout << "El resultado es " << total << endl;
    return 0;
}