#pragma once

class Board {

public:

    Board();

    bool placeMark(int row, int col, char mark);

    bool isFull() const;

    bool hasWinner(char mark) const;

    void print() const;

private: 

    char cells[3][3];
    

};