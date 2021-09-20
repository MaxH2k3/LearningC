#include <stdio.h>

int check_Win(int board[3][3]);
int check_board(int board[3][3]);
int play(int player, int x, int y, int board[3][3]);

int i, j;
int Correct_Board = 1;

int main()
{
    int board[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    
    
    //Check the board before beginning
    int Correct_Board = check_board(board);
    printf("The board is: %d\n", Correct_Board);



    //The board will start without error
    play(1, 1, 1, board);
    play(2, 0, 1, board);
    play(1, 2, 2, board);
    play(2, 0, 0, board);
    //
    play(1, 3, 4, board); //lỗi vị trí của người chơi một
    //
    play(1, 0, 2, board);
    play(2, 2, 0, board);
    play(1, 1, 2, board);

    
    
    //The board will check every player touch 
    if (Correct_Board == 1) {
        int result = check_Win(board);
        if (result == 3) {
            printf("Draw");
        }
        else if (result == 0) {
            printf("Continue\n");
        }
        else {
            printf("Player %d win", result);
        }
    }
    

    return 0;
}


//check board
int check_board(int board[3][3]) {
    int player1 = 0;
    int player2 = 0;
    int check = 1;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] == 1) {
                player1++;
            }
            else if (board[i][j] == 2) {
                player2++;
            }
        }
    };
    if (player2 > player1 || player1 - player2 >= 2) {
        check = 1;
    }
    return check;
}


//check result game
int check_Win(int board[3][3]) {
    int winner = 0;
    int i;
    int j;
    int num1;
    int num2;
    
//Check hàng ngang
    for (i = 0; i < 3; i++) {
        
        num1 = 0;
        num2 = 0;
        
        //Check hàng ngang 
        for (j = 0; j < 3; j++) {
            if (board[i][j] == 1) {
                num1 = num1 + 1;
            }
            else if (board[i][j] == 2) {
                num2 = num2 + 1;
            }
            
            if (num1 == 3) {
                winner = 1;
                return winner;
            }
            else if (num2 == 3) {
                winner = 2;
                return winner;
            }
        }
    };
   
//Check hàng dọc
    for (i = 0; i < 3; i++) {
        num1 = 0;
        num2 = 0;
        //check hàng dọc
        for (j = 0; j < 3; j++) {
            if (board[j][i] == 1) {
                num1 = num1 + 1;
            }
            else if (board[j][i] == 2) {
                num2 = num2 + 1;
            }
            
            if (num1 == 3) {
                winner = 1;
            }
            else if (num2 == 3) {
                winner = 2;
            }
        }
    };

//Check hàng chéo
    for (i = 0; i < 3; i++) {
        
        num1 = 0;
        num2 = 0;
        //Check hàng chéo
        for (j = 0; j < 3; j++) {
            if (board[j][j] == 1) {
                num1 = num1 + 1;
            }
            else if (board[j][j] == 2) {
                num2 = num2 + 1;
            }
            
            if (num1 == 3) {
                winner = 1;
            }
            else if (num2 == 3) {
                winner = 2;
            }
        }
    };

//check draw
    if (winner == 0) {
        winner = 3;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (board[i][j] == 0) {
                    return winner = 0;
                }
            }
        }
    };


    return winner;
}


//play game
int play(int player, int x, int y, int board[3][3]) {
    
    if (board[x][y] != 0 || x > 3 || y > 3) {
        Correct_Board = 0;
        printf("error\n");
        return Correct_Board;
    }
    
    board[x][y] = player;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", board[i][j]);
        }
    printf("\n");
    }
    
    if (player == 1) {
        printf("it's your turn to player 2\n");
    }
    else if (player == 2) {
        printf("it's your turn to player 1\n");
    }
    
    return Correct_Board;
}















