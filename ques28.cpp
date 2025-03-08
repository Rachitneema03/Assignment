#include <iostream>

using namespace std;

int max(int arr[] , int size);
int min(int arr[] , int size);
int sum(int arr[] , int size);
int search(int arr[] , int n , int size);
int avg(int arr[] , int size);

int main (){
    int n , size;
    int arr[size];
    cout << "enter the size of array: ";
    cin >> size;

    cout << "enter the array of " << size << " element: ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }
    cout << "enter the search element: ";
    cin >> n;

    cout << "the maximum of the array" << max(arr , size);
    cout << "the minimum of the array" << min(arr , size);
    cout << "the sum of the array" << sum(arr , size);
    cout << "the targeted of the array" << search(arr , n , size);
    cout << "the avg of the array" << avg(arr , size);
    
}

int max(int arr[] , int size){
    int max = arr[0];
    for(int i = 1 ; i < size ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else{
            continue;
        }
    }
    return max;
}
int min(int arr[] , int size){
    int min = arr[0];
    for(int i = 1 ; i < size ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        else{
            continue;
        }
    }
    return min;
}
int sum(int arr[] , int size){
    int sum = 0;
    for(int i = 0 ; i < size ; i++){
        sum += arr[i];
    }
    return sum;
}
int search(int arr[] , int n , int size){
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == n){
            return i;
            break;
        }
        else{
            continue;
        }
    }
    return 0;
}
int avg(int arr[] , int size){
    int sum = 0 ;
    for(int i = 0 ; i < size ; i++){
        sum +=arr[i];

    }
    int av = sum/size;
    return av;
}

