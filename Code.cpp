#include <iostream>
#include <string>
#include <cctype>
#include <limits>

using namespace std;
class Players
{
    int totalPlayers;
    string P1_Name;
    string P2_Name;

public:
    string tossWPlayer;
    string tossLPlayer;
    Players()
    {
        totalPlayers = 2;
    }
    void setPlayers()
    {
        cout << "Enter Player " << 1 << " Name Here : ";
        getline(cin, P1_Name);
        cout << "Enter Player " << 2 << " Name Here : ";
        getline(cin, P2_Name);
    }
    int toss()
    {
        int p1vowels = 0;
        int p1constonants = 0;
        int p2vowels = 0;
        int p2constonants = 0;
        int p1Length = P1_Name.length();
        int p2Length = P2_Name.length();
        for (int i = 0; i < p1Length; i++)
        {
            if (isalpha(P1_Name[i]))
            {
                switch (P1_Name[i])
                {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    p1vowels++;
                    break;
                default:
                    p1constonants++;
                    break;
                }
            }
            else
            {
                // empty else condition
            }
        }
        for (int i = 0; i < p2Length; i++)
        {
            if (isalpha(P2_Name[i]))
            {
                switch (P2_Name[i])
                {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    p2vowels++;
                    break;
                default:
                    p2constonants++;
                    break;
                }
            }
            else
            {
                // empty else condition
            }
        }
        if (p1vowels > p2vowels)
        {
            return 1;
        }
        else if (p2vowels > p1vowels)
        {
            return 2;
        }
        else if (p1constonants > p2constonants)
        {
            return 1;
        }
        else if (p2constonants > p1constonants)
        {
            return 2;
        }
        else
        {
            return 1;
        }
    }
    string tossWinner(int tossWinner)
    {
        if (tossWinner == 1)
        {
            tossWPlayer = P1_Name;
            tossLPlayer = P2_Name;
            cout << "Toss Winned By : " << tossWPlayer << endl;
        }
        else
        {
            tossWPlayer = P2_Name;
            tossLPlayer = P1_Name;
            cout << "Toss Winned By : " << tossWPlayer << endl;
        }
        return tossWPlayer;
    }
};
void displayBoard(char board[])
{
    cout << "\t\t________________________________________________\n\n\t\t|\t" << board[0] << "\t|\t" << board[1] << "\t|\t" << board[2] << "\t|\n\t\t________________________________________________\n\n\t\t|\t" << board[3] << "\t|\t" << board[4] << "\t|\t" << board[5] << "\t|\n\t\t________________________________________________\n\n\t\t|\t" << board[6] << "\t|\t" << board[7] << "\t|\t" << board[8] << "\t|\n\t\t_________________________________________________";
}
int checkBoard(char board[])
{
    if ((board[0] == 'O' && board[1] == 'O' && board[2] == 'O') || (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') || (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') || (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') || (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') || (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') || (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') || (board[2] == 'O' && board[4] == 'O' && board[6] == 'O'))
    {
        return 2;
    }
    else if ((board[0] == 'X' && board[1] == 'X' && board[2] == 'X') || (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') || (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') || (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') || (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') || (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') || (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') || (board[2] == 'X' && board[4] == 'X' && board[6] == 'X'))
    {
        return 1;
    }
    return 0;
}
void playGame(string PlayerNo1, string PlayerNo2, char board[])
{
    int turnInput, checkresult = 0;
    while (checkresult == 0)
    {
        cout << "\n\n\t\tIt's Your Turn : " << PlayerNo1 << endl;
        displayBoard(board);
        cout << "\n\n\t\tEnter Here : ";
        cin >> turnInput;
        if (board[turnInput - 1] == 'X' || board[turnInput - 1] == 'O')
        {
            cout << "\n\n\t\tInvalid input\n";
        }
        else
        {
            switch (turnInput)
            {
            case 1:
                board[turnInput - 1] = 'X';
                break;
            case 2:
                board[turnInput - 1] = 'X';
                break;
            case 3:
                board[turnInput - 1] = 'X';
                break;
            case 4:
                board[turnInput - 1] = 'X';
                break;
            case 5:
                board[turnInput - 1] = 'X';
                break;
            case 6:
                board[turnInput - 1] = 'X';
                break;
            case 7:
                board[turnInput - 1] = 'X';
                break;
            case 8:
                board[turnInput - 1] = 'X';
                break;
            case 9:
                board[turnInput - 1] = 'X';
                break;
            default:
                cout << "\n\n\t\tInvalid input\n";
                break;
            }
        }
        checkresult = checkBoard(board);
        if (checkresult == 1)
        {
            continue;
        }
        cout << "\n\n\t\tIt's Your Turn : " << PlayerNo2 << endl;
        displayBoard(board);
        cout << "\n\n\t\tEnter Here : ";
        cin >> turnInput;
        if (board[turnInput - 1] == 'X' || board[turnInput - 1] == 'O')
        {
            cout << "\n\n\t\tInvalid input\n";
        }
        else
        {
            switch (turnInput)
            {
            case 1:
                board[turnInput - 1] = 'O';
                break;
            case 2:
                board[turnInput - 1] = 'O';
                break;
            case 3:
                board[turnInput - 1] = 'O';
                break;
            case 4:
                board[turnInput - 1] = 'O';
                break;
            case 5:
                board[turnInput - 1] = 'O';
                break;
            case 6:
                board[turnInput - 1] = 'O';
                break;
            case 7:
                board[turnInput - 1] = 'O';
                break;
            case 8:
                board[turnInput - 1] = 'O';
                break;
            case 9:
                board[turnInput - 1] = 'O';
                break;
            default:
                cout << "\n\n\t\tInvalid input\n";
                break;
            }
        }
        checkresult = checkBoard(board);
    }
    if (checkresult == 1)
    {
        cout << "Winner is " << PlayerNo1 << endl;
    }
    else
    {
        cout << "Winner is " << PlayerNo2 << endl;
    }
}

int main()
{
    int tossWinner = 0;
    char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    Players players;
    players.setPlayers();
    tossWinner = players.toss();
    players.tossWinner(tossWinner);
    playGame(players.tossWPlayer, players.tossLPlayer, board);
    return 0;
}