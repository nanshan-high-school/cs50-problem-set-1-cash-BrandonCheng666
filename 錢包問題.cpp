#include <iostream>
using namespace std;

int main()
{
    float dollars;
    do {
        cout << "輸入金額：";
        cin >> dollars;
    } while (dollars < 0);

    int dimes = dollars * 10;

    int number = 0;

    number += dimes / 10000;
    
    dimes = dimes % 10000;

    number += dimes / 5000;
    dimes = dimes % 5000;

    number += dimes / 1000;
    dimes = dimes % 1000;

    number += dimes / 500;
    dimes = dimes % 500;

    number += dimes / 100;
    dimes = dimes % 100;
    
    number += dimes / 50;
    dimes = dimes % 50;
    
    number += dimes / 10;
    dimes = dimes % 10;

    number += dimes / 5;
    
    number += dimes % 5;

    cout << number;
}
