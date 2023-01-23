#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

std::string word;

void generateJumble() {
    srand(time(0));
    std::random_shuffle(word.begin(), word.end());
    std::cout << "Jumbled word: " << word << std::endl;
}

int main() {
    std::cout << "Enter a word: ";
    std::cin >> word;
    generateJumble();
    return 0;
}
