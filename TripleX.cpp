#include <iostream>

void PrintIntroduction() {

    std::cout << "------------------------------------- \n";
    std::cout << "You just woke up into a very strange room... \n";
    std::cout << "There's a door not so far away from where you are. \n";
    std::cout << "As you can see, a lock keeps the door safe and sound. \n";
    std::cout << "You might want to descovery what's behinde it... \n";
    std::cout << "------------------------------------- \n";

}

void PlayGame() {

    PrintIntroduction();

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

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
    } else {
        std::cout << "\nWrong Answer!\n";
    }
}

int main() {

    while(true) {
        PlayGame();
        std::cin.clear();  // Clear any erros.
        std::cin.ignore(); // Discards the buffer.
    }
    return 0;
}