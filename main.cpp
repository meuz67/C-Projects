#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter 1 number";
    cin>>a;
    cout<<"Enter 2 numbers";
    cin>>b;
    cout<<"Enter what you want to do";
    cin>>c;
    if (c==1) {
        c = a+b;
    }
    else if (c==2) {
        c = a-b;
    }
    else if (c==3) {
        c = a*b;
    }
    else if (c==4) {
        c = a/b;
    }
    cout << c;
}
