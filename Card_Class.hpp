#ifndef CARD_CLASS_H
# define CARD_CLASS_H

class Card
{
    private:
    int _x;
    int _y;
    char **_font;
    char _border_sign;

    public:

    Card( void );
    Card(int x, int y, char c);
    ~Card( void );

};

#endif