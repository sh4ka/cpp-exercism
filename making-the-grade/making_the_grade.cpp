#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(const std::vector<double>& student_scores) {
    std::vector<int> result;
    result.reserve(student_scores.size());
    for (auto student_score: student_scores) {
        result.push_back(static_cast<int>(student_score));
    }
    return result;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int result {0};
    for (auto student_score: student_scores) {
        if (student_score <= 40) {
            result++;
        }
    }
    return result;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(const std::vector<int>& student_scores, int threshold) {
    std::vector<int> result;
    result.reserve(student_scores.size());
    for (auto score: student_scores) {
        if (score >= threshold) {
            result.push_back(score);
        }
    }
    return result;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int distance = highest_score - 40;
    int separation = distance / 4;
    return {41, 41 + separation, 41 + separation * 2, 41 + separation * 3};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    int student_number = 0;
    std::vector<std::string> result;

    result.reserve(student_scores.size());
    for (auto score: student_scores) {
        result.push_back(std::to_string(student_number + 1) + ". " + student_names.at(student_number) + ": " + std::to_string(score));
        ++student_number;
    }
    return result;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(const std::vector<int>& student_scores, std::vector<std::string> student_names) {
    int student_index = 0;
    for (int score: student_scores) {
        if (score == 100) {
            return student_names.at(student_index);
        }
        student_index++;
    }
    return "";
}
