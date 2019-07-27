#include<iostream>

int main(void)
{
  int n;
  int A = 0, D =0;
  std::cin >> n;
  if(1 <= n && n <= 100000)
  {
	  char keyword[n];
	  std::cin >> keyword;
	  for(int i = 0; i < n; i++)
	  {
		  if(keyword[i] == 'A')
		      A++;
		  if(keyword[i] == 'D')
			  D++;  
	  }
	  
	  if(A > D)
		  std::cout<<"Anton\n";
	  else if(D > A)
		  std::cout<<"Danik\n";
	  else 
		  std::cout<<"Friendship\n";  
  }







}