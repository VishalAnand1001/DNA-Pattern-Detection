#include <iostream>
#include <string>
#include "dna_matcher.h"
#include "utils.h"
#include "performance.h"
using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include "dna_matcher.h"
#include "utils.h"
#include "performance.h"

using namespace std;

int main() {
    string filename = "sample_dna.txt"; 
    string dnaSequence = readDNAFromFile(filename);

    if (dnaSequence.empty()) {
        cerr << "Error: DNA sequence is empty or file not found." << endl;
        return 1;
    }

    cout << "--- DNA Matching Tool ---" << endl;
    cout << "Successfully loaded DNA sequence (" << dnaSequence.length() << " base pairs)." << endl;

    string pattern;
    cout << "\nEnter the DNA pattern to search for (e.g., ATGC): ";
    cin >> pattern; 

    
    MatchResult result = naiveSearch(dnaSequence, pattern);

    double timeTaken = measureExecutionTime(dnaSequence, pattern, naiveSearch);

    cout << "\n--- Search Results ---" << endl;
    if (result.positions.empty()) {
        cout << "No matches found for pattern: " << pattern << endl;
    } else {
        cout << "Matches found: " << result.positions.size() << endl;
        cout << "Found at indices: ";
        for (size_t i = 0; i < result.positions.size(); ++i) {
            cout << result.positions[i] << (i == result.positions.size() - 1 ? "" : ", ");
        }
        cout << endl;
    }

    cout << "-----------------------" << endl;
    cout << "Total comparisons: " << result.comparisons << endl;
    cout << "Execution time:    " << timeTaken << " ms" << endl;
    cout << "-----------------------" << endl;

    return 0;
}