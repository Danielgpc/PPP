# PPP (Programming principles and practice using C++) Third editon

This repository is disposable for holding the answers to the exercises, practice and "Try this" sections from the Bjarne Stroustrup's book Programming Principles and practice using C++ (third edition).

Each exercise, practice, or "Try this" has its own `.cpp` file. The files are organized into chapters.

## Project Structure

The project is organized by chapters. Inside each chapter's directory, you'll find the solutions for the exercises, practices, and "Try this" sections.

```
/Users/danielgp/Projects/PPP/
├───.gitignore
├───glossary.txt
├───README.md
├───.git/...
├───.vscode/
│   └───settings.json
├───build/
│   ├───.cmake/...
│   └───CMakeFiles/...
├───chapter 1/
│   ├───exercise 1.cpp
│   ├───exercise 2.cpp
│   └───...
├───chapter 2/
│   ├───exercise 10.cpp
│   ├───exercise 11.cpp
│   └───...
├───chapter 3/
│   ├───practice 1.cpp
│   ├───practice 10.cpp
│   └───...
└───include/
    ├───PPP_support.h
    └───PPPheaders.h
```

To find a specific file, navigate to the chapter's folder and look for the corresponding file. For example, the solution for "Chapter 3, Practice 2" would be in `chapter 3/practice 2.cpp`.

## Building

To compile the C++ files in this project, you can use a C++ compiler such as `clang++` or `g++`. The `-I` flag is required to ensure the compiler can locate the necessary header files from the `include` directory.

The following command provides an example of how to compile a C++ file:

```bash
clang++ -std=c++23 -Iinclude "chapter <chapter_number>/<file_name>.cpp" -o <output_file_name>
```

Remember to replace `<chapter_number>`, `<file_name>`, and `<output_file_name>` with the appropriate values.

For bulding you can use VS code tasks and just press, while the file you want to build is opened, `Cmd + shift + b` on MacOS or `Ctrl + shift + b` on Windows.

### Example

To compile `exercise 1.cpp` from `chapter 1` and create an executable named `exercise1`, you would run the following command:

```bash
clang++ -std=c++23 -Iinclude "chapter 1/exercise 1.cpp" -o exercise1
```

You can use `g++` in place of `clang++` if you prefer.

## Acknowledgments
I wanted to express my deep appreciation for the amazing Bjarne Stroustrup's book, Programming principles and practice using C++.