#ifndef PIECE_H
#define PIECE_H

class Piece{
    private:
    bool white;
    bool killed;
    
    public:
    Piece(bool white);
    const bool isWhite();
    bool setWhite(bool white);
    const bool isKilled();
    bool setKilled(bool killed);
    virtual int* coordinate() = 0;
    
};

#endif