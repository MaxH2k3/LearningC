#include <stdio.h>
int check_Win(int board[3][3]);


int main()
{
    int board[3][3] ={
        {2, 1, 2},
        {2, 2, 1},
        {2, 2, 1}
    };
    
    int result = check_Win(board);
    
    
    if (result == 3){
        printf("Draw");
    }
    else {
        printf("Player %d win", result);
    }
    
    

    return 0;
}


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




