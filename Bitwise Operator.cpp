int main()
{
   int a=5;
   int c=10;
   
   cout<<"a&c"<<(a & c)<<endl;
   cout<<"a|c"<<(a|c)<<endl;
   cout<<"~c"<<(~c)<<endl;
   cout<<"a^c"<<(a^c)<<endl;
   
   cout<<(5<<1)<<endl;
   cout<<(15<<2)<<endl;
   cout<<(19>>1)<<endl;
   cout<<(21>>2)<<endl;
   cout<<(25>>3)<<endl;
 
    return 0;
}
Output:
a&c0
a|c15
~c-11
a^c15
10
60
9
5
3
