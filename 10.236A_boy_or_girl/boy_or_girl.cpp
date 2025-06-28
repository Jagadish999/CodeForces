#include <iostream>
#include <map>
#include <string>


int main() {
    std::string user_name;
    std::getline(std::cin, user_name);
    std::map<char, char> m_unique_char;

    for (char m_ch: user_name) {
        m_unique_char[m_ch] = m_ch;
    }

    if (m_unique_char.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!";
    }
    else {
        std::cout << "IGNORE HIM!";
    }

    return 0;
}