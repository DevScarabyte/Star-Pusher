#ifndef BOARD_H
#define BOARD_H
#include "../main.h"

class Board{
public:
    //Variables from game class
    struct images
    {
        string name; // try to make them caps
        string file;
    };
    //Constructor: loads string vector map. Converts to a 2D-Array for matrices calculations.
    //Finds and sets player location. Finds and sets goal and star locations.
    Board(vector<string>, vector<images>);
    //Destructor
    ~Board();
    //Renders game board, based on 2d array map, within camera bounds.
    void render();
    //Takes X and Y coordinates, and performs movement and rendering of game board.
    void movement(int xMove, int yMove);
    //Checks for win-condition, checking star tiles against goal tiles
    void checkForWinCondition();


private:
    //!Preset dimensions
    const int BOARD_WIDTH = 1500; //per pixel
    const int BOARD_HEIGHT = 1530; //per pixel
    const int TILE_WIDTH = 50; //per pixel
    const int TILE_HEIGHT = 85; //per pixel
    const int CAMERA_WIDTH = 7; //per tile
    const int CAMERA_HEIGHT = 12; //per tile
    //!MatricesLocations variables
    MatricesLocation player; //Keep track of player position in matrices
    vector<MatricesLocation> goal; //Keep track of goal locations in matrices
    vector<MatricesLocation> star; //Keep track of star locations in matrices
    //!Score tracking variables
    bool winCondition;
    int goalsTotal;
    int goalsRemaining;
};

#endif // BOARD_H
