#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n, sum1, sum2, sum3;

    cout << "n 입력 :";
    cin >> n;

    int i = 1;
    while(i <= n){
        sum1 += i;
        sum2 += i * i;
        sum3 += i * i * i;
        i++;
    }

    cout << "sum1의 값은 :" << sum1 << endl;
    cout << "sum2의 값은 :" << sum2 << endl;
    cout << "sum3의 값은 :" << sum3 << endl;


    return 0;
}