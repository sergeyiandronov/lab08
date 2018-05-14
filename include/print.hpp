/** Вывод строки */
#include <string>
#include <fstream>
#include <iostream>
/** @brief Вывод текста в команндную строку
    @param ссылка на выводимую строку, поток вывода.
    */
void print(const std::string& text, std::ostream& out = std::cout);
/** @brief Вывод текста в команндную строку
    @param ссылка на выводимую строку, файловый поток вывода.
    */
void print(const std::string& text, std::ofstream& out);
