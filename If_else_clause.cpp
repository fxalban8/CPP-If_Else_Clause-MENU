#include <iostream>
#include <unistd.h>	//library for the function: sleep()
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
	
	
		int option=0;// in order not to collect garbage, x = 0
		cin>>option;
		cout<<"Processing information"<<endl;
		//sleep(5);	//wait for 5 secons util you go for the next instruction

		if(option==1){
			cout<<"Information saved"<<endl;
		}else{
			if(option==2){
				cout<<"Information deleted"<<endl;
			}else{
				cout<<"quitting..."<<endl;
			}

		}
		
	
	}else{
		cout<<"Access denied"<<endl;
	}
	
	//flushing the buffer	
	int c;
	do{
	c=cin.get();
	} while (c!='\n'&&c!=EOF);
	
	//expecting for an Enter(\n)
	cin.get();	//remember to flush the buffer with the previous function before implementing cin.get()
	return 0;
}
