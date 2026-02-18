#ifndef DNA_MATCHER_H
#define DNA_MATCHER_H

#include <string>
#include <vector>

struct MatchResult {
    std::vector<int> positions;
    int comparisons;
};

MatchResult naiveSearch(const std::string& text, const std::string& pattern);

#endif
