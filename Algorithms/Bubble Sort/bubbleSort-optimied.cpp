#include<iostream>
using namespace std;;

void bubbleSort(int arr[],int size){
    for(int step=0;step<size-1;step++){
        int swapped=0;
        for(int i=0;i<(size-step-1);i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
    cout<<"{";
    for(int i=0;i<size;i++){
        if(i==size-1){
            cout<<arr[i];
        }else{
            cout<<arr[i]<<", ";
        }
    }
    cout<<"}";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
}