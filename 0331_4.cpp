#include <iostream>

using namespace std;

int main(){

    int number;
    cout << "정수 입력: ";
    cin >> number;

    cout << number << "이하의 자연수 중 3 혹은 5의 배수는" << endl;
    cout << "-----------------------------------" << endl;

    int i = 1;
    int count = 0;
    while(i <= number){
        if(i %3 == 0 || i % 5 ==0){
            cout << i << endl;
            count++;
        }
    i++;
    }

    cout << "-----------------------------------" << endl;
    cout << "총 " << count << "개 입니다. " << endl;

    return 0;
}