// simple calculator using cpp
#include<iostream>
using namespace std;

int main(){
int choice;
	cout<<"Welcome to Simple calulator 😊!!"<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	if(choice>4 ){
	cout<<"Invalid choice 😞"<<endl;
	}
	else if(choice==0){
	cout<<"Invalid choice 😞"<<endl;
	return 0;
	}
	
	
	
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	
	switch(choice){
		case 1:
			cout<<"Result ="<<(a+b)<<endl;
			break;	
		case 2:
			cout<<"Result ="<<(a-b)<<endl;	
			break;
		case 3:
			cout<<"Result ="<<(a*b)<<endl;	
			break;
		case 4:
			if(b!=0){
				cout<<"Result ="<<((float)a/b)<<endl;	
			}else{
				cout<<"Invalid operation";
			}
			break;
}
return 0;
}

