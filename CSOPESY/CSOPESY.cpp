#include <iostream>
#include <string>

#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define RESET   "\033[0m"

void printHeader() {
    std::cout << R"(

   _____  _____  ____  _____  ______  _______     __
  / ____|/ ____|/ __ \|  __ \|  ____|/ ____\ \   / /
 | |    | (___ | |  | | |__) | |__  | (___  \ \_/ / 
 | |     \___ \| |  | |  ___/|  __|  \___ \  \   /  
 | |____ ____) | |__| | |    | |____ ____) |  | |   
  \_____|_____/ \____/|_|    |______|_____/   |_|   
                                                    
                                                   
)";
    std::cout << GREEN << "\nHello, Welcome to CSOPESY commandline!" << RESET << std::endl;
    std::cout << YELLOW << "Type 'exit' to quit, 'clear' to clear the screen\n" << RESET;

    std::cout << "Type a command:\n";
    std::cout << "initialize | screen | scheduler-test | scheduler-stop | report-util | clear | exit\n\n";
}

void clearScreen() {
    std::cout << "\033[2J\033[1;1H";
    printHeader();
}

int main() {
    std::string command;
    printHeader();

    while (true) {
        std::cout << "\nEnter a command: ";
        std::getline(std::cin, command);

        if (command == "initialize") {
            std::cout << "initialize command recognized. Doing something.";
        }
        else if (command == "screen") {
            std::cout << "screen command recognized. Doing something.";
        }
        else if (command == "scheduler-test") {
            std::cout << "scheduler-test command recognized. Doing something.";
        }
        else if (command == "scheduler-stop") {
            std::cout << "scheduler-stop command recognized. Doing something.";
        }
        else if (command == "report-util") {
            std::cout << "report-util command recognized. Doing something.";
        }
        else if (command == "clear") {
            clearScreen();
        }
        else if (command == "exit") {
            std::cout << "Exiting...\n";
            exit(0);
        }
        else {
            std::cout << "Unrecognized command.";
        }
    }

    return 0;
}
