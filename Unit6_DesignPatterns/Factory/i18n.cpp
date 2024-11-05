// TODO: Create ILanguage interface
class ILanguage {
    // Add necessary virtual methods
};

// TODO: Implement concrete language classes
class EnglishLanguage {
    // Implement interface methods
};

class SpanishLanguage {
    // Implement interface methods
};

// TODO: Implement language factory
class LanguageFactory {
    // Implement factory method
};

// Game class using the language system
class Game {
private:
    // Add necessary members

public:
    Game(const std::string& lang) {
        // Initialize game with selected language
    }

    void start() {
        // Show welcome message
    }

    void end() {
        // Show game over and score
    }
};