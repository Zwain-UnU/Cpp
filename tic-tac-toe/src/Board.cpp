#include "Board.hpp"
#include <iostream>
using namespace std;


Board::Board() {
    for (int i = 0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
            cells[i][j] = ' '; 
        }
    }
}


bool Board::placeMark(int row, int col, char mark) {

    if (row < 0 || row > 2 || col < 0 || col > 2) {
        return false;
    }

    if (cells[row][col] != ' '){
        return false;
    }

    cells[row][col] = mark;
    return true;


}


bool Board::isFull() const{

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (cells[i][j] == ' '){
                return false;
            }
        }
    }
    return true;

}

bool Board::hasWinner(char mark) const{

    for(int  i = 0; i < 3; i++){
        if (cells[i][0] == mark && cells[i][1] == mark && cells[i][2] == mark){
            return true;
        }

        if (cells[0][1] == mark && cells[1][i] == mark && cells[2][i] == mark){
            return true;
        }
    }

    if (cells[0][0] == mark && cells[1][1] == mark && cells[2][2] == mark){
        return true;
    }

    if (cells[0][2] == mark && cells[1][1] == mark && cells[2][0] == mark){
        return true;
    }

}