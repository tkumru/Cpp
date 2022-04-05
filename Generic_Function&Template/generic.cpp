#include<iostream>

using namespace std;

template<typename Type>
void Swap(Type& x, Type& y){
    Type temp = x;
    x = y;
    y = temp;
}

int main(){
    char a = 't', b = 'a';

    cout << a << "-->" << b << endl;
    Swap(a, b);
    cout << a << "-->" << b << endl;

    return 0;
}
