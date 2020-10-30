#include <iostream>

int main() {
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "You just woke up into a very strange room..." << std::endl;
    std::cout << "There's a door not so far away from where you are." << std::endl;
    std::cout << "As you can see, a lock keeps the door safe and sound." << std::endl;
    std::cout << "You might want to descovery what's behinde it..." << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "-------------------------------------" << std::endl;
    std::cout << "There are 3 numbers in the lock's code." << std::endl;
    std::cout << "A little papper near the door, glued at the wall says:" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "+ The sum of the 3 numbers combination results in: " << CodeSum << std::endl;
    std::cout << "+ If you multiply all numbers, the result will be: " << CodeProduct << std::endl;    std::cout << "-------------------------------------" << std::endl;
 
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;  

    if(GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "You win!";
    } else {
        std::cout << "Wrong Answer!";
    }

    return 0;
}