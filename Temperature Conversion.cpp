#include <iostream>

using namespace std;

int main()
{
	float Tc, Tf;
	int choice;
  
  	cout<<"1 - Celsius to Fahrenheit"<<endl;
  	cout<<"2 - Fahrenheit to Celsius"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	  
	if(choice==1)
	{
		cout<<"\nEnter Temperature in Celsius: ";
  		cin>>Tc;
  
  		Tf=(Tc*9.0/5.0)+32;                            // Celsius to Fahrenheit formula
  		cout<<"\nTemperature in Fahrenheit is: "<<Tf<<endl;
	}
	else if(choice==2)
	{
		cout<<"\nEnter Temperature in Fahrenheit: ";
  		cin>>Tf;
  
  		Tc=(Tf-32)*5.0/9.0;                            // Fahrenheit to Celsius formula
  		cout<<"\nTemperature in Celsius is: "<<Tc<<endl;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
	}
	  
  return 0;
}
