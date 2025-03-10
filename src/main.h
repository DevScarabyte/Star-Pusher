#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

// include all C++ files here

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>

// custom classes
#include "Events/EventHandler.h"
#include "MatrciesLocation/MatricesLocation.h"

struct images
{
    std::string name; // try to make them caps
    std::string file;
};



using namespace std;

#endif // MAIN_H_INCLUDED
