#ifndef MAP_CLASS_H
# define MAP_CLASS_H
# include "Card_Class.hpp"

class Map
{
    private:

    int     _x;
    int     _y;
    Card    **_galaxy;

    public:

    Map(int x, int y);
    ~Map( void );

};

#endif