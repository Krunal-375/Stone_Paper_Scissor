#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "WELCOME TO THE GAME \n\"STONE PAPER SCISSOR\"\n\"X\"REPRESENTS SCISSOR\n\"O\"REPRESENTS STONE\n\"|\"REPRESENTS PAPPER" << endl;
    cout << "NOTE:- This game is made for only 2 players" << endl;
    char user1;
    char user2;
    cout << "USER1 PLAY YOUR CHANCE" << endl;
    cin >> user1;
    cout << "USER2 PLAY YOUR CHANCE" << endl;
    cin >> user2;
    switch (user1)
    {
    case 'X':
        switch (user2)
        {
        case 'O':
            cout<<"USER2 WON"<<endl;
            break;
        case '|':
            cout<<"USER1 WON"<<endl;
        default:
            break;
        }
        break;
    
    default:
        //cout<<"INVALID INPUT"<<endl;
        break;
    }
    switch (user1)
    {
    case 'O':
        switch (user2)
        {
        case 'X':
            cout<<"USER1 WON"<<endl;
            break;
        case '|':
            cout<<"USER2 WON"<<endl;
        default:
            break;
        }
        break;
    
    default:
        break;
    }
    switch (user1)
    {
    case '|':
        switch (user2)
        {
        case 'O':
            cout<<"USER1 WON"<<endl;
            break;
        case 'X':
            cout<<"USER2 WON"<<endl;
        default:
            break;
        }
        break;
    
    default:
        break;
    }
    return 0;
}