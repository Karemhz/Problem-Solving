#include<iostream>

using namespace std;

int main(void)
{
  int n ,count = 0;
  cin >> n;
  int x[3];
  for(int i = 0; i < n; i++)
  {
	cin>>x[0]>>x[1]>>x[2];
	if(x[0]+x[1]+x[2] >= 2)
		count++;
  }
  cout << count<<"\n";
  
}