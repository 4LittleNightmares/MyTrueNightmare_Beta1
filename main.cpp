#include"Game.hpp"

int main()
{
    srand(time(NULL)); //It gives "data loss percision error", but that's no problem for the use I'm giving it
    greetings();
    
    loadingscreen();
    
    cout<<endl;
    cout<<endl;
    
    
    Game game;
    game.initGame();

    while (game.getPlaying())
    {
        game.mainMenu();
    }

    return 0;
}
