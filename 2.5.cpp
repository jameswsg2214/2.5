// Example program
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class sample
{
    public:
    int a,b,i;
       int calc()
    {
    for(i = a; i <= b; ++i)
  {
      if(i%2== 0)
      {
          cout<<i<<endl;
      }
         
    }
    return 0;
    }
};
int main()
{
  sample s;
  cout << "Enter a number lenght: ";
  cin >>s.a;
  cin>>s.b;
  s.calc();
  return 0;
}
