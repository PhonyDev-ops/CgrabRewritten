#include "gameMechanics.h"



using namespace sf;
using namespace std;

int main()
{
    RenderWindow window(VideoMode({ WINDOW_WIDTH, WINDOW_HEIGHT }), "Cash Grab!");
    gameEngine engine;
    engine.run(&window);
    return 0;
}
