# DNA Pattern Detection Using Naïve String Matching (C++)

## 📌 Project Overview

This project implements a DNA pattern detection system using the **Naïve String Matching Algorithm** in C++.  

It searches for a specific gene pattern inside a given DNA sequence and reports:

- All matching positions
- Total number of matches
- Number of character comparisons
- Execution time (performance analysis)

This project is designed for academic purposes in the domain of **Medical Research and Bioinformatics**.

---

## 🧬 Problem Statement

Given:
- A DNA sequence consisting of characters: A, T, G, C
- A gene pattern (substring)

The program detects all occurrences of the pattern inside the DNA sequence using the **Naïve String Matching Algorithm**.


---

## ⚙️ Algorithm Used

### Naïve String Matching Algorithm

The algorithm checks every possible position in the DNA string and compares the pattern character-by-character.

### Pseudocode:


Where:
- n = length of DNA sequence
- m = length of pattern

---

## ⏱ Time Complexity

- **Worst Case:** O(n × m)
- **Best Case:** O(n)
- **Average Case:** O(n × m)

As the DNA size increases, execution time increases proportionally.

---

## 📊 Performance Analysis

The program measures:

- Total character comparisons
- Execution time using `std::chrono`

This helps evaluate algorithm efficiency for different dataset sizes.

---


(Windows users may need to run: `.\dna_app.exe`)

---

## 🧠 Key Concepts Used

- C++ Modular Programming
- Header Files (`.h`)
- File Handling
- Vectors
- Structures
- Performance Measurement (`std::chrono`)
- Naïve Pattern Matching

---

## 🎓 Academic Relevance

This project demonstrates:

- Basic bioinformatics string analysis
- Algorithm complexity evaluation
- Structured C++ project development
- Version control using Git

---

## 🚀 Future Improvements

- Implement KMP algorithm for comparison
- Support very large genome datasets
- Add graphical visualization
- Optimize performance for large-scale data

---

## 👨‍💻 Author

Vishal, Tanish, SriKrishna, Yohan

---

## 📜 License

This project is for educational and academic use.