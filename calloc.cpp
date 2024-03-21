#include<iostream>
using namespace std;
int main(){

int  *p=(int*)calloc(5,sizeof(int));
for (int i=0;i<5; i++){
    cout<<"enter the value:";
    cin>>*p;
    if(i!=4)
    {


    p++;
    }
}

for(int i=5;i>0;i--){
    cout<<*p<<" ";
    p--;

}
return 0;
}
