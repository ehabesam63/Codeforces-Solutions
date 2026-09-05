#include <iostream>
 
using namespace std;
 
int main()
{
    string a;
    cin>>a;
    string s ="NO";
    if (a.length()>=7)
    {
        
    for (size_t i =0;i<=a.length()-7;i++)
    {
        if(a[i]=='0'&&a[i+1]=='0'&&a[i+2]=='0'&&a[i+3]=='0'&&a[i+4]=='0'&&a[i+5]=='0'&&a[i+6]=='0'||a[i]=='1'&&a[i+1]=='1'&&a[i+2]=='1'&&a[i+3]=='1'&&a[i+4]=='1'&&a[i+5]=='1'&&a[i+6]=='1')
          {
              s="YES";
              break;
          }
    }
    
    }
    cout <<s;
    return 0;
}