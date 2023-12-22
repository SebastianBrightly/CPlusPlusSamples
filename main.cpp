#include <iostream>
#include <string>
#include <vector>

// To-Do List functionality
void openToDoList() {
    std::vector<std::string> tasks;
    int choice;

    while (true) {
        std::cout << "\nTo-Do List\n";
        std::cout << "1. Show Tasks\n";
        std::cout << "2. Add Task\n";
        std::cout << "3. Remove Task\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        std::string newTask;

        switch (choice) {
        case 1:
            if (tasks.empty()) {
                std::cout << "No tasks in the list.\n";
            }
            else {
                std::cout << "Tasks:\n";
                for (size_t i = 0; i < tasks.size(); ++i) {
                    std::cout << i + 1 << ". " << tasks[i] << "\n";
                }
            }
            break;
        case 2:
        {std::string newTask;
        std::cout << "Enter task to add: ";
        std::cin.ignore();
        std::getline(std::cin, newTask);
        tasks.push_back(newTask);
        std::cout << "Task '" << newTask << "' added.\n";
        break;
        }
        case 3:
            int taskIndex;
            std::cout << "Enter task number to remove: ";
            std::cin >> taskIndex;
            if (taskIndex >= 1 && taskIndex <= static_cast<int>(tasks.size())) {
                std::cout << "Task '" << tasks[taskIndex - 1] << "' removed.\n";
                tasks.erase(tasks.begin() + taskIndex - 1);
            }
            else {
                std::cout << "Invalid task number.\n";
            }
            break;
        case 4:
            std::cout << "Exiting To-Do List.\n";
            return;
        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    }
}

// Weather functionality
void openWeatherApp() {
    // Add Weather API functionality here
    std::cout << "Weather functionality is not implemented yet!\n";
}

int main() {
    int choice;

    while (true) {
        std::cout << "\nMain Menu\n";
        std::cout << "1. To-Do List\n";
        std::cout << "2. Weather App\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice (1-3): ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            openToDoList();
            break;
        case 2:
            openWeatherApp();
            break;
        case 3:
            std::cout << "Exiting program. Goodbye!\n";
            return 0;
        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 3.\n";
        }
    }

    return 0;
}
