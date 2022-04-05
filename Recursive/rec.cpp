#include<iostream>

using namespace std;

int recursive_sum(int m, int n){ // sum numbers between n and m
    if (m == n)
    {
        return m;
    }
    return m + recursive_sum(m + 1, n);
}

int main(){
    int m = 2, n =5;

    cout << recursive_sum(m, n) << endl;

    return 0;
}