#include<iostream>
using namespace std;
bool checkrow(char);
bool checkcolumn(char);
bool checkdiagonal(char);
    int gridsize=3;
    char board[3][3]={{' ',' ',' '},
                      {' ',' ',' '},
                      {' ',' ',' '}
                      };
main()
{
 
 char symbol;
 gotoxy();
 cout<<"Enter the value: ";
 cin>>symbol;
 



}
bool checkrow(char symbol)
{
    int count=0;
    for(int col=0;col<gridsize;col++)
    {
        for(int row=0;row<gridsize;row++)
        {
            if(board[col][row]==symbol)
            {
                count++;
            }
        }
        if(count==3)
        {
            return true;
        }
        else
        {
          return false;
        }
    }
}
bool checkcolumn(char symbol)
{
    int colcount=0;
  for(int row=0;row<gridsize;row++)
  {
    for(int col=0;col<gridsize;col++)
    {
        if(board[col][row]==symbol)
        {
           colcount++;
        }
    }
    if(colcount==gridsize)
    {
        return true;
    }
    else
    {
       return false;
    }
  }
}
bool checkdiagonal(char symbol)
{
    int dicount=0;
    for(int idx=0;idx<gridsize;idx++)
    {
        if(board[idx][idx]==symbol)
        {
            dicount++;
        }
    }
    if(dicount==gridsize)
    {
        return true;
    }
    dicount=0;
    for(int col=2,row=0;row<gridsize;col--,row++)
    {
        if(board[row][col]==symbol)
        {
          dicount++;
        }
    }
    if(dicount==gridsize)
    {
        return true;
    }
    return false;
}






