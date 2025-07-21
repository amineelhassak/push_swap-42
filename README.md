# 🧩 push_swap - 42 Sorting Algorithm Project

[![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License](https://img.shields.io/badge/License-42-blue.svg)]()
[![Status](https://img.shields.io/badge/Status-Complete-brightgreen.svg)]()
[![Build](https://img.shields.io/badge/Build-Passing-success.svg)]()
[![Version](https://img.shields.io/badge/Version-1.0.0-blue.svg)]()

<div align="center">

# 🧩 push_swap

> A fast and efficient sorting algorithm and checker for the 42 School project.

**Sort stacks with the fewest possible operations!**

</div>

---

## 📚 Table of Contents

- [🎯 Overview](#-overview)
- [✨ Features](#-features)
- [🛠️ Installation](#️-installation)
- [🚀 Usage](#-usage)
- [📁 Project Structure](#-project-structure)
- [🛠️ Technologies Used](#️-technologies-used)
- [🧪 Testing](#-testing)
- [🤝 Contributing](#-contributing)
- [📄 License](#-license)

## 🎯 Overview

`push_swap` is a 42 School project that challenges you to sort a stack of integers using a limited set of operations, with the goal of minimizing the number of moves. The project consists of two programs:

- **push_swap**: Generates a sequence of operations to sort the stack.
- **checker**: Verifies if a given sequence of operations correctly sorts the stack.

The project is a test of algorithmic thinking, optimization, and mastery of data structures.

## ✨ Features

- **Efficient sorting** of integer stacks using only allowed operations
- **Multiple sorting algorithms** (small, mid, big sorts) for different stack sizes
- **Checker program** to validate operation sequences
- **Input validation** (duplicates, non-integers, empty input)
- **Custom memory management**

### Supported Operations
- `sa`, `sb`, `ss`: Swap the top two elements of stack A, B, or both
- `pa`, `pb`: Push the top element from one stack to the other
- `ra`, `rb`, `rr`: Rotate stack A, B, or both upwards
- `rra`, `rrb`, `rrr`: Reverse rotate stack A, B, or both downwards

## 🛠️ Installation

### Prerequisites
- **C compiler** (GCC or Clang)
- **Make**

### Build the Project

```bash
make
```

To build the checker:
```bash
make bonus
```

To clean build files:
```bash
make clean
```

To remove all binaries:
```bash
make fclean
```

To rebuild from scratch:
```bash
make re
```

## 🚀 Usage

### Sorting with push_swap

```bash
./push_swap <list of integers>
```

**Example:**
```bash
./push_swap 3 2 1 6 5 8
```

This will output the sequence of operations to sort the stack.

### Checking a Solution

```bash
./push_swap 3 2 1 | ./cheker/checker 3 2 1
```

The checker will output `OK` if the stack is sorted, or `KO` otherwise.

## 📁 Project Structure

```
push_swap-42/
├── main.c                  # Main entry point
├── includes/               # Header files
│   ├── headers.h
│   └── stractus.h
├── src/
│   ├── algo/               # Sorting algorithms
│   ├── allocation/         # Memory management
│   ├── instra/             # Stack instructions
│   ├── operations/         # Stack operations
│   └── pars/               # Input parsing and validation
├── cheker/                 # Checker program
├── get_next_linee/         # get_next_line utility
├── lib/                    # Custom libft library
├── Makefile                # Build configuration
└── README.md               # This file
```

## 🛠️ Technologies Used

- **C** (C99)
- **Make**

## 🧪 Testing

### Manual Testing

1. **Run push_swap:**
   ```bash
   ./push_swap 2 1 3 6 5 8
   ```
2. **Check with checker:**
   ```bash
     ./push_swap 3 2 1 6 5 8 | ./checker 3 2 1 6 5 8
   ```

### Automated Testing

You can create shell scripts to automate tests, e.g.:
```bash
for i in {1..100}; do
  ARG="$(ruby -e 'puts (1..5).to_a.shuffle.join(" ")')"
  ./push_swap $ARG | ./cheker/checker $ARG
done
```

## 🤝 Contributing

Contributions are welcome! Please follow the 42 School code style and test thoroughly.

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Test with various inputs
5. Submit a pull request

## 📄 License

This project is part of the 42 School curriculum and is for educational purposes only.

---

<div align="center">

**Made with ❤️ for 42 School**

*Sort stacks with the fewest possible operations!*

</div> 
