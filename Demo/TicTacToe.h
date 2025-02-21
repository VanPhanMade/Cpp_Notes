#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe {
public:
    TicTacToe();
    void play();

private:
    char board[3][3];
    char currentPlayer;

    void printBoard() const;
    bool isMoveValid(int row, int col) const;
    void swapPlayer();
    bool checkWin(int row, int col) const;
    bool checkRow(int row) const;
    bool checkCol(int col) const;
    bool checkDiagonal() const;
    bool checkAntiDiagonal() const;
    bool isBoardFull() const;
};

#endif // TICTACTOE_H