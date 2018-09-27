#include "std_lib_facilities.h"
int main()
{
	cout<<"Enter the name of the person you want to write to: ";
	string first_name;
	cin>>first_name;
	cout<<"Enter your another friend's name: ";
	string friend_name;
	cin>>friend_name;
	cout<<"Your another friend's sex(m if male, f if female): ";
	char friend_sex = 0;
	const char m = 'm';
	const char f = 'f';
	cin>>friend_sex;
	cout<<"Enter the age of your recipient: ";
	int age;
	cin>>age;
	cout<<"Dear "<<first_name<<",\nHow are you? Have you seen "<<friend_name<<" lately?";
	if (friend_sex == m)
		cout<<" If you see "<<friend_name<<" please ask him to call me.";
	if (friend_sex == f)
		cout<<" If you see "<<friend_name<<" please ask her to call me.";
	cout<<" I hear you just had a birthday, and you are "<<age<<" years old. ";
	if (age<0 or age>110)
		simple_error("you're kidding!");
	if (age<12)
		cout<<"Next year you will be "<<age+1<<"!";
	if (age==17)
		cout<<"Next year you will be able to vote!";
	if (age>70)
		cout<<"I hope you are enjoying retirement.";
	cout<<"\nYours sincerely,"<<endl<<endl<<endl<<"Dávid Szemán\n";	
}
