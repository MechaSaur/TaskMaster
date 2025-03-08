#include <iostream>
#include <string>
#include <vector>

class Task {
public:
	std::string TaskName;
	bool Complete;


	// Task constructor
	Task(std::string TaskName, bool Complete) {
		this->TaskName = TaskName;
		this->Complete = Complete;
	}

	void ListTask() {
		std::cout << "Task Name: " << TaskName << '\n';
		std::cout << "Completed: " << (Complete ? "True" : "False") << '\n';
	}
};

std::vector<Task> toDoTask;
std::vector<Task> completedTask;
void AddTask();
void DeleteTask();
void ViewTask();
void ViewCompletedTask();

int main()
{
	bool runProgram = true;
	std::string userAnswer;

	do {
		std::cout << "1. Create a task " << '\n';
		std::cout << "2. Delete a task / Mark complete " << '\n';
		std::cout << "3. View all task " << '\n';
		std::cout << "4. View Completed task " << '\n';
		std::cout << "5. Exit Program " << '\n';
		std::cout << "Input Number: ";
		std::getline(std::cin, userAnswer);
		// Making sure user does not enter a blank choice
		while (userAnswer.empty()) {
			std::cout << "Your input can not be empty! " << '\n';
			std::getline(std::cin, userAnswer);
		}
		int numberChoice = std::stoi(userAnswer);
		// Switch statements for user choices
		switch (numberChoice) {
		case 1:
			AddTask();
			break;
		case 2:
			DeleteTask();
			break;
		case 3:
			ViewTask();
			break;
		case 4:
			ViewCompletedTask();
			break;
		case 5:
			return false;
		}
	} while (runProgram);
}// Main 

std::string task1Name;
std::string task2Name;
std::string task3Name;
std::string task4Name;
std::string task5Name;
std::string task6Name;
std::string task7Name;
std::string task8Name;
std::string task9Name;
std::string task10Name;

