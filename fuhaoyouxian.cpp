#include<iostream>
using namespace std;
int main() {
	/*int d=9, b = 3;
	int a=1, x=4, y=5;
	if (!a&&b||x>y&&d)
		cout << d;
	else
		cout << ;b*/
	int p,a, s, w,c;
	float f,d;
	cout << "基础运费（每吨每公里几元）:";
	cin >> p;
	cout << "路程:" ;
	cin >> s;
	cout << "重量：" ;
	cin >> w;
	if (s >= 3000)
		c = 12;
	else
	c = s / 250;
	switch (c)
	{
	case 0:d = 0,a=65; break;
	case 1:d = 0.02; break;
	case 2:
	case 3:d = 0.05; break;
	case 4:
	case 5:
	case 6:
	case 7:d = 0.08; break;
	case 8:
	case 9:
	case 10:
	case 11:d = 0.10; break;
	case 12:d = 0.15; break;
	}
	cout << "打" <<(100 - d * 100)<< "折" << endl;
				f = w * p * s * (1 - d);
				cout << f << endl;
				cout << a;
	return 0;
}