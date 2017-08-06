#include <iostream>
using namespace std;

char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';

void frame()
{
     cout<<"tic tac toe";
    cout<<endl;
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void input()
{
    int num;
    cout<<"enter the no";
    cin>>num;

    if (num==1)
        matrix[0][0]=player;
    else if (num==2)
    matrix[0][1]=player;
            else if (num==3)
            matrix[0][2]=player;
        else if (num==4)
        matrix[1][0]=player;
            else if (num==5)
            matrix[1][1]=player;
        else if (num==6)
        matrix[1][2]=player;
            else if (num==7)
            matrix[2][0]=player;
        else if (num==8)
        matrix[2][1]=player;
            else if (num==9)
            matrix[2][2]=player;
}

void change()
{
    if (player=='X')
        player='O';
    else
        player='X';
}

int win()
{   //for first player
    if (matrix[0][0]=='X'&& matrix[0][1]=='X'&& matrix[0][2]=='X')
        return 'X';
        if (matrix[1][0]=='X'&& matrix[1][1]=='X'&& matrix[1][2]=='X')
        return 'X';
         if (matrix[2][0]=='X'&& matrix[2][1]=='X'&& matrix[2][2]=='X')
        return 'X';
         if (matrix[0][0]=='X'&& matrix[1][1]=='X'&& matrix[2][2]=='X')
        return 'X';
         if (matrix[0][0]=='X'&& matrix[1][0]=='X'&& matrix[2][0]=='X')
        return 'X';
         if (matrix[0][1]=='X'&& matrix[1][1]=='X'&& matrix[2][1]=='X')
        return 'X';
         if (matrix[0][2]=='X'&& matrix[1][2]=='X'&& matrix[2][2]=='X')
        return 'X';
         if (matrix[0][2]=='X'&& matrix[1][1]=='X'&& matrix[2][0]=='X')
        return 'X';

         //for second playear
           if (matrix[0][0]=='X'&& matrix[0][1]=='X'&& matrix[0][2]=='X')
        return 'O';
        if (matrix[1][0]=='X'&& matrix[1][1]=='X'&& matrix[1][2]=='X')
        return 'O';
         if (matrix[2][0]=='X'&& matrix[2][1]=='X'&& matrix[2][2]=='X')
        return 'O';
         if (matrix[0][0]=='X'&& matrix[1][1]=='X'&& matrix[2][2]=='X')
        return 'O';
         if (matrix[0][0]=='X'&& matrix[1][0]=='X'&& matrix[2][0]=='X')
        return 'O';
         if (matrix[0][1]=='X'&& matrix[1][1]=='X'&& matrix[2][1]=='X')
        return 'O';
         if (matrix[0][2]=='X'&& matrix[1][2]=='X'&& matrix[2][2]=='X')
        return 'O';
         if (matrix[0][2]=='X'&& matrix[1][1]=='X'&& matrix[2][0]=='X')
        return 'O';

        return'/';
}



int main()
{    frame();
    while(1)
   {
    input();
    frame();
    if(win()=='X')
        {cout<<"X wins";
        break;}
    else if(win()=='O')
    {
        cout<<"O wins";
        break;
    }
    change();
    }
   return 0;
}
