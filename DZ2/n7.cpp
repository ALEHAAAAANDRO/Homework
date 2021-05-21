#include <iostream>
 
using namespace std;
 
 
long long D[1000][1000];
 
int main()
{
    int n; 
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        D[i][i] = 1;
    }
 
 
    for(int i = 1; i < n; ++i)
        for(int j = 1; j < n; ++j)
        {
            for(int k = j; k <= n; ++k)
            {
                int ik = i + k;
                if(ik <= n)
                    D[ik][k] = D[ik][k] + D[i][j];
            }
        }
 
    long long m;
    m = 0; 
    for(int i = 1; i <= n; i++) 
    {
        m = m + D[n][i];
    }
 
    cout << m << endl;
    return 0;
}