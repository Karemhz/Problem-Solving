#include<iostream>

using namespace std;

int main(void)
{
  int a,b,count = 0;
  cin >> a >> b;
  if(1 <= a && a <= b && b <= 10)
  {
	while(a <= b)
	{
		a *= 3;
		b *= 2;
		count++;
		
	}
  }
 cout << count<<"\n";

}
