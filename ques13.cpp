// Write a program to print first 50 prime number

#include <iostream>
using namespace std;

int main ()
{
    int count = 1;

    for(int i = 2 ; i < 1000 ; i++)
    {
        int m = 0;
        for(int j = 2 ; j < i ; j++)
        {
            if(i % j == 0)
            {
             
               m++;
            }
        }
        if(m == 0)
        {
            cout << count << ". " << i << endl;
            count++;
        }
        if( count >= 51){
            break;
        }
    }
}
