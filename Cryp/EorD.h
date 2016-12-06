#pragma once

void choice() {
	string choice, name, message2;
	while (true) {
		cout << "Encrypt or Decrypt? [E or D]: ";
		cin >> choice;
		vector <int> y = key();
		if (choice == "E" || choice == "e") {
			cout << "Type in you're message and press enter when you are done: ";
			cin.ignore();
			getline(cin, message2);
			vector <int> x = message(message2);
			cout << "Enter the file name [Do not enter with .txt]: ";

			getline(cin, name);
			encrypt(x, y, name);
			cout << "Your message has been saved!" << endl;
			break;
		}
		else if (choice == "D" || choice == "d") {
			cout << "Enter the file name [Do not enter with .txt]: ";
			cin.ignore();
			getline(cin, name);
			decrypt(name);
			break;
		}
		else {
			cout << "Please type either E or D!" << endl;
			cout << endl;

		}
	}
}