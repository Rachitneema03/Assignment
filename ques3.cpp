// WAP to print table of a given number upto n multiple

#include <iostream>
using namespace std;

int main(){
    int n , i;
    cout << "enter the no. for the tabel: ";
    cin >> n;

    cout << "enter to which multiply: ";
    cin >> i;

    for(int j = 1 ; j <= i ; j++){
        cout << n << " x " << j <<  " = " << j*n << endl;
    }
}