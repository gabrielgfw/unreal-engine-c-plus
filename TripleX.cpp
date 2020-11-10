#include <iostream>

void PrintIntroduction(int Difficulty) {

    std::cout << "------------------------------------- \n";
    std::cout << "Difficulty Level: " << Difficulty << std::endl;
    std::cout << "------------------------------------- \n";
    std::cout << "You just woke up into a very strange room... \n";
    std::cout << "There's a door not so far away from where you are. \n";
    std::cout << "As you can see, a lock keeps the door safe and sound. \n";
    std::cout << "You might want to descovery what's behinde it... \n";
    std::cout << "------------------------------------- \n";
}

bool PlayGame(int Difficulty) {

    PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + 1;
    const int CodeB = rand() % Difficulty + 1;
    const int CodeC = rand() % Difficulty + 1;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "-------------------------------------\n";
    std::cout << "There are 3 numbers in the lock's code.\n";
    std::cout << "A little papper near the door, glued at the wall says:\n";
    std::cout << "-------------------------------------\n";
    std::cout << "+ The sum of the 3 numbers combination results in: " << CodeSum << std::endl;
    std::cout << "+ If you multiply all numbers, the result will be: " << CodeProduct << std::endl;
    std::cout << "-------------------------------------\n";
 
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;  

    if(GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "\nYou win!\n";
        return true;
    } else {
        std::cout << "\nWrong Answer!\n";
        return false;
    }
}

int main() {
    int LevelDifficulty = 1;
    int const MaxLevelDifficulty = 5;

    while(LevelDifficulty <= MaxLevelDifficulty) {
        bool bLevelCompleted = PlayGame(LevelDifficulty);
        std::cin.clear();  // Clear any erros.
        std::cin.ignore(); // Discards the buffer.

        if(bLevelCompleted) {
            ++LevelDifficulty;
        }
        
    }
    std::cout << "Muito bem, todos os niveis foram concluidos.";
    return 0;
}