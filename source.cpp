#include <iostream>
#include <string>
int main()
{
    std::string word;
    std::cout << "Введите слово: ";
    std::getline(std::cin, word);
    std::cout << "Вы ввели: " << word << std::endl;
    return 0;
}