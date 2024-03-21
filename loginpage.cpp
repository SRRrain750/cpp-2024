#include<iostream>
using namespace std;
void regestration();
void login();
string name;
string email;
string pass;

int main(){

regestration();//colling the fun
login();


cin>>pass;
}

void regestration(){

cout<<"enter your name:"<<endl;
cin>>name;
cout<<"enter your email:"<<endl;
cin>>email_id;
cout<<"enter your pass:"<<endl;
cin>>password;

}

void login(){
    
string email_id;
string password;

cout<<"enter your name:"<<endl;
cin>>name;
cout<<"enter your email:"<<endl;
cin>>email;
cout<<"enter your pass:"<<endl;
    
    if(email==email_id && pass==password){
        cout<<"welcome";
    }
        else{
            cout<<"invalid";
        }


    }

