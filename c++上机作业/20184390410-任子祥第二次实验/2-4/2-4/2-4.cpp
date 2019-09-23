# include <iostream>
using namespace std;
int fibona(int x)
{
	if (x < 3)
		return 1;
	else
		return fibona(x - 2) + fibona(x - 1);
}
int main()
{
	int n;
	cout << "enter fibonacci" << endl;
	cin >> n;
	cout << "the fibonacci is  " << fibona(n) << endl;
	return 0;
}