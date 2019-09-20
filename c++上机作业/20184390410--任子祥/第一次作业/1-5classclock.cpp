# include <iostream>
using namespace std;
class clock
{
	public:
		void settime(int year1=0,int month1=0,int day1=0,int hour1=0,int minute1=0,int second1=0);
		void showtime();
	private:
		int year,month,day,hour,minute,second;
		
};

void clock::settime(int year1,int month1,int day1,int hour1,int minute1,int second1)
{
	year=year1;
	month=month1;
	day=day1;
	hour=hour1;
	minute=minute1;
	second=second1;
};

inline void clock::showtime()
{
	cout<<year<<":"<<month<<":"<<day<<":"<<hour<<":"<<minute<<":"<<second<<endl;
};

int main()
{
	clock myclock;
	myclock.settime(2019,9,20,5,20,36);
	myclock.showtime();
	return 0;
}
