#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int n,fact=1;
  
  cout<<"Enter the number of N"<<endl;
  cin>>n;
  
  if(n<0){
      cout<<"Error!";
  }
  else{
      for(int i=1;i<=n;i++)
      {
          fact=fact*i;
      }
  }
  
  cout<<"Factorial of this number is:"<<fact<<endl;

return 0;
}