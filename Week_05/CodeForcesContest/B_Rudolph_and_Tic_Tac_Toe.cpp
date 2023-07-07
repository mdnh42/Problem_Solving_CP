#include <bits/stdc++.h>

using namespace std;

char checkWinner(const vector<string> &board)
{
    char winner = '.';
    for (int i = 0; i < 3; i++)
    {

        if (board[i][0] != '.' && board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            winner = board[i][0];
            break;
        }

        if (board[0][i] != '.' && board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            winner = board[0][i];
            break;
        }
    }

    if (board[0][0] != '.' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        winner = board[0][0];
    }
    else if (board[0][2] != '.' && board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        winner = board[0][2];
    }
    return winner;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vector<string> board(3);
        for (int j = 0; j < 3; j++)
        {
            cin >> board[j];
        }
        char winner = checkWinner(board);
        if (winner != '.')
        {
            cout << winner << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
    }

    return 0;
}
