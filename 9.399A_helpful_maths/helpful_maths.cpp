#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


std::vector<int> split_string(char split_by, std::string p_total_string);


int main() {
    std::string m_user_input;

    std::getline(std::cin, m_user_input);

    std::vector<int> m_string_to_char = split_string('+', m_user_input);
    std::sort(m_string_to_char.begin(), m_string_to_char.end());

    for (int i = 0; i < m_string_to_char.size(); i++) {
        int item = m_string_to_char[i];
        std::cout << item;

        if (i != m_string_to_char.size() - 1) {
            std::cout << "+";
        }
    }

    return 0;
}


std::vector<int> split_string(char split_by, std::string p_total_string) {
    std::vector<int> m_char_vector;
    char m_temp_char;

    int m_num_count = 0;
    for (int i = 0; i < p_total_string.size(); i++){
        char m_char = p_total_string[i];

        if (m_char == split_by) {
            m_char_vector.push_back(m_temp_char - '0');
            m_num_count += 1;
            continue;
        }

        m_temp_char = m_char;
    }

    m_char_vector.push_back(m_temp_char - '0');

    return m_char_vector;
}