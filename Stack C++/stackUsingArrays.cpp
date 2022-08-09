#include<iostream>
#include<string>
using namespace std;
class Stack{
    private:
        int top;
        int arr[5];
    public:
        Stack(){
            top=-1;
            for(int i=0;i<5;i++){
                arr[i]=0;
            }
        }
        bool isEmpty(){
            if(top==-1){
                return true;
            }else{
                return false;
            }
        }
        bool isFull(){
            if(top==4){
                return true;
            }else{
                return false;
            }
        }
        void pushItem(int value){
            if(isFull()){
                cout<<"Stack overflow!"<<endl;
            }else{
                top++;
                arr[top]=value;
            }
        }
        int popItem(){
            if(isEmpty()){
                cout<<"Stack underflow!"<<endl;
                return 0;
            }else{
                int popvalue=arr[top];
                arr[top]=0;
                top--;
                return popvalue;
            }
        }
        int itemCount(){
            return top+1;
        }
        int peek(int position){
            if(isEmpty()){
                return 0;
            }else{
                return arr[position];
            }
        }
        void change(int position,int value){
            arr[position]=value;
            cout<<"Value changed!"<<endl;
        }
        void display(){
            cout<<"All the values in the stack are:"<<endl;
            for(int i=4;i>=0;i--){
                cout<<arr[i]<<endl;
            }
        }
};
int main(){
    
    return 0;
}