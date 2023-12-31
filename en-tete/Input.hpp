#ifndef INPUT_H
#define INPUT_H

#include <SFML/Graphics.hpp>
using namespace sf;

class Input{
    struct Button{
        bool left;
        bool right;
        bool up;
        bool down;
        bool attack;
        bool escape;
    };
    
    public:
        Input();
        void eventListener(Event event, RenderWindow& window);
        Button getButton(); 
    private:
        Button button;
};
#endif // INPUT_H
