# include <iostream>
using namespace std;
struct time
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
}times;
int main ()
{
	cout<<"input year"<<endl;
	cin>>times.year;
	cout<<"input month"<<endl;
	cin>>times.month;
	cout<<"input day"<<endl;
	cin>>times.day;
	cout<<"input hour"<<endl;
	cin>>times.hour;
	cout<<"input minute"<<endl;
	cin>>times.minute;
	cout<<"input second"<<endl;
	cin>>times.second;
	cout<<times.year<<"."<<times.month<<"."<<times.day<<"."<<times.hour<<"."<<times.minute<<"."<<times.second<<"."<<endl;
	return 1;

}
