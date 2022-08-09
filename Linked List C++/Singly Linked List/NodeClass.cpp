#include "NodeClass.h"
#include<iostream>
using namespace std;

NodeClass::NodeClass(){
    key=0;
    data=0;
    next=NULL;
}
NodeClass::NodeClass(int k,int d){
    key=k;
    data=d;
}
