// WAP to reverse the no.

#include <iostream>
using namespace std;

int main(){
    int n , rev = 0;
    cout << "enter the no. to reverse: ";
    cin >> n;

    while(n > 0){
        int r = n%10;
        rev = (rev*10) + r;
        n = n/10;
    }

    cout << "the reverse of the no is " << rev;
}