#include <iostream>
#include <math.h>

using namespace std;
//25.Дані гіпотенуза і катет прямокутного трикутника. Знайти другий катет цього трикутника
int main()
{
    double a, b; // катети
    double c; // гіпотенуза
    cout << "Hypotenuse c = "; cin >> c;
    cout << "Cathetus a = "; cin >> a;
    b = sqrt(pow(c, 2) - pow(a, 2)); //обчислення гіпотенузи
    if (a + b > c && a + c > b && b + c > a) { //перевірка існування трикутника
        printf("Cathetus b =%5.2f\n", b);
    } else {
        cout << " Error " << endl;
    }
    return 0;
}

