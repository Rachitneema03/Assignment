// WAP to find given no. is prime or composite

#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "enter the no to check it is prime or not";
    cin >> n;

    for(int i = 2; i <= n ; i++){
        int m = 0;
        for(int j = 2 ; j < i ; j++){
            if(i % j == 0){
                m = 2;
            }
        }
        if(m == 0){
            cout << ""
        }
    }
}