#pragma once

#define STARS 100


void AnimateRocketShip()// Displays rocket
{
	int i = 0;

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 9;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);




	system("cls");

	for (int j = 25; j >= i; j--)
	{
		cout << endl;
	}

	cout << "\t\t\t\t\t\t\t\t\t\t\t        *" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t       ***" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t      *****" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t     *******" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t    *********" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t   ***********" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t*****************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t*****************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t*****************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t*****************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t*********************************" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

	for (int j = 0; j < 1; j++)
	{


		HANDLE  hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		int col = 14;
		FlushConsoleInputBuffer(hConsole);
		SetConsoleTextAttribute(hConsole, col);

		for (int i = 0; i < 3; i++)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * *" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t * * * * * * * * * * * * * * * * " << endl;
			Sleep(200);
		}

		for (int i = 0; i < 4; i++)
		{
			cout << "\t\t\t\t\t\t\t\t\t * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
			cout << "\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
			Sleep(200);
		}

		for (int i = 0; i < 3; i++)
		{
			cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
			cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;

			Sleep(200);
		}

		for (int i = 0; i < 4; i++)
		{
			cout << "\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"
				<< " * * * * * * * * * * *" << endl;
			cout << "\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * "
				<< "* * * * * * * * * * * " << endl;
			Sleep(200);
		}
		for (int i = 0; i < 3; i++)
		{
			cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
			cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;

			Sleep(200);
		}
		for (int i = 0; i < 2; i++)
		{
			cout << "\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * " << endl;
			cout << "\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
			Sleep(200);
		}

		for (int i = 0; i < 2; i++)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * *" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * " << endl;
			Sleep(200);
		}

		for (int i = 0; i < 1; i++)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * " << endl;
			Sleep(200);
		}

		cout << endl << endl << endl << endl << endl;

		SetConsoleTextAttribute(hConsole, 15);
	}


}

void PHD()																		//Displays letters PHD vertically
{
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 9;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);

	for (int k = 0; k < 3; k++)				//Displays PHD
	{
		for (int i = 0; i < 15; i++)
		{
			cout << endl;
			Sleep(100);
			if (k != 0)
				break;
		}

		for (int j = 0; j < 11; j++)
		{
			cout << "\t";
		}

		if (k == 0)
			cout << "P" << endl;
		else if (k == 1)
			cout << "H" << endl;
		else
			cout << "D" << endl;
		Sleep(200);


	}
	for (int i = 0; i < 18; i++)
	{
		cout << endl;
		Sleep(100);
	}

	SetConsoleTextAttribute(hConsole, 15);
}

void PrettyHelpfulDevelopers()													//Pretty Helpful Developers
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	system("cls");

	for (int k = 0; k < 3; k++)
	{
		for (int i = 0; i < 16; i++)
		{
			cout << endl;
			if (k != 0)
				break;
		}

		for (int j = 0; j < 11; j++)
		{
			cout << "\t";
		}

		if (k == 0)
		{
			HANDLE  hConsole;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			int col = 11;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, col);

			cout << "P";
			Sleep(150);

			SetConsoleTextAttribute(hConsole, 9);

			cout << "r";
			Sleep(150);
			cout << "e";
			Sleep(150);
			cout << "t";
			Sleep(150);
			cout << "t";
			Sleep(150);
			cout << "y" << endl;
			Sleep(150);
		}
		else if (k == 1)
		{
			HANDLE  hConsole;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			int col = 11;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, col);

			cout << "H";
			Sleep(150);

			SetConsoleTextAttribute(hConsole, 9);

			cout << "e";
			Sleep(150);
			cout << "l";
			Sleep(150);
			cout << "p";
			Sleep(150);
			cout << "f";
			Sleep(150);
			cout << "u";
			Sleep(150);
			cout << "l" << endl;
		}
		else
		{
			HANDLE  hConsole;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			int col = 11;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, col);

			cout << "D";
			Sleep(150);

			SetConsoleTextAttribute(hConsole, 9);

			cout << "e";
			Sleep(150);
			cout << "v";
			Sleep(150);
			cout << "e";
			Sleep(150);
			cout << "l";
			Sleep(150);
			cout << "o";
			Sleep(150);
			cout << "p";
			Sleep(150);
			cout << "e";
			Sleep(150);
			cout << "r";
			Sleep(150);
			cout << "s" << endl;
		}

		Sleep(1000);
	}
}

void Presents()															//Displays "Presents..."
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 2;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);

	for (int i = 0; i < 2; i++)
	{
		cout << endl;
	}

	for (int j = 0; j < 10; j++)
	{
		cout << "\t";
	}

	for (int i = 0; i < 11; i++)
	{
		if (i == 0)
		{
			cout << "P";
		}

		if (i == 1)
		{
			cout << "r";
		}

		if (i == 2 || i == 4)
		{
			cout << "e";
		}

		if (i == 3 || i == 7)
		{
			cout << "s";
		}

		if (i == 5)
		{
			cout << "n";
		}

		if (i == 6)
		{
			cout << "t";
		}

		if (i == 8 || i == 9)
		{
			cout << ".";
		}
		if (i == 10)
		{
			cout << "." << endl;
		}

		Sleep(150);

	}
}

void TheCodeMachine()//Displays "THE CODE MACHINE"
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 2;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);

	cout << endl;

	for (int j = 0; j < 11; j++)
	{
		cout << "\t";
	}

	for (int i = 0; i < 16; i++)
	{
		if (i == 0)
		{
			cout << "T";
		}

		if (i == 1 || i == 12)
		{
			cout << "H";
		}

		if (i == 2 || i == 7)
		{
			cout << "E";
		}

		if (i == 3 || i == 8)
		{
			cout << " ";
		}

		if (i == 4 || i == 11)
		{
			cout << "C";
		}

		if (i == 5)
		{
			cout << "O";
		}

		if (i == 6)
		{
			cout << "D";
		}

		if (i == 9)
		{
			cout << "M";
		}

		if (i == 10)
		{
			cout << "A";
		}

		if (i == 13)
		{
			cout << "I";
		}

		if (i == 14)
		{
			cout << "N";
		}
		if (i == 15)
		{
			cout << "E" << endl;
		}

		Sleep(150);
	}
}

void Intro()//Displays Intro and User Prompt
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 15;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, 2);

	char enter;

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "\t";
		}

		if (i == 0)
		{
			cout << "Hello! Welcome to the Code Machine, brought to you by Pretty Helpful Developers. " << endl;
		}

		else if (i == 1)
		{
			cout << "Using complicated, secret encryption and decryption methods, this program will take " << endl;
		}
		else if (i == 2)
		{
			cout << "in your message and convert it to cipher text stored in a file. The program also decrypts " << endl;
		}
		else if (i == 3)
		{
			cout << "a message that has been sent to you from a user of The Code Machine. We hope you have a " << endl;
		}
		else
			cout << "great experience using this program!" << endl;
	}

	Sleep(7000);
	system("CLS");

}

void EncryptionUI()	//Entire UI
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

	AnimateRocketShip();



	PHD();

	PrettyHelpfulDevelopers();

	Presents();

	TheCodeMachine();

	Intro();
}




