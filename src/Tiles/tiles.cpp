<<<<<<< HEAD

=======
>>>>>>> c0e14b1c960070ae5013a79495fd2af186b317fe
#include "tiles.h"

Tile::Tile( int x, int y, int tileType )

#include "tiles.h"


Tile::Tile( int x, int y, int tileType )

{
    //Get the offsets
    mBox.x = x;
    mBox.y = y;

    //Set the collision box
    //mBox.w = TILE_WIDTH;
    //mBox.h = TILE_HEIGHT;

    //Get the tile type
    mType = tileType;
}

void Tile::render( SDL_Rect& camera )
{
    //If the tile is on screen
    //if( checkCollision( camera, mBox ) )
    //{
        //Show the tile
    //    gTileTexture.render( mBox.x - camera.x, mBox.y - camera.y, &gTileClips[ mType ] );
    //}
}

int Tile::getType()
{
    return mType;
}

SDL_Rect Tile::getBox()
{
    return mBox;
<<<<<<< HEAD
}



=======
<<<<<<< HEAD
}*/
>>>>>>> c0e14b1c960070ae5013a79495fd2af186b317fe

