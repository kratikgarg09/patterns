#include<iostream> 

using namespace std; 

int main(){ 
    int n;
    cin>>n;
    int rows = 1;

    while (rows<=n)
    {
        // for printing space

        int space = n-rows;
        while (space)
        {
            cout<<" ";
            space = space - 1;
        }
        int column = 1;
        while (column<=rows)
        {
            cout<<"*";// if we add one space in this the we  found a diffrent type of pattern
            column++;
        }
        cout<<endl;
        rows++;
    }
    
    return 0;
}