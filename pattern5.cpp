#include<iostream> 

using namespace std; 

int main(){ 
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int j = 1;
        //for printing number from 1 to n-i+1
        while (j<=n-i+1)
        {
            cout << j <<" ";
            j=j+1;
        }
        // for printing star
        j = 1;
        while (j <= 2* (i-1))
        {
            cout << "* ";
            j=j+1;
        }
        //for printing numbers from n-i+1 to 1
        j=n-i+1;
        while (j>=1)        
        {
            cout << j <<" ";
            j = j-1;
        }
        i=i+1;
        cout<<"\n";
        
    }
    return 0;
}