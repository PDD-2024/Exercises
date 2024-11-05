class Game
{
private:
    std::string currentLanguage;
    int score = 0;

public:
    Game(std::string lang) : currentLanguage(lang) {}

    void showWelcome()
    {
        if (currentLanguage == "en")
        {
            std::cout << "Welcome to the game!" << std::endl;
        }
        else if (currentLanguage == "es")
        {
            std::cout << "¡Bienvenido al juego!" << std::endl;
        }
        else if (currentLanguage == "fr")
        {
            std::cout << "Bienvenue au jeu!" << std::endl;
        }
    }

    void showGameOver()
    {
        if (currentLanguage == "en")
        {
            std::cout << "Game Over" << std::endl;
            std::cout << "Score: " << score << std::endl;
        }
        else if (currentLanguage == "es")
        {
            std::cout << "Fin del Juego" << std::endl;
            std::cout << "Puntuación: " << score << std::endl;
        }
        else if (currentLanguage == "fr")
        {
            std::cout << "Fin du Jeu" << std::endl;
            std::cout << "Score: " << score << std::endl;
        }
    }

    void start()
    {
        showWelcome();
    }

    void end()
    {
        showGameOver();
    }
};