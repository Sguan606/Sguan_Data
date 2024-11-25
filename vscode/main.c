// main.c
#include <stdio.h>
#include "game.h"

int main() 
{
    int size;
    int winCondition = 5; // 五子棋默认获胜条件为5
    char board[MAX_SIZE][MAX_SIZE];
    enum GameState state = ONGOING;

    printf("欢迎来到五子棋游戏！\n");
    printf("请输入棋盘大小 (最大 %d): ", MAX_SIZE);
    scanf("%d", &size);

    // 初始化棋盘
    initializeBoard(size, board);

    char currentPlayer = 'X'; // 玩家1 'X'，玩家2 'O'
    int row, col;
    int moves = 0;

    while (state == ONGOING && moves < size * size) {
        printBoard(size, board);
        printf("玩家 %c, 请输入行和列(例如:0 0 表示左上角): ", currentPlayer);
        scanf("%d %d", &row, &col);

        // 检查输入是否合法并放置棋子
        if (!placePiece(row, col, currentPlayer, size, board)) {
            printf("无效的位置，请重试。\n");
            continue;
        }

        // 检查游戏状态
        state = checkWin(size, board, winCondition);
        moves++;

        // 切换玩家
        if (currentPlayer == 'X') {
            currentPlayer = 'O';
        } else {
            currentPlayer = 'X';
        }
    }

    printBoard(size, board);

    // 显示结果
    if (state == PLAYER1_WINS) {
        printf("玩家 X 胜利！\n");
    } else if (state == PLAYER2_WINS) {
        printf("玩家 O 胜利！\n");
    } else {
        printf("平局！\n");
    }

    return 0;
}
