#include <iostream>
using namespace std;


int main(){
	
	string password="Kiribati";
	string input;

	cout<<"Enter your password: "<<flush;
	cin>>input;
	
	if(input==password){
		cout<<"Welcome, user. What do you want to do?"<<endl;
		cout<<"1. Saving new information"<<endl;
		cout<<"2. Deleting new information"<<endl;
		cout<<"3. Quit"<<endl;
	}else{
		cout<<"Access denied"<<endl;
	}

	return 0;
}
