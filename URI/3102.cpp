#include <bits/stdc++.h>

using namespace std;

int main()
{
	int casos;
	cin>>casos;
	float x1, y1, x2, y2, x3, y3;
	for (int i = 0; i < casos; ++i)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		float area = abs(x1 * (y2 -y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / float(2);
		printf("%.3f\n", area);
	}
}
