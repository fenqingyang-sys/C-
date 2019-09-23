# include <iostream>
# define pi 3.1415
using namespace std;
int main()
 { 
	int n;
	cout << "1长方形面积，2代表正方形面积，3代表圆的面积" << endl;
	cin >> n;
	switch (n)
	{
	case 1:
		float high, wide, area;
		cout << "input high" << endl;
		cin >> high;
		cout << "input wide" << endl;
		cin >> wide;
		area = wide * high;
		cout << "changfangtiarea=" << area;
		break;
	case 2:
		float side, area1;
		cout << "input side" << endl;
		cin >> side;
		area1 = side * side;
		cout << "zhengfangxiang=" << area1;
		break;
	case 3:
		float r, area2;
		cout << "input r" << endl;
		cin >> r;
		area2 = pi * r * r;
		cout << "circle=" << area2;
		break;

	}
	return 0;
}
