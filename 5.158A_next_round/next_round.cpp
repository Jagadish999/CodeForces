#include <iostream>
#include <ostream>
#include <string>
#include <vector>


std::vector<int> get_all_ints_from_string(std::string p_string_nums);
void print_vect(std::vector<int> p_vect);


int main() {
    std::string m_total_and_k, m_all_descending_scores;
    std::vector<int> m_vect_n_and_k, m_all_scores;

    std::getline(std::cin, m_total_and_k);
    m_vect_n_and_k = get_all_ints_from_string(m_total_and_k);

    std::getline(std::cin, m_all_descending_scores);
    m_all_scores = get_all_ints_from_string(m_all_descending_scores);

    int m_total = m_vect_n_and_k[0];
    int m_score_k = m_all_scores[m_vect_n_and_k[1] - 1];

    int m_quilified = 0;

    int m_count = 0;
    for (int i = 0; i < m_total; i++) {
        if (i == m_total) {
            break;
        }

        int scores = m_all_scores[i];

        if (scores < 1) {
            break;
        }

        if (scores >= m_score_k){
            m_quilified++;
        }
    }

    std::cout << m_quilified;

    return 0;
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
            m_all_nums.push_back(std::stoi(current_num));
            current_num = "";
            continue;
        }
    }

    return m_all_nums;
}