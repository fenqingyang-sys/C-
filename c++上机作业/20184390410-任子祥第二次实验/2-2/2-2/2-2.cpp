# include <iostream>
using namespace std;
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int max(int x, int y, int z)
{
	if (x > y && x > z)
		return x;
	else if (y > x && y > z)
		return y;
	else
		return z;
}
double max(double x, double y)
{
	if (x > y)
		return x;
	else
		return y;
}
double max(double x, double y, double z)
{
	if (x > y && x > z)
		return x;
	else if (y > x && y > z)
		return y;
	else
		return z;
}
 
int main()
{
	int a, b;
	cout << "input x,y(int)" << endl;
	cin >> a >> b;
	cout << "max=" <<max(a, b)<<endl;
	int x, y, z;
	cout << "input x,y,z(int)" << endl;
	cin >> x >> y >> z;
	cout<<"max="<<max(x, y, z)<<endl;
	double m, n;
	cout << "input m,n(double)" << endl;
	cin >> m >> n;
	cout << "max="<< max(m, n)<<endl;
	double t, s, d;
	cout << "input a,s,d(double)" << endl;
	cin >> t >> s >> d;
	cout << "max=" << max(t, s, d);
	return 0;

}
