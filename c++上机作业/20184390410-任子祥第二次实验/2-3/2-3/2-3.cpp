# include <iostream>
# include <math.h>
using namespace std;
int main()
{
	int x, y,s;
	cout << "input x" << endl;
	cin >> x;
	cout << "input y" << endl;
	cin >> y;
	s = pow(x, y);
	cout <<x<< "的"<<y<<"次方为" << s;
	return 0;
}