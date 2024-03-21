#include<iostream>
using namespace std;
int main(){

int  *p=(int*)calloc(5,sizeof(int));

//take the value
for (int i=0;i<5; i++){
    cout<<"enter the value:";
    cin>>*p;
    if(i!=4)
    {


    p++;
    }
}

//set intial position of pointer
for(int k=5;k>0;k--){
    cout<<*p<<" ";
    p--;

}

//print value of dynamic array
for (int j=0;j<5; j++){
    cout<<*p<<" ";

    if(j!=4)
    {


    p++;
    }
}
return 0;
}
