#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    bool colour;// 1-WHITE,0-BLACK(empty has 0)
    string type;// pawn,rook,knight,bishop,queen,king,empty
}piece;


piece board[8][8];


void display()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            piece curr=board[i][j];
            char c;

            if(curr.type=="empty")
                c='-';
            else if(curr.type=="pawn")
                c='p';
            else if(curr.type=="rook")
                c='r';
            else if(curr.type=="knight")
                c='h';
            else if(curr.type=="bishop")
                c='b';
            else if(curr.type=="queen")
                c='q';
            else if(curr.type=="king")
                c='k';

            if(curr.colour==1)
                c-=32;

            cout<<c;
        }

        cout<<"\n";
    }
}


void initialise_board()
{
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        {
            board[i][j].colour=0;
            board[i][j].type="empty";

            if(i>=6)
                board[i][j].colour=1;

            if(i==1 || i==6)
                board[i][j].type="pawn";
            else if(i==0 || i==7)
            {
                if(j==0 || j==7)
                    board[i][j].type="rook";
                else if(j==1 || j==6)
                    board[i][j].type="knight";
                else if(j==2 || j==5)
                    board[i][j].type="bishop";
                else if(j==3)
                    board[i][j].type="queen";
                else if(j==4)
                    board[i][j].type="king";
            }
        }
}


int main()
{
    initialise_board();

    display();









    return 0;
}