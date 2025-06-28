#include <iostream>
#include <string>
#include <array>


std::array<int, 2> get_fixed_size_array_from_string(std::string p_string);


int main() {
    std::string m_width_and_height;
    std::getline(std::cin, m_width_and_height);

    std::array<int, 2> m_width_and_hight_arr= get_fixed_size_array_from_string(m_width_and_height);
    
    int m_width = m_width_and_hight_arr[0];
    int m_height = m_width_and_hight_arr[1];

    if (m_width == 1 && m_height == 1) {
        std::cout << 0;
    }

    else if (m_width == 1) {
        std::cout << m_height / 2;
    }

    // Width is odd
    else if (m_width % 2 == 1) {
        m_width--;

        std::cout << ((m_width / 2) * m_height) + m_height / 2; 
    }
    else if (m_width % 2 == 0) {
        std::cout << (m_width / 2) * m_height;
    }
    

    return 0;
}


std::array<int, 2> get_fixed_size_array_from_string(std::string p_string_nums) {
    std::array<int, 2> m_nums_aray;
    std::string current_num = "";

    int m_idx_count = 0;

    for(int i = 0; i < p_string_nums.size(); i++) {
        char ch = p_string_nums[i];

        if(ch != ' '){
            current_num += ch;
        }

        if(!current_num.empty() && (ch == ' ' || i == p_string_nums.size() - 1)) {
            m_nums_aray[m_idx_count] = (std::stoi(current_num));
            m_idx_count += 1;

            current_num = "";
            continue;
        }
    }

    return m_nums_aray;

}