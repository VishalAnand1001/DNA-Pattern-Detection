#include "dna_matcher.h"

MatchResult naiveSearch(const std::string& text, const std::string& pattern) {
    MatchResult result;
    result.comparisons = 0;
    int n = text.size();
    int m = pattern.size();
    for (int i = 0; i <= n - m; ++i) {
        int j = 0;
        for (; j < m; ++j) {
            result.comparisons++;
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m) {
            result.positions.push_back(i); 
        }
    }
    return result;
}
