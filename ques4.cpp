/* WAP to find
i) greater of two no.
ii) greater of three no.
*/

#include <iostream> 
using namespace std;

void compare(int a , int b);
void compare(int a , int b , int c);

int main(){
    int a, b ,c , n;

    cout << "choose option\ni) greater of two no.\nii) greater of three no.";

    cin >> n;

    switch (n)
    {
    case 1:
    cout << "Enter two numbers to compare: ";
    cin >> a >> b;
    compare(a , b);
    break;

    case 2:
    cout << "Enter three numbers to compare: ";
    cin >> a >> b >> c;
    compare(a , b , c);
    
    default:
    cout << "enter vaild input";
        break;
    }

}

void compare(int a , int b){
    if(a > b){
        cout << a << " is greatest among both";
    }
    else{
        cout << b << " is greatest among both";
    }
}

void compare(int a , int b , int c){
    if(a > b && a > c){
        cout << a << " is greatest among both";
    }
    else if (b > c)
    {
        cout << b << " is greatest among both";
    }
    else{
        cout << c << " is greatest among both";
    }
    
}