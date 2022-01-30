#include "end_Moon.hpp"
#include "Map_Class.hpp"
#include "Card_Class.hpp"

Map::Map(int x, int y) : _x(x), _y(y)
{
    std::cout << "Creating Galaxy" << std::endl;
    _galaxy = new Card *[_y];
    for (int i = 0; i < _y; i++)
        _galaxy[i] = new Card[_x];
    for (int i = 0; i < _y; i++)
        _galaxy[i] = [_x];
}

Map::~Map( void )
{
    std::cout << "Destroying Galaxy" << std::endl;
    for (int i = 0; i < _y; i++)
       delete[] _galaxy[i];
    delete[] _galaxy;
}