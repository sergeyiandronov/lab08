/** Вывод строки */
#include <string>
#include <fstream>
#include <iostream>
/** @brief Вывод текста в команндную строку
    @param text ссылка на выводимую строку
    @param out  поток вывода
    */
void print(const std::string& text, std::ostream& out = std::cout);
/** @brief Вывод текста в команндную строку
    @param text ссылка на выводимую строку
    @param out файловый поток вывода
    */
void print(const std::string& text, std::ofstream& out);

