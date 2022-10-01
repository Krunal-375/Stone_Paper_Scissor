#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "WELCOME TO THE GAME \n\"STONE PAPER SCISSOR\"\n\"X\"REPRESENTS SCISSOR\n\"O\"REPRESENTS STONE\n\"|\"REPRESENTS PAPPER" << endl;
    cout << "NOTE:- \nThis game is made for only 2 players\ntype 'Y' to say yes and type'N' to say no" << endl;
    cout << "DO YOU WANT TO SEE RULES?" << endl;
    char rules;
    cin >> rules;
    switch (rules)
    {
    case 'Y':
        cout << "YOU CAN ONLY TYPE'X','O','|' DURING THE GAME" << endl;
        cout << "LET'S START THE GAME" << endl;
        break;
    case 'N':
        cout << "OKAY THEN" << endl;
        cout << "LET'S START THE GAME" << endl;
        break;
    default:
        break;
    }
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
            cout << "USER2 WON" << endl;
            break;
        case '|':
            cout << "USER1 WON" << endl;
        default:
            break;
        }
        break;

    default:
        break;
    }
    switch (user1)
    {
    case 'O':
        switch (user2)
        {
        case 'X':
            cout << "USER1 WON" << endl;
            break;
        case '|':
            cout << "USER2 WON" << endl;
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
            cout << "USER1 WON" << endl;
            break;
        case 'X':
            cout << "USER2 WON" << endl;
        default:
            break;
        }
        break;

    default:
        break;
    }
    for (int i = 0; i <= 1;)
    {
        i = 0;
        cout << "DO YOU WANT TO PLAY AGAIN ?" << endl;
        char play;
        cin >> play;
        switch (play)
        {
        case 'Y':
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
                    cout << "USER2 WON" << endl;
                    break;
                case '|':
                    cout << "USER1 WON" << endl;
                default:
                    break;
                }
                break;

            default:
                break;
            }
            switch (user1)
            {
            case 'O':
                switch (user2)
                {
                case 'X':
                    cout << "USER1 WON" << endl;
                    break;
                case '|':
                    cout << "USER2 WON" << endl;
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
                    cout << "USER1 WON" << endl;
                    break;
                case 'X':
                    cout << "USER2 WON" << endl;
                default:
                    break;
                }
                break;
            i++;

            default:
                break;
            }
            break;
        case 'N':
            cout<<"THANKS FOR PLAYING :)"<<endl;
            exit(0);
            continue;
        default:
            break;
        }
    }
    return 0;
}
