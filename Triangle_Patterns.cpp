#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int rows = 1;

    /* for triangle pattern

    //first form(*)


    while (rows <= n)
    {
        int column = 1;
        while (column <= rows)
        {   
            cout<<"*"<<" ";
            column++;
        }
        cout << endl;
        rows++;
    }*/

    //Second Form

    /*
    while (rows <= n)
    {
        int column = 1;
        while (column <= rows)
        {   
            cout<<rows<<" ";
            column++;
        }
        cout << endl;
        rows++;
    }*/

    // Third form

    /*;
    while (rows <= n)
    {
        int column = 1;
        while (column <= rows)
        {   
            cout<<column<<" ";
            column++;
        }
        cout << endl;
        rows++;
    }*/

    // fourth form

/* 
    int count=1;
    while (rows <= n)
    {
        int column = 1;
        while (column <= rows)
        {   
            cout<<count<<" ";
            count++;
            column++;
        }
        cout << endl;
        rows++;
    }*/

    // fifth form

/* 
    while (rows <= n)
    {
        int column = 1;
        while (column <= rows)
        {   
            cout<<n-rows+1<<" ";
            column++;
        }
        cout << endl;
        rows++;
    }*/

    /*
   //sixth form

   
    while (rows <= n)
    {
        int column = 1;
        int value = rows;
        while (column <= rows)
        {   
            cout<<(n-column+1)<<" "; 
            value++;
            column++;
        }
        cout << endl;
        rows++;
    }*/

   // seventh form
/*
    
    while (rows <= n)
    {
        int column = 1;
        int value = rows;
        while (column <= rows)
        {   
            cout<<(rows-column+1)<<" "; 
            value++;
            column++;
        }
        cout << endl;
        rows++;
    }
    */

  // eighth form

/*
    
    while (rows <= n)
    {
        int column = 1;
        int value = rows;
        while (column <= rows)
        {   
            cout<<value<<" ";// we can use (row+column-1) as other method 
            value++;
            column++;
        }
        cout << endl;
        rows++;
    }
    */

        /****** Alphabetical Form ******/

// nineth form

/*

    while (rows <= n)
    {
        int column = 1;
        while (column <= rows)
        {
            cout<<(char)('a'+rows-1)<<" ";
            column++;
        }
        cout << endl;
        rows++;
    }*/
    
    // tenth form


/*
    while (rows <= n)
    {
        int column = 1;
        while (column <= rows)
        {
            cout<<(char)('a'+column-1)<<" ";
            column++;
        }
        cout << endl;
        rows++;
    }
 */


    // Eleventh form
/*
    
    while (rows <= n)
    {
        int column = 1;
        int value = rows;
        while (column <= rows)
        {   
            cout<<char('a'+rows-column)<<" "; 
            value++;
            column++;
        }
        cout << endl;
        rows++;
    }
*/

    //twelth form
/*
        while (rows <= n)
    {
        int column = 1;
        int value = rows;
        while (column <= rows)
        {   
            cout<<char('a'+value-1)<<" ";// we can use (row+column-1) as other method 
            value++;
            column++;
        }
        cout << endl;
        rows++;
    }
*/

    //thirteenth form
/*
    int count=1;
    while (rows <= n)
    {
        int column = 1;
        while (column <= rows)
        {   
            cout<<char('a'+count-1)<<" ";
            count++;
            column++;
        }
        cout << endl;
        rows++;
    }
    */

   // FOURTEENTH FORM
/*
    while (rows <= n)
    {
        int column = 1;
        while (column <= rows)
        {
            cout<<(char)('a'+n-rows)<<" ";
            column++;
        }
        cout << endl;
        rows++;
    }
    */

   //fifteenth form (reverse triangle pattern)
    
    int x = 0,y = 0;
    int rows = 0;
    cout<<"Enter the number of rows = ";
    cin>>rows;
    for(x=1; x<=rows; ++x)
    {
        for(y=x; y<= rows; ++y)
        {
            //Print star
            cout<<"*";
        }
        // Print new line
        cout<<"\n";
    }

    return 0;
}