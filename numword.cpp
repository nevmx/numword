#include <string>
#include <cstring>
#include "numword.h"

const char* bw::numword::words(uint64_t n) const {
    // Too big number check
    if (n > max_number) {
        return "error";
    }

    // Easiest case
    if (n == 0) {
        return "zero";
    }

    std::string answer = "";

    // Take care of the lowest 3 digits at a time
    for (int i = 0; i < 6; i++) {
        uint64_t temp = n / 1000;
        temp *= 1000;

        int threeDigits = n - temp;

        if (threeDigits > 0) {
            answer = std::to_string(threeDigits) + multipliers[i] + " " + answer;
        }

        n /= 1000;
        if (n == 0) {
            strcpy(num_word, answer.c_str());
            return num_word;
        }
    }

    return answer.c_str();
}

bw::numword::numword() {
    num_word = new char[1024];
}

bw::numword::~numword() {
    delete[] num_word;
}