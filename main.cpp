#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>

int main()
{
    std::vector<std::string> deck = {
            "A", "A", "A", "A",
            "K", "K", "K", "K",
            "Q", "Q", "Q", "Q",
            "J", "J", "J", "J",
            "10", "10", "10", "10",
            "9", "9", "9", "9",
            "8", "8", "8", "8",
            "7", "7", "7", "7",
            "6", "6", "6", "6",
            "5", "5", "5", "5",
            "4", "4", "4", "4",
            "3", "3", "3", "3",
            "2", "2", "2", "2",
    };

    std::random_device randomDevice;
    std::mt19937 generator(randomDevice());

    std::shuffle(deck.begin(), deck.end(), generator);

    std::copy(deck.begin(), deck.end(), std::ostream_iterator<std::string>(std::cout, ";"));
    std::cout << std::endl;

    return 0;
}