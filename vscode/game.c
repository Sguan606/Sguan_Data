// game.c
#include <stdio.h>
#include "game.h"

// 初始化棋盘，将所有位置置为空格
void initializeBoard(int size, char board[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            board[i][j] = ' ';
        }
    }
}

// 打印当前棋盘状态
void printBoard(int size, char board[MAX_SIZE][MAX_SIZE]) {
    printf("  ");
    for (int i = 0; i < size; i++) {
        printf("%2d", i);
    }
    printf("\n");

    for (int i = 0; i < size; i++) {
        printf("%2d", i);
        for (int j = 0; j < size; j++) {
            printf("|%c", board[i][j]);
        }
        printf("|\n");
    }
}

// 检查当前位置是否有效并放置棋子
int placePiece(int row, int col, char player, int size, char board[MAX_SIZE][MAX_SIZE]) {
    if (row < 0 || row >= size || col < 0 || col >= size || board[row][col] != ' ') {
        return 0; // 无效位置
    }
    board[row][col] = player;
    return 1; // 成功放置
}

// 检查是否有玩家获胜
enum GameState checkWin(int size, char board[MAX_SIZE][MAX_SIZE], int winCondition) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (board[i][j] == ' ') {
                continue;
            }
            char player = board[i][j];

            // 检查水平方向
            if (j + winCondition <= size) {
                int count = 0;
                for (int k = 0; k < winCondition; k++) {
                    if (board[i][j + k] == player) {
                        count++;
                    }
                }
                if (count == winCondition) {
                    return (player == 'X') ? PLAYER1_WINS : PLAYER2_WINS;
                }
            }

            // 检查垂直方向
            if (i + winCondition <= size) {
                int count = 0;
                for (int k = 0; k < winCondition; k++) {
                    if (board[i + k][j] == player) {
                        count++;
                    }
                }
                if (count == winCondition) {
                    return (player == 'X') ? PLAYER1_WINS : PLAYER2_WINS;
                }
            }

            // 检查对角线方向（左上到右下）
            if (i + winCondition <= size && j + winCondition <= size) {
                int count = 0;
                for (int k = 0; k < winCondition; k++) {
                    if (board[i + k][j + k] == player) {
                        count++;
                    }
                }
                if (count == winCondition) {
                    return (player == 'X') ? PLAYER1_WINS : PLAYER2_WINS;
                }
            }

            // 检查对角线方向（右上到左下）
            if (i + winCondition <= size && j - winCondition + 1 >= 0) {
                int count = 0;
                for (int k = 0; k < winCondition; k++) {
                    if (board[i + k][j - k] == player) {
                        count++;
                    }
                }
                if (count == winCondition) {
                    return (player == 'X') ? PLAYER1_WINS : PLAYER2_WINS;
                }
            }
        }
    }
    return ONGOING;
}
