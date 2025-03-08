// Write a program to print Fibbonaci Series upto n number

#include <iostream>
using namespace std;

int main(){
    int n, a = 0 , b = 1 , temp;
    cout << "enter upto which term: ";
    cin >> n;

    for(int i = 0 ; i <= n ; i++){
        temp = a + b;
        cout << temp << endl;
        a = b;
        b = temp;
    }
}