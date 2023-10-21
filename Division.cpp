#include<iostream>
using namespace std;
main(){
	int num,dem;
	cout<<"Enter numerator - "; cin>>num;
	cout<<"Enter Denomenator - "; cin>>dem;
	try{
		if(dem==0)
		throw("Divison not possible by 0.");
		cout<<num/dem;
	}
	catch(const char *msg){
		cout<<msg;
	}
	//cout<<(Num/Dem)+1;
	
} 
