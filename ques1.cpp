// WAP to find the given nno. is even or odd

#include <iostream>

using namespace std;

int main (){
    int n;
    cout << "enter the no to check it is even or odd: ";
    cin >> n;

    if(n % 2 == 0){
        cout << "the given no. is even";
    }
    else{
        cout << "the given no. is odd";
    }
}