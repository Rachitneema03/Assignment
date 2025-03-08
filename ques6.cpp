// WAP to find factorial of given no.

#include <iostream>
using namespace std;

int fact(int n);
int main(){
    int n;
    cout << "enter the no. to find factorial: ";
    cin >> n;

    cout << "the factorial of " << n << " is " << fact(n);
    return 0;
}

int fact(int n){
    int facto = 1;
    for(int i = n ; i > 0 ; i--){
        facto *= i;
    
    }
    return facto;
}