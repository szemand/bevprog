#include "std_lib_facilities.h"
int main()
{
	double n;
	double largest = 0;
	double smallest = 100;
	string unit;
	vector<double>v;
	cout<<"Enter your first value: ";
	string largest_str;
	string smallest_str;
	while(cin>>n>>unit)
	{
		cout<<"Enter your next value: ";
		if(unit == "ft")
		{
			v.push_back(n = n*0.3048);
			unit = "ft";
		}
		else if(unit == "in")
		{
			v.push_back(n = n*0.0254);
			unit = "in";
		}
		else if(unit == "cm")
		{
			v.push_back(n/100);
			unit = "cm";
		}
		else if(unit == "m")
		{
			v.push_back(n);
			unit = "m";
		}
		else
		{
			cout<<"Incorrect unit.";
			break;
		}
		if(n < smallest)
		{
			smallest = n;
		}
		else if(n > largest)
		{
			largest = n;
		}
		cout<<endl;
	}
	unit = "m";
	sort(v);
	cout<<"smallest value : "<<smallest<<unit<<endl;
	cout<<"largest value : "<<largest<<unit<<endl;
	cout<<"size of the vector : "<<v.size()<<endl;
	cout<<"values sorted : "<<endl;
	for(int i = 0;i<v.size();i++)
	{
	cout<<v[i]<<" m"<<endl;
	}
}

