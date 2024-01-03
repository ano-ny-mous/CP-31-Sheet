#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,fuel=0,prevSt=0,station;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>station;
            fuel=max(fuel,abs(prevSt-station));
            prevSt=station;
        }
        fuel=max(fuel,abs(k-station)*2);
        cout<<fuel<<endl;
    }
    return 0;
}