// Add task method 
void AddTask() {
	int taskNumber;
	// Task numbers
	

	std::cout << "How many task do you want to add? you may add up to 10!" << '\n';
	std::cin >> taskNumber;
	// Handling for one task
	if (taskNumber == 1) {
		std::cout << "Enter the name of the task: " << '\n';
		std::cin.ignore();
		std::getline(std::cin, task1Name);
		// Making sure the name of the task is not empty
		while (task1Name.empty()) {
			std::cout << "Name of task can not be empty " << '\n';
			std::getline(std::cin, task1Name);
		}
		Task Task1(task1Name, false);
		toDoTask.push_back(Task1); // Index 0
	}
	// Handling for entering two task
	if (taskNumber == 2) {
		std::cout << "Enter the name of the first task " << '\n';
		std::cin.ignore();
		std::getline(std::cin, task1Name);
		std::cout << "Enter the name of the second task " << '\n';
		std::getline(std::cin, task2Name);
		// Making sure the name for both task 1 and task 2 are not empty
		while (task1Name.empty() || task2Name.empty()) {
			if (task1Name.empty()) {
				std::cout << "The name for task one can not be empty " << '\n';
				std::getline(std::cin, task1Name);
			}
			if (task2Name.empty()) {
				std::cout << "Task name for task two can not be empty " << '\n';
				std::getline(std::cin, task2Name);
			}
		}
		Task task1(task1Name, false); 
		Task task2(task2Name, false);
		toDoTask.push_back(task1); // Index 0
		toDoTask.push_back(task2); // Index 1
	}
	// Handling selection for inputting 3 task 
	if (taskNumber == 3) {
		std::cout << "Enter the name of the first task " << '\n';
		std::cin.ignore();
		std::getline(std::cin, task1Name);
		std::cout << "Enter the name of the second task " << '\n';
		std::getline(std::cin, task2Name);
		std::cout << "Enter the name of the third task " << '\n';
		std::getline(std::cin, task3Name);
		// Make sure none of the task names are empty
		while (task1Name.empty() || task2Name.empty() || task3Name.empty()) {
			if (task1Name.empty()) {
				std::cout << "Task one name can not be empty " << '\n';
				std::getline(std::cin, task1Name);
			}
			if (task2Name.empty()) {
				std::cout << "Task two name can not be empty " << '\n';
				std::getline(std::cin, task2Name);
			}
			if (task3Name.empty()) {
				std::cout << "Task three name can not be empty " << '\n';
				std::getline(std::cin, task3Name);
			}
		}
		Task task1(task1Name, false);
		Task task2(task2Name, false);
		Task task3(task3Name, false);
		toDoTask.push_back(task1); // Index 0
		toDoTask.push_back(task2); // Index 1
		toDoTask.push_back(task3); // Index 2
	}
	// Handling input for 4 task 
	if (taskNumber == 4) {
		std::cout << "Enter the name for task one " << '\n';
		std::cin.ignore();
		std::getline(std::cin, task1Name);
		std::cout << "Enter the name for task two " << '\n';
		std::getline(std::cin, task2Name);
		std::cout << "Enter the name for task three " << '\n';
		std::getline(std::cin, task3Name);
		std::cout << "Enter the name for task four " << '\n';
		std::getline(std::cin, task4Name);
		// Making sure that none of the task names are empty
		while (task1Name.empty() || task2Name.empty() || task3Name.empty() || task4Name.empty()) {
			if (task1Name.empty()) {
				std::cout << "Task one name can not be empty " << '\n';
				std::getline(std::cin, task1Name);
			}
			if (task2Name.empty()) {
				std::cout << "Task two name can not be empty " << '\n';
				std::getline(std::cin, task2Name);
			}
			if (task3Name.empty()) {
				std::cout << "Task three name can not be empty " << '\n';
				std::getline(std::cin, task3Name);
			}
			if (task4Name.empty()) {
				std::cout << "Task four name can not be empty " << '\n';
				std::getline(std::cin, task4Name);
			}
		}
		Task task1(task1Name, false);
		Task task2(task2Name, false);
		Task task3(task3Name, false);
		Task task4(task4Name, false);
		toDoTask.push_back(task1); // Index 0
		toDoTask.push_back(task2); // Index 1
		toDoTask.push_back(task3); // Index 2
		toDoTask.push_back(task4); // Index 3
	}
	// Handling user input for 5 task 
	if (taskNumber == 5) {
		std::cout << "Enter the name for the first task " << '\n';
		std::cin.ignore();
		std::getline(std::cin, task1Name);
		std::cout << "Enter the name for the second task " << '\n';
		std::getline(std::cin, task2Name);
		std::cout << "Enter the name for the third task " << '\n';
		std::getline(std::cin, task3Name);
		std::cout << "Enter the name for the fourth task " << '\n';
		std::getline(std::cin, task4Name);
		std::cout << "Enter the name for the fifth task " << '\n';
		std::getline(std::cin, task5Name);
		// Make sure all task names are not empty
		while (task1Name.empty() || task2Name.empty() || task3Name.empty() || task4Name.empty() || task5Name.empty()) {
			if (task1Name.empty()) {
				std::cout << "Task one name can not be empty " << '\n';
				std::cin.ignore();
				std::getline(std::cin, task1Name);
			}
			if (task2Name.empty()) {
				std::cout << "Task two name can not be empty " << '\n';
				std::getline(std::cin, task2Name);
			}
			if (task3Name.empty()) {
				std::cout << "Task three name can not be empty " << '\n';
				std::getline(std::cin, task3Name);
			}
			if (task4Name.empty()) {
				std::cout << "Task four name can not be empty " << '\n';
				std::getline(std::cin, task4Name);
			}
			if (task5Name.empty()) {
				std::cout << "Task five name can not be empty " << '\n';
				std::getline(std::cin, task5Name);
			}
		}
		Task task1(task1Name, false);
		Task task2(task2Name, false);
		Task task3(task3Name, false);
		Task task4(task4Name, false);
		Task task5(task5Name, false);
		toDoTask.push_back(task1); // Index 0
		toDoTask.push_back(task2); // Index 1
		toDoTask.push_back(task3); // Index 2
		toDoTask.push_back(task4); // Index 3
		toDoTask.push_back(task5); // Index 4
	}
	// Handling user input for 6 task
	if (taskNumber == 6) {
		std::cout << "Enter the name for the first task " << '\n';
		std::cin.ignore();
		std::getline(std::cin, task1Name);
		std::cout << "Enter the name for the second task " << '\n';
		std::getline(std::cin, task2Name);
		std::cout << "Enter the name for the third task " << '\n';
		std::getline(std::cin, task3Name);
		std::cout << "Enter the name for the fourth task " << '\n';
		std::getline(std::cin, task4Name);
		std::cout << "Enter the name for the fifth task " << '\n';
		std::getline(std::cin, task5Name);
		std::cout << "Enter the name for the sixth task " << '\n';
		std::getline(std::cin, task6Name);
		// Make sure all task names are not empty
		while (task1Name.empty() || task2Name.empty() || task3Name.empty() || task4Name.empty() || task5Name.empty() || task6Name.empty()) {
			if (task1Name.empty()) {
				std::cout << "Task one name can not be empty " << '\n';
				std::cin.ignore();
				std::getline(std::cin, task1Name);
			}
			if (task2Name.empty()) {
				std::cout << "Task two name can not be empty " << '\n';
				std::getline(std::cin, task2Name);
			}
			if (task3Name.empty()) {
				std::cout << "Task three name can not be empty " << '\n';
				std::getline(std::cin, task3Name);
			}
			if (task4Name.empty()) {
				std::cout << "Task four name can not be empty " << '\n';
				std::getline(std::cin, task4Name);
			}
			if (task5Name.empty()) {
				std::cout << "Task five name can not be empty " << '\n';
				std::getline(std::cin, task5Name);
			}
			if (task6Name.empty()) {
				std::cout << "Task six name can not be empty " << '\n';
				std::getline(std::cin, task5Name);
			}
		}
		Task task1(task1Name, false);
		Task task2(task2Name, false);
		Task task3(task3Name, false);
		Task task4(task4Name, false);
		Task task5(task5Name, false);
		Task task6(task6Name, false);
		toDoTask.push_back(task1); // Index 0
		toDoTask.push_back(task2); // Index 1
		toDoTask.push_back(task3); // Index 2
		toDoTask.push_back(task4); // Index 3
		toDoTask.push_back(task5); // Index 4
		toDoTask.push_back(task6); // Index 5

	}

	// Handling input for task 7
	if (taskNumber == 7) {
		std::cout << "Enter the name for the first task " << '\n';
		std::cin.ignore();
		std::getline(std::cin, task1Name);
		std::cout << "Enter the name for the second task " << '\n';
		std::getline(std::cin, task2Name);
		std::cout << "Enter the name for the third task " << '\n';
		std::getline(std::cin, task3Name);
		std::cout << "Enter the name for the fourth task " << '\n';
		std::getline(std::cin, task4Name);
		std::cout << "Enter the name for the fifth task " << '\n';
		std::getline(std::cin, task5Name);
		std::cout << "Enter the name for the sixth task " << '\n';
		std::getline(std::cin, task6Name);
		std::cout << "Enter the name for the seventh task " << '\n';
		std::getline(std::cin, task7Name);
		// Make sure all task names are not empty
		while (task1Name.empty() || task2Name.empty() || task3Name.empty() || task4Name.empty() || task5Name.empty() || task6Name.empty() || task7Name.empty()) {
			if (task1Name.empty()) {
				std::cout << "Task one name can not be empty " << '\n';
				std::cin.ignore();
				std::getline(std::cin, task1Name);
			}
			if (task2Name.empty()) {
				std::cout << "Task two name can not be empty " << '\n';
				std::getline(std::cin, task2Name);
			}
			if (task3Name.empty()) {
				std::cout << "Task three name can not be empty " << '\n';
				std::getline(std::cin, task3Name);
			}
			if (task4Name.empty()) {
				std::cout << "Task four name can not be empty " << '\n';
				std::getline(std::cin, task4Name);
			}
			if (task5Name.empty()) {
				std::cout << "Task five name can not be empty " << '\n';
				std::getline(std::cin, task5Name);
			}
			if (task6Name.empty()) {
				std::cout << "Task six name can not be empty " << '\n';
				std::getline(std::cin, task6Name);
			}
			if (task7Name.empty()) {
				std::cout << "Task seven name can not be empty " << '\n';
				std::getline(std::cin, task7Name);
			}
		}
		Task task1(task1Name, false);
		Task task2(task2Name, false);
		Task task3(task3Name, false);
		Task task4(task4Name, false);
		Task task5(task5Name, false);
		Task task6(task6Name, false);
		Task task7(task7Name, false);
		toDoTask.push_back(task1); // Index 0
		toDoTask.push_back(task2); // Index 1
		toDoTask.push_back(task3); // Index 2
		toDoTask.push_back(task4); // Index 3
		toDoTask.push_back(task5); // Index 4
		toDoTask.push_back(task6); // Index 5
		toDoTask.push_back(task7); // Index 6
	}
	// Handling user input for 8 task 
	if (taskNumber == 8) {
		std::cout << "Enter the name for the first task " << '\n';
		std::cin.ignore();
		std::getline(std::cin, task1Name);
		std::cout << "Enter the name for the second task " << '\n';
		std::getline(std::cin, task2Name);
		std::cout << "Enter the name for the third task " << '\n';
		std::getline(std::cin, task3Name);
		std::cout << "Enter the name for the fourth task " << '\n';
		std::getline(std::cin, task4Name);
		std::cout << "Enter the name for the fifth task " << '\n';
		std::getline(std::cin, task5Name);
		std::cout << "Enter the name for the sixth task " << '\n';
		std::getline(std::cin, task6Name);
		std::cout << "Enter the name for the seventh task " << '\n';
		std::getline(std::cin, task7Name);
		std::cout << "Enter the name for the eighth task " << '\n';
		std::getline(std::cin, task8Name);
		// Make sure all task names are not empty
		while (task1Name.empty() || task2Name.empty() || task3Name.empty() || task4Name.empty() || task5Name.empty() || task6Name.empty() || task7Name.empty() || task8Name.empty()) {
			if (task1Name.empty()) {
				std::cout << "Task one name can not be empty " << '\n';
				std::cin.ignore();
				std::getline(std::cin, task1Name);
			}
			if (task2Name.empty()) {
				std::cout << "Task two name can not be empty " << '\n';
				std::getline(std::cin, task2Name);
			}
			if (task3Name.empty()) {
				std::cout << "Task three name can not be empty " << '\n';
				std::getline(std::cin, task3Name);
			}
			if (task4Name.empty()) {
				std::cout << "Task four name can not be empty " << '\n';
				std::getline(std::cin, task4Name);
			}
			if (task5Name.empty()) {
				std::cout << "Task five name can not be empty " << '\n';
				std::getline(std::cin, task5Name);
			}
			if (task6Name.empty()) {
				std::cout << "Task six name can not be empty " << '\n';
				std::getline(std::cin, task6Name);
			}
			if (task7Name.empty()) {
				std::cout << "Task seven name can not be empty " << '\n';
				std::getline(std::cin, task7Name);
			}
			if (task8Name.empty()) {
				std::cout << "Task eight name can not be empty " << '\n';
				std::getline(std::cin, task8Name);
			}
		}
		Task task1(task1Name, false);
		Task task2(task2Name, false);
		Task task3(task3Name, false);
		Task task4(task4Name, false);
		Task task5(task5Name, false);
		Task task6(task6Name, false);
		Task task7(task7Name, false);
		Task task8(task8Name, false);
		toDoTask.push_back(task1); // Index 0
		toDoTask.push_back(task2); // Index 1
		toDoTask.push_back(task3); // Index 2
		toDoTask.push_back(task4); // Index 3
		toDoTask.push_back(task5); // Index 4
		toDoTask.push_back(task6); // Index 5
		toDoTask.push_back(task7); // Index 6
		toDoTask.push_back(task8); // Index 7
	}
	// Handling for inputting 9 task
	if (taskNumber == 9) {
		std::cout << "Enter the name for the first task " << '\n';
		std::cin.ignore();
		std::getline(std::cin, task1Name);
		std::cout << "Enter the name for the second task " << '\n';
		std::getline(std::cin, task2Name);
		std::cout << "Enter the name for the third task " << '\n';
		std::getline(std::cin, task3Name);
		std::cout << "Enter the name for the fourth task " << '\n';
		std::getline(std::cin, task4Name);
		std::cout << "Enter the name for the fifth task " << '\n';
		std::getline(std::cin, task5Name);
		std::cout << "Enter the name for the sixth task " << '\n';
		std::getline(std::cin, task6Name);
		std::cout << "Enter the name for the seventh task " << '\n';
		std::getline(std::cin, task7Name);
		std::cout << "Enter the name for the eighth task " << '\n';
		std::getline(std::cin, task8Name);
		std::cout << "Enter the name for the ninth task " << '\n';
		std::getline(std::cin, task9Name);
		// Make sure all task names are not empty
		while (task1Name.empty() || task2Name.empty() || task3Name.empty() || task4Name.empty() || task5Name.empty() || task6Name.empty() || task7Name.empty() || task8Name.empty()
			|| task9Name.empty()) {
			if (task1Name.empty()) {
				std::cout << "Task one name can not be empty " << '\n';
				std::cin.ignore();
				std::getline(std::cin, task1Name);
			}
			if (task2Name.empty()) {
				std::cout << "Task two name can not be empty " << '\n';
				std::getline(std::cin, task2Name);
			}
			if (task3Name.empty()) {
				std::cout << "Task three name can not be empty " << '\n';
				std::getline(std::cin, task3Name);
			}
			if (task4Name.empty()) {
				std::cout << "Task four name can not be empty " << '\n';
				std::getline(std::cin, task4Name);
			}
			if (task5Name.empty()) {
				std::cout << "Task five name can not be empty " << '\n';
				std::getline(std::cin, task5Name);
			}
			if (task6Name.empty()) {
				std::cout << "Task six name can not be empty " << '\n';
				std::getline(std::cin, task6Name);
			}
			if (task7Name.empty()) {
				std::cout << "Task seven name can not be empty " << '\n';
				std::getline(std::cin, task7Name);
			}
			if (task8Name.empty()) {
				std::cout << "Task eight name can not be empty " << '\n';
				std::getline(std::cin, task8Name);
			}
			if (task9Name.empty()) {
				std::cout << "Task nine name can not be empty " << '\n';
				std::getline(std::cin, task9Name);
			}
		}
		Task task1(task1Name, false);
		Task task2(task2Name, false);
		Task task3(task3Name, false);
		Task task4(task4Name, false);
		Task task5(task5Name, false);
		Task task6(task6Name, false);
		Task task7(task7Name, false);
		Task task8(task8Name, false);
		Task task9(task9Name, false);
		toDoTask.push_back(task1); // Index 0
		toDoTask.push_back(task2); // Index 1
		toDoTask.push_back(task3); // Index 2
		toDoTask.push_back(task4); // Index 3
		toDoTask.push_back(task5); // Index 4
		toDoTask.push_back(task6); // Index 5
		toDoTask.push_back(task7); // Index 6
		toDoTask.push_back(task8); // Index 7
		toDoTask.push_back(task9); // Index 8
	}
	// Handling for task 10
	if (taskNumber == 10) {
		std::cout << "Enter the name for the first task " << '\n';
		std::cin.ignore();
		std::getline(std::cin, task1Name);
		std::cout << "Enter the name for the second task " << '\n';
		std::getline(std::cin, task2Name);
		std::cout << "Enter the name for the third task " << '\n';
		std::getline(std::cin, task3Name);
		std::cout << "Enter the name for the fourth task " << '\n';
		std::getline(std::cin, task4Name);
		std::cout << "Enter the name for the fifth task " << '\n';
		std::getline(std::cin, task5Name);
		std::cout << "Enter the name for the sixth task " << '\n';
		std::getline(std::cin, task6Name);
		std::cout << "Enter the name for the seventh task " << '\n';
		std::getline(std::cin, task7Name);
		std::cout << "Enter the name for the eighth task " << '\n';
		std::getline(std::cin, task8Name);
		std::cout << "Enter the name for the ninth task " << '\n';
		std::getline(std::cin, task9Name);
		std::cout << "Enter the name for the tenth task " << '\n';
		std::getline(std::cin, task10Name);
		// Make sure all task names are not empty
		while (task1Name.empty() || task2Name.empty() || task3Name.empty() || task4Name.empty() || task5Name.empty() || task6Name.empty() || task7Name.empty() || task8Name.empty()) {
			if (task1Name.empty()) {
				std::cout << "Task one name can not be empty " << '\n';
				std::cin.ignore();
				std::getline(std::cin, task1Name);
			}
			if (task2Name.empty()) {
				std::cout << "Task two name can not be empty " << '\n';
				std::getline(std::cin, task2Name);
			}
			if (task3Name.empty()) {
				std::cout << "Task three name can not be empty " << '\n';
				std::getline(std::cin, task3Name);
			}
			if (task4Name.empty()) {
				std::cout << "Task four name can not be empty " << '\n';
				std::getline(std::cin, task4Name);
			}
			if (task5Name.empty()) {
				std::cout << "Task five name can not be empty " << '\n';
				std::getline(std::cin, task5Name);
			}
			if (task6Name.empty()) {
				std::cout << "Task six name can not be empty " << '\n';
				std::getline(std::cin, task6Name);
			}
			if (task7Name.empty()) {
				std::cout << "Task seven name can not be empty " << '\n';
				std::getline(std::cin, task7Name);
			}
			if (task8Name.empty()) {
				std::cout << "Task eight name can not be empty " << '\n';
				std::getline(std::cin, task8Name);
			}
			if (task9Name.empty()) {
				std::cout << "Task nine name can not be empty " << '\n';
				std::getline(std::cin, task9Name);
			}
			if (task10Name.empty()) {
				std::cout << "Task ten name can not be empty " << '\n';
				std::getline(std::cin, task9Name);
			}
		}
		Task task1(task1Name, false);
		Task task2(task2Name, false);
		Task task3(task3Name, false);
		Task task4(task4Name, false);
		Task task5(task5Name, false);
		Task task6(task6Name, false);
		Task task7(task7Name, false);
		Task task8(task8Name, false);
		Task task9(task9Name, false);
		Task task10(task10Name, false);
		toDoTask.push_back(task1); // Index 0
		toDoTask.push_back(task2); // Index 1
		toDoTask.push_back(task3); // Index 2
		toDoTask.push_back(task4); // Index 3
		toDoTask.push_back(task5); // Index 4
		toDoTask.push_back(task6); // Index 5
		toDoTask.push_back(task7); // Index 6
		toDoTask.push_back(task8); // Index 7
		toDoTask.push_back(task9); // Index 8
		toDoTask.push_back(task10); // Index 9

	}
	
	}

