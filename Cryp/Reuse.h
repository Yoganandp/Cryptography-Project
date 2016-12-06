#pragma once


void reuse(){
	while (true) {
		int i = 0;
		choice();
		string choice2;
		cout << "Would you like to use this tool again? [Y or N]: ";
		cin >> choice2;			
		if (choice2 == "N" || choice2 == "n" || choice2 == "NO" || choice2 == "No" || choice2 == "no" || choice2 == "nO") {
			cout << "Bye!" << endl;
			Sleep(1000);
			break;
		}
		else if (choice2 == "Y" || choice2 == "y" || choice2 == "YES" || choice2 == "Yes" || choice2 == "yes") {
			system("CLS");
		}
		else {
			cout << "Too late!" << endl;
			Sleep(1000);
			system("CLS");
		}
	}
	
}
