# CS160_Lab4
Welcome to CS160 Lab4! This lab is designed to enhance your understanding of parallel programming using OpenMP, a popular parallel programming model for multi-threaded applications.

## Prerequisites
- Access to a Linux-based system.
- OpenMP installed on your system. This lab has been tested and is recommended to be performed on `cs160.cs.ucr.edu`.


## Cloning the Codebase
To get started with the lab, first clone the repository to your local machine or development environment. Use the following git command:
```
git clone https://github.com/shixun404/CS160_Lab4.git
```

## Write your own parallel program using OpenMP

You are required to modify the provided template files - `q1.c`, `q2.c`, and `matmul.c`. Implement parallelism in these programs using OpenMP constructs and analyze the performance improvements.

Please include your code in your report.

## Instructions
- Familiarize yourself with the structure and functionality of the provided code.
- Implement parallel code segments using OpenMP directives.
- Ensure your code compiles and runs correctly.
- Document any changes or observations in your implementation process.

## Compilation
Once you've implemented the OpenMP directives, compile your code using the provided Makefile. Run the following command in the terminal:
```
make -j
```
The -j flag allows for parallel compilation, speeding up the build process.

## Support
If you encounter any issues or have questions, feel free to reach out to the TA.