#include <iostream>
using namespace std;

// 1

int main(){
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

//2

int main(){
    for(int i = 5 ; i > 0 ; i--){
        for(int j = 0 ; j < i ; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

// 3

int main(){
    for(int i = 1 ; i <= 3 ; i++){
        for(int j = 5-i ; j > 0 ; j--){
            cout << " ";
        }
        for(int k = 1 ; k <= (2*i)- 1 ; k++){
            cout << "*";
        }
        cout << "\n";
    }

}

// 4

int main(){
    for(int i = 1 ; i <= 5 ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << i;
        }
        cout << "\n";
    }
}


// 6

int main (){
    int count = 1;
    for(int i = 1 ; i < 5 ; i++ ){
        for(int j = 1 ; j <= i ; j++){
            cout << count;
            count++;
        }
        cout << "\n";
    }
}
