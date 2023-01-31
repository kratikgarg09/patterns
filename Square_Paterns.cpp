#include<iostream> 

using namespace std; 

int main(){ 

    
    int n;
    cin >> n;
    int rows = 1;

    /******for square shape patterns******/


    // for 1st form

    // cin>>n;
    // int rows=1;
    // while(rows<=n){
    //     int column =1;
    //     while (column<=n)
    //     {
    //         cout<<"*";
    //         column++;
    //     }
    //     cout<<endl;
    //     rows++;
    // }

    /*//for 2nd form

    while (rows <= n)
    {
        int column = 1;
        while (column <= n)
        {
            cout <<rows;
            column++;
        }
        cout << endl;
        rows++;
    }*/

    /* for third form

    while (rows <= n)
    {
        int column = 1;
        while (column <= n)
        {
            cout <<column;
            column++;
        }
        cout << endl;
        rows++;
    }*/

    /* for fourth form

    while (rows <= n)
    {
        int column = 1;
        while (column <= n)
        {
            cout <<n-column+1;
            column++;
        }
        cout << endl;
        rows++;
    }*/

    /* for fifth form

    while (rows <= n)
    {
        int column = 1;
        while (column <= n)
        {   
            cout << count <<" ";
            count++;
            column++;
        }
        cout << endl;
        rows++;
    }*/


            /**** Alphabetical sqaure pattern****/

    // sixth form

/*
    char ch = 'a';
    while (rows <= n)
    {
        int column = 1;
        while (column <= n)
        {   
            cout<<ch<<" ";
            ch++;
            column++;
        }
        cout << endl;
        rows++;
    }
*/

    // seventh form 

/*
    while (rows <= n)
    {
        int column = 1;
        while (column <= n)
        {
            int val = 'a'+column-1;
            cout<<(char)val<<" ";
            column++;
        }
        cout << endl;
        rows++;
    }
    
*/

    // Eight form

/*
    while (rows <= n)
    {
        int column = 1;
        while (column <= n)
        {
            int val = 'a'+rows-1;
            cout<<(char)val<<" "; // in this we can replace (char)rows into 'a'+i-1
            column++;
        }
        cout << endl;
        rows++;
    }
*/

    // ninth form

    while (rows <= n)
    {
        int column = 1;
        while (column <= n)
        {
            char ch = 'a'+rows+column-2;
            cout<<ch<<" ";
            column++;
        }
        cout << endl;
        rows++;
    }
    return 0;
}