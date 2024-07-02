#include <string>

namespace log_line {
    std::string message(std::string line) {
        int message_start = line.find(':') + 2;
        return line.substr(message_start);
    }

    std::string log_level(std::string line) {
        int level_start = 1;
        int level_end = line.find(']') - 1;
        return line.substr(level_start, level_end);
    }

    std::string reformat(std::string line) {
        return message(line) + " (" + log_level(line) + ")";
    }
}
