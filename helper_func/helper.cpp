#include <iostream>
#include <vector>

int main() {

}


std::vector<int> get_all_ints_from_string(std::string p_string_nums) {
    std::vector<int> m_all_nums;
    std::string current_num = "";

    for(int i = 0; i < p_string_nums.size(); i++) {
        char ch = p_string_nums[i];

        if(ch != ' '){
            current_num += ch;
        }

        if(!current_num.empty() && (ch == ' ' || i == p_string_nums.size() - 1)) {
            // std::cout << current_num << ":" << std::endl;

            m_all_nums.push_back(std::stoi(current_num));
            current_num = "";
            continue;
        }
    }

    return m_all_nums;
}


void print_vect(std::vector<int> p_vect) {
    for (int item: p_vect) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}