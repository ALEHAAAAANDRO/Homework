#include <iostream>
using namespace std;
 
int main()
{
    char s[] = "abacaba";
    int count=0;
 
    for(char i='a'; i<'a'+26;i++)
        for(int j=0;j<strlen(s);j++)
          if(i==s[j]){
          count++;
          break;
        }
    cout<<count<<"\n";
    system("pause");
    return 0;
}
