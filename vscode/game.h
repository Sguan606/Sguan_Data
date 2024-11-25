
// game.h
#ifndef GAME_H
#define GAME_H

// 定义棋盘最大尺寸
#define MAX_SIZE 20
#include <stdio.h>

// 游戏状态
enum GameState { ONGOING, PLAYER1_WINS, PLAYER2_WINS, DRAW };

// 函数声明
void initializeBoard(int size, char board[MAX_SIZE][MAX_SIZE]);
void printBoard(int size, char board[MAX_SIZE][MAX_SIZE]);
int placePiece(int row, int col, char player, int size, char board[MAX_SIZE][MAX_SIZE]);
enum GameState checkWin(int size, char board[MAX_SIZE][MAX_SIZE], int winCondition);


#endif /* DB040D44_1774_456D_9558_0E2B38E65EE8 */
