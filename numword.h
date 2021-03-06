//
// Created by maxsn on 5/20/2017.
//

#ifndef NUMWORDS_NUMWORD_H
#define NUMWORDS_NUMWORD_H

#include <string>

namespace bw {

static const char * error_message = "error";

static const std::string _sub_twenty[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                                             "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
                                             "eighteen", "nineteen"};
static const std::string _tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

static const std::string _multipliers[] = {"", "thousand", "million", "billion", "trillion", "quadrillion"};

static const uint64_t _max_number = 999999999999999999;

class numword {
    char* num_word = nullptr;
    const std::string three_to_words(int) const;
public:
    numword();
    const char* words(uint64_t) const;
    ~numword();
};

}

#endif //NUMWORDS_NUMWORD_H
