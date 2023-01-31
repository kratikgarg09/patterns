#include<iostream> 
#include<math.h>

using namespace std; 

int main(){ 
    int n;
    cin>>n;
    int count = pow(n,2);
    
    for (int i = 1; i <=n; i++)
    {
        for (int  j = 1; j<=n; j++)
        {
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
    }
    
    return 0;
}