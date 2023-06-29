#include<iostream>
#include<string.h>

using namespace std;
class Employ{
	public:
	int id;
	char name[100];
	char role[100];
	int salary;
	int expirience;
	char address[100];
	char email[100];
	char contact[100];
	
	void set()
	{
		cout<<"enter id : ";
		cin>>id;
		cout<<"enter name : ";
		cin>>name;
		cout<<"enter role : ";
		cin>>role;
		cout<<"enter salary : ";
		cin>>salary;
		cout<<"enter experiense : ";
		cin>>expirience;
		cout<<"enter address : ";
		cin>>address;
		cout<<"enter email : ";
		cin>>email;
		cout<<"enter contact : ";
		cin>>contact;
	}
	
	void get()
	{
		cout<<"id : "<<id<<endl;
		cout<<"name : "<<name<<endl;
		cout<<"role : "<<role<<endl;
		cout<<"salary : "<<salary<<endl;
		cout<<"expirience : "<<expirience<<endl;
		cout<<"address : "<<address<<endl;
		
		cout<<"email : "<<email<<endl;
		cout<<"contact : "<<contact<<endl;
	}
	
	
};

main()
{
	
   Employ	e,e1,e2,e3,e4;
   
  e.set();
  e.get();
  e1.set();
  e1.get();
  e2.set();
  e2.get();
  e3.set();
  e3.get();
  e4.set();
  e4.get();
  
	
	return 0;
}
