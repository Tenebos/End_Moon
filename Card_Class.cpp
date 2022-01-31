#include "end_Moon.hpp"
#include "Card_Class.hpp"

Card::Card( void )
{
        _x = _y = _border_sign = 0;
        _font = NULL;
        std::cout << "System Created" << std::endl;
        return;
}

Card::Card(int x, int y, char c) : _x(x), _y(y), _border_sign(c)
{
        _font = new char *[y];
        for(int i = 0; i < y; i++)
                _font[i] = new char[x];
        std::cout << "System Created" << std::endl;
        return;
}

Card::Card(const Card &arg)
{
        *this = arg;
}

Card    &Card::operator=(Card const &card)
{
        if (*this != &card)
        {
                _x = card._x;
                _y = card._y;
                _border_sign = card._border_sign;
                _font = new char *[_y];
                for(int i = 0; i < _y; i++)
                        _font[i] = new char[_x];
        }
        return (*this);
}

Card::~Card( void )
{
        for (int i = 0; i < _y; i++)
                delete[] _font[i];
        delete[] _font;
        std::cout << "System Destroyed" << std::endl;
        return;
}