// Delete the task that the user wants to delete or mark complete
void DeleteTask() {
	std::string userAnswer;
	std::cout << "Enter the number of the task that you want to delete " << '\n';
	std::getline(std::cin, userAnswer);
	// Make sure user answer is not empty
	while (userAnswer.empty()) {
		std::cout << "Input can not be empty " << '\n';
		std::getline(std::cin, userAnswer);
	}
	int numberToDelete = stoi(userAnswer) - 1;
	// Delete the task that the user
	if (numberToDelete >= 0 && numberToDelete < toDoTask.size()) {
		// Mark the task as completed before deleting
		toDoTask[numberToDelete].Complete = true;
		completedTask.push_back(toDoTask[numberToDelete]);

		// Delete the task from toDoTask
		toDoTask.erase(toDoTask.begin() + numberToDelete);
	}
	else {
		std::cout << "Invalid task number.\n";
	}
	
}
// View All task 
void ViewTask() {
	for (Task task : toDoTask) {
		std::cout << task.TaskName << '\n';
		if (task.Complete == false) {
			std::cout << "Completed: False " << '\n';
			std::cout << " " << '\n';
		}
	}
}

void ViewCompletedTask() {
	for (Task task : completedTask) {
		std::cout << task.TaskName << '\n';
		if (task.Complete == true) {
			std::cout << "Completed: True " << '\n';
			std::cout << " " << '\n';
		}
		else {
			std::cout << "Completed: False " << '\n';
			std::cout << " " << '\n';
		}
		
		
	}
}

