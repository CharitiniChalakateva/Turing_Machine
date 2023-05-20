# Turing_Machine_Simulator

This program is a simulator for the Turing Machine, an abstract computing device developed by Alan Turing. The simulator is implemented in the C programming language and provides a command-line interface for running and observing the behavior of the Turing Machine.

# Turing Machine
This program implements a Turing Machine in C, which simulates the behavior of an abstract computing machine. It reads and manipulates symbols on an infinite tape using a set of rules defined by Alan Turing.

## Installation
To run this program, ensure that you have a C compiler installed on your system. You can compile the program using the following command: 
                      gcc main.c turing_machine.c tape.c rules.c -o turing_machine


## Usage
Once the program is compiled, you can execute it by running the following command:
                                  ./turing_machine

The Turing Machine Simulator will execute the rules defined in the `rules.c` file. 
It will read and manipulate symbols on an infinite tape, following the specified rules. 
The final content of the tape will be displayed on the screen.

For the execution of the `makefile`, you can run the following commands:
 (1) To compile the program: 'make'
(2) To run the program: './turing_machine'
(3) To clean files created during compilation: 'make clean'

## Customization
If you want to modify the behavior of the Turing Machine, you can edit the `rules.c` file. 
The file contains an array of rules that define how the machine interacts with symbols on the tape. 

## Contributing
Contributions to this project are welcome! If you have any ideas, improvements, or bug fixes, please open an issue or submit a pull request. Your contributions will help make the Turing Machine Simulator even better.

