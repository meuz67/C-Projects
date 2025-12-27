#include <iostream>
using namespace std;
void total(int x);
int main()
{
    cout << "Вычисление суммы чисел от 1 до 5.\n";
    total(5);
    cout << "\n Вычисление суммы чисел от 1 до 6.\n";
    total(6);
    return 0;
}
void total(int x)
{
    int sum=0;
    int i, count;
    for(i=1; i<=x; i++) {sum = sum + i;
        for(count=0; count<10; count++) cout << '.';
        cout << "Промежуточная сумма равна " << sum << '\n';
    }
}