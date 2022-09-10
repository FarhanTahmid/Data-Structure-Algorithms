#include <iostream>
using namespace std;

int main(){
    int numberOfElements;
    cout<<"Enter the number of elements you want in the array: ";
    cin>>numberOfElements;

    int arr[numberOfElements];
    cout<<"\n Enter the array elements: \n";
    for(int i=0;i<numberOfElements;i++){
        cout<<"["<<i<<"] :";
        cin>>arr[i];
    }

    cout<<"\nUnsorted array:\n";
    for (int i=0;i<numberOfElements;i++){
        cout<<arr[i]<<" ";
    }


    for(int i=1;i<numberOfElements;i++){
        int current =arr[i];;
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    cout<<"\nSorted array by insertion sort is :\n";
    for (int i=0;i<numberOfElements;i++){
        cout<<arr[i]<<" ";
    }
}