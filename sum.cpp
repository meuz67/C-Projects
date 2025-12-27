#include <iostream>
using namespace std;
void total(int x, int sum);
int main()
{
    int UserInput;
    cin >> UserInput;
    total(UserInput+1, 0);
}
void total(int x, int sum)
{
    for (int i = 1; i!=x; i++) {
        sum = sum + i;
        std::cout << sum << std::endl;
    }
}