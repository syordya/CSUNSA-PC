#include <bits/stdc++.h>

using namespace std;

int main()
{
	int B, T;
	cin>>B>>T;
	int suma = B + T;
	if(suma > 160) cout << 1 << endl;
	else if (suma < 160) cout << 2 << endl;
	else cout << 0 << endl;

}

