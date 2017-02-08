#include <iostream>
#include <stdlib.h>
using namespace std;
 
int main()
{
	int T, n;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		int fine=9999999, paid=0, total=0, a;
		cin >> n;
		for (int j=1; j<=n; j++){
			cin >> a;
			if(a) paid += 1000;
			else
				if(fine > j)
					fine = j;
		}
		total = n*1000;
		if(fine!=9999999)
			total += (n-fine+1)*100 ;
		total -= paid;
		cout << total << endl;
	}
}
 