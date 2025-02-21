#include "TicTacToe.h"
#include <iostream>

TicTacToe::TicTacToe() : currentPlayer('X') {
    // Initialize the board with empty spaces
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
}

void TicTacToe::play() {
    int row, col;
    bool gameWon = false;

    while (!gameWon && !isBoardFull()) {
        printBoard();
        std::cout << "Player " << currentPlayer << ", enter row and column (0, 1, or 2): \n";
        std::cin >> row >> col;

        if (isMoveValid(row, col)) 
        {
            board[row][col] = currentPlayer;
            gameWon = checkWin(row, col);

            if (gameWon) 
            {
                printBoard();
                std::cout << "Player " << currentPlayer << " wins!\n";
            }
            else 
            {
                swapPlayer();
            }
        }
        else {
            std::cout << "Invalid move. Try again.\n";
        }
    }

    if (!gameWon) {
        printBoard();
        std::cout << "It's a draw!\n";
    }
}

void TicTacToe::printBoard() const {
    std::cout << "\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << (board[i][j] == ' ' ? '.' : board[i][j]) << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

bool TicTacToe::isMoveValid(int row, int col) const {
    return row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ';
}

void TicTacToe::swapPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

bool TicTacToe::checkWin(int row, int col) const {
    return checkRow(row) || checkCol(col) || (row == col && checkDiagonal()) || (row + col == 2 && checkAntiDiagonal());
}

bool TicTacToe::checkRow(int row) const {
    return board[row][0] == currentPlayer && board[row][1] == currentPlayer && board[row][2] == currentPlayer;
}

bool TicTacToe::checkCol(int col) const {
    return board[0][col] == currentPlayer && board[1][col] == currentPlayer && board[2][col] == currentPlayer;
}

bool TicTacToe::checkDiagonal() const {
    return board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer;
}

bool TicTacToe::checkAntiDiagonal() const {
    return board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer;
}

bool TicTacToe::isBoardFull() const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') return false;
        }
    }
    return true;
}