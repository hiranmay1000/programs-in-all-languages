#include <bits/stdc++.h>

using namespace std;

template<typename T>

T d(T num1, T num2){
    return (num1 > num2) ? num1 : num2;
}

int main()
{
    cout << d<int> (2, 12) << endl;
    cout << d<double> (2.5, 2.15) << endl;
}