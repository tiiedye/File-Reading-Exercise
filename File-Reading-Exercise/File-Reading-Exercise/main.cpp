#include <iostream>
#include <fstream>
#include <iomanip>

// Prototypes
void print_header();
void print_footer(double average);
void print_student(const std::string& student, int score);
int process_response(const std::string& response, const std::string& answer_key);

// Function Definitions
void print_header() {
    std::cout << std::setw(15) << std::left << "Student"
        << std::setw(15) << std::right << "Score" << std::endl;
    std::cout << std::setw(30) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
}

void print_footer(double average) {
    std::cout << std::setw(30) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');

    std::cout << std::setw(15) << std::left << "Average Score"
        << std::setw(15) << std::right << average << std::endl;
}

void print_student(const std::string& student, int score) {
    std::cout << std::setprecision(1) << std::fixed;

    std::cout << std::setw(15) << std::left << student
        << std::setw(15) << std::right << score << std::endl;
}

int process_response(const std::string& response, const std::string& answer_key) {
    int score{ 0 };

    for (size_t i = 0; i < answer_key.size(); ++i) {
        if (response.at(i) == answer_key.at(i)) {
            score++;
        }
    }

    return score;
}

int main() {
    std::ifstream in_file;
    std::string answer_key{};
    std::string name{};
    std::string response{};
    int running_sum{ 0 };
    int total_students{ 0 };
    double average_score{ 0.0 };

    print_header();

    return 0;
}
