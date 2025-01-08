#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    // taking input for the size of the array..
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    // declaring the size of the array..
    int arr[n];

    // taking input of elements of array..
    for(int i=0; i<n; i++){
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }

    // printing the original array..
    cout<<"Original Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // initialising the reversed array..
    int reversedArray[n];

    // reversing the array..
    for(int i=0; i<n; i++){
        int j = n-1-i;
        reversedArray[i] = arr[j];
    }

    // printing the reversed array..
    cout<<"Reversed Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<reversedArray[i]<<" ";
    }

    cout<<endl;

    // initialising the palindrome checker variable..
    bool isPalindrome = true;   // initially array is palindrome..
    for(int i=0; i<n; i++){
        if(arr[i] == reversedArray[i]){
            isPalindrome = true;
        }
        else{
            isPalindrome = false;
        }
    }

    if(isPalindrome == true){
        cout<<"The array is Palindrome"<<endl;
    }
    else{
        cout<<"The array is NOT Palindrome!!"<<endl;
    }

    system("pause");
    return 0;
}