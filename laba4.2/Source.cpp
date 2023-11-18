#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
   /*Дано вещественное число X (|X | < 1) и целое число N(> 0). Найти значение выражения X − X2
/2 + X3
/3 − . . . + (−1)N −1
·XN /N. Полученное
число является приближенным значением функции ln в точке 1 + X.*/
    float x;
    int n;
    float rezultat;
    do {
        cout << "Введите Х, |X| должен быть < 1 " << endl;



        cin >> x;
        cout << "x= " << x << endl;
    } while (x > 1);
    
    

    do {
        cout << "Введите N,N>0)" << endl;
        cin >> n;
        cout << "n= " << n << endl;
    } while (n < 0);
   
    
        for (int i = 1; i <= n; i++) {
            rezultat = ((pow(-1, n - 1) * pow(x, i)) / i);
        }

        cout << "Результат ln(1/x)= " << rezultat << endl;
    
   
   
    
}


