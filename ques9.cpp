// WAP to find that the given no. is palindrome or not

#include <iostream>
using namespace std;

int main(){
    int n , rev = 0 , original;
    cout << "enter the no. to check: ";
    cin >> n;

    original = n;

    while(n > 0){
        int r = n % 10;
        rev = (rev * 10) + r;
        n = n /10;

    }

    if(original == rev){
        cout << "the given no. is palindrome";
    }
    else{
        cout << "the given no. is not a palindrome";
    }
}