#include<iostream>
using namespace std;
void regestration();
void login();
string name;
string email;
string pass;
string email_id;
string password;

int main(){

regestration();//colling the fun
login();

cout<<"enter your name:"<<endl;
cin>>name;
cout<<"enter your email:"<<endl;
cin>>email;
cout<<"enter your pass:"<<endl;
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
    if(email==email_id && pass==password){
        cout<<"welcome";
    }
        else{
            cout<<"invalid";
        }


    }

