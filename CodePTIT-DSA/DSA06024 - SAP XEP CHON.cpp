#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	int a[105];
	for(int i=1; i<=n; i++)
	 cin >> a[i];
	for(int i=1; i<n; i++)
	{
		int min=i;
		for(int j=i+1; j<=n; j++)
		{
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		swap(a[i], a[min]);
		cout << "Buoc " << i <<": ";
		for(int i=1; i<=n; i++)
		 cout << a[i] << " ";
		cout << endl;
	}
}
int main()
{
   solve();	
}