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

        // for 1st triangle

        int column = 1;
        while (column<=rows)
        {
            cout<<column;
            column++;
        }

        //for second triangle
        int start = rows-1;
        while (start)
        {
            cout<<start;
            start=start-1;
        }
        
        cout<<endl;
        rows++;
    }
    
    return 0;
}