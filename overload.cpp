// Implement a c++ program using multiple inheritance for performing airthmetic operations of two numbers. 
#include<iostream>
using namespace std;
class input{
	protected:
		int a,b;
		
	public: 
		void getvalue(){
			cout<<"Enter the value of a and b: "<<endl;
			cin>>a>>b;
		}
	};
class airthmetic{
	public:
		int add(int x,int y){
			return x+y;
		}
		int sub(int x,int y){
			return x-y;
		}
		int mul(int x,int y){
			return x*y;
		}
		float div(float x,float y){
			if(y==0){
				cout<<"invalid"<<"\n";
				 return 0; 
				}
			else{
				return x/y;
			}
		}
	};
class calculate : public input, public airthmetic{
	public:
		void perform(){
			cout<<"addition: "<<add(a,b) <<"\n";
			cout<<"subraction: "<<sub(a,b)<<"\n";
			cout<<"multiplication: "<<mul(a,b)<<"\n";
			cout<<"Division: "<<div(a,b)<<"\n";
		}
};
int main(){
	calculate cal;
	cal.getvalue();
	cal.perform();
	return 0;
}

