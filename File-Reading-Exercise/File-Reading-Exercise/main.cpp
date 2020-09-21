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
