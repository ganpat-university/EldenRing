#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <unistd.h>
using namespace std;

class class_data
{
	private:
	string type, beast;
	int hp, attack, magic, beast_num, tarnished, cheat, c;

	public:
	int luck, l = 0, m = 0;
	unsigned int mics1 = 2000000, mics2 = 1000000;
	
	
	class_data(string c_type, int c_hp, int c_attack, int c_magic)
	{
		type = c_type;
		hp = c_hp;
		attack = c_attack;
		magic = c_magic;
	}

	void beastData(string c_beast, int c_beast_num, int c_tarnished, int c_cheat)
	{
		beast = c_beast;
		beast_num = c_beast_num;
		tarnished = c_tarnished;
		cheat = c_cheat;
		
		if (tarnished == beast_num || tarnished == cheat)
		{
			if (beast == "Sentinel")
				cout << beast << " VANQUISHED!! Congratulations fellow Tarnsihed!\n";
			else if (beast == "Elden God")
				cout << beast << " DEFEATED!! Congratulations fellow Tarnsihed!\nYou have became the ELDEN LORD!!!\n";
			usleep(mics2);
		}
		
		else
		{
			cout << "You Died!\n";
			exit(0);
		}
	}

	void beastDataLuck(string c_beast, int c_beast_num, int c_tarnished, int c_cheat, int choice)
	{
		srand(time(0));
		
		beast = c_beast;
		beast_num = c_beast_num;
		tarnished = c_tarnished;
		cheat = c_cheat;
		c = choice;
		again2:
		luck = (rand() % 3) + 1;
		
		if (tarnished == beast_num || tarnished == cheat)
		{
			cout << beast << " SLAIN!! Congratulations fellow Tarnsihed!\n";
			l++;
			usleep(mics2);
		}

		else if ((((tarnished != beast_num) || (tarnished != cheat)) && (c == luck)) || (tarnished == 6))
		{
			cout << "Your attack was just powerful enough to STUN " << beast << ". Try attacking again...\n";
			cin >> tarnished;
			l = 10;
			usleep(mics2);
			goto again2;
		}
		
		else
		{
			cout << "You Died!\n";
			exit(0);
		}
	}

	void beastDataPower(string c_beast, int c_beast_num, int c_tarnished, int c_cheat)
	{
		beast = c_beast;
		beast_num = c_beast_num;
		tarnished = c_tarnished;
		cheat = c_cheat;
		
		if (tarnished == beast_num || tarnished == cheat)
		{
			cout << beast << " SLAIN!! Congratulations fellow Tarnsihed!\n";
			m++;
			usleep(mics2);
		}
		
		else if ((tarnished != beast_num && tarnished != cheat) && (l == 1))
		{
			cout << "Since you defeated Radahn in one fell swoop, you have the power to know this beast's weak points.\nYou have now reduced the options from 5 to 2. Choose between " << (beast_num / 2) << " and " << ((beast_num / 2) + 1) << ": ";
			cin >> tarnished;

			if (tarnished == beast_num)
			{
				cout << beast << " SLAIN!! Congratulations fellow Tarnsihed!\n";
				m = 10;
				usleep(mics2);
			}

			else
			{
				cout << "You Died!\n";
				exit(0);
			}
		}

		else
		{
			cout << "You Died!\n";
			exit(0);
		}
	}

	void beastDataPowerLuck(string c_beast, int c_beast_num, int c_tarnished, int c_cheat, int choice)
		{
			srand(time(0));
			
			beast = c_beast;
			beast_num = c_beast_num;
			tarnished = c_tarnished;
			cheat = c_cheat;
			c = choice;
			again3:
			luck = (rand() % 3) + 1;
			
			if (tarnished == beast_num || tarnished == cheat)
			{
				cout << beast << " DEFEATED!! Congratulations fellow Tarnsihed!\nYou have became the ELDEN LORD!!!\n";
				usleep(mics2);
			}
	
			else if ((((tarnished != beast_num) && (tarnished != cheat)) && (c == luck)) || (tarnished == 24))
			{
				cout << "Your attack was just powerful enough to STUN " << beast << ". Try attacking again...\n";
				cin >> tarnished;
				usleep(mics2);
				goto again3;
			}

			else if ((tarnished != beast_num && tarnished != cheat) && (m == 1))
			{
				cout << "Since you defeated Malenia in one fell swoop, you have the power to know this beast's weak points.\nYou have now reduced the options from 10 to 2. Choose between " << (beast_num / 2) << " and " << ((beast_num / 2) + 1) << ": ";
				cin >> tarnished;

				if (tarnished == beast_num)
				{
					cout << beast << " DEFEATED!! Congratulations fellow Tarnsihed!\nYou have became the ELDEN LORD!!!\n";
					usleep(mics2);
				}

				else
				{
					cout << "You Died!\n";
					exit(0);
				}
			}
			
			else
			{
				cout << "You Died!\n";
				exit(0);
			}
		}

	void load()
	{
		usleep(mics2);
		system("clear");
		cout << "LOADING\n";
		usleep(mics2);
		system("clear");
		cout << "LOADING.\n";
		usleep(mics2);
		system("clear");
		cout << "LOADING..\n";
		usleep(mics2);
		system("clear");
		cout << "LOADING..." << endl;
		usleep(mics2);
		system("clear");
	}
};

int main()
{
	system("clear");
	
	int choice;
	cout << "Wake Up Tarnished!! And Choose Your Starting Class(Click '1', '2' or '3'):-\n1) Samurai\n2) Prisoner\n3) Prophet\n\nChoice: ";
	cin >> choice;

	string c_type, c_beast;
	int c_hp, c_attack, c_magic, c_beast_num, c_tarnished, c_cheat;

	switch (choice)
	{
		case 1:
			c_type = "Samurai";
			c_hp = 10;
			c_attack = 20;
			c_magic = 2;

			break;
			
		case 2:
			c_type = "Prisoner";
			c_hp = 20;
			c_attack = 10;
			c_magic = 5;

			break;

		case 3:
			c_type = "Prophet";
			c_hp = 6;
			c_attack = 4;
			c_magic = 10;

			break;

		default:
			cout << "Please input from the options given!" << endl;
	}

	cout << "\nAhhh Fellow " << c_type << " Tarnished, It seems your HP is " << c_hp << ", attack is " << c_attack << " and magic is " << c_magic << ". May you have the strength to conquer all your adversities or atleast the will to try again!\n\n";

	class_data obj(c_type, c_hp, c_attack, c_magic);

	unsigned int micros = 2000000;
	usleep(micros * 3);
	system("clear");

	// Supposed Scripted Loss
	char suicide_choice;
	cout << "A Grafted Scion Fell.\nYou have a very low chance of winning right now. Would you like to fight in a 1 in 1000 chance right now? (y/N): ";
	cin >> suicide_choice;

	srand(time(0));

	if (suicide_choice == 'y' || suicide_choice == 'Y')
	{
		c_beast = "Scion";
		c_beast_num = ((rand() % 1000) + 1);
		c_cheat = 1709;
		
		cout << "Very Well!! Please choose a number between 1 and 1000('1' and '1000' included): ";
		cin >> c_tarnished;

		if ((c_tarnished == c_beast_num) || (c_tarnished == c_cheat))
		{
			cout << "Beast SLAIN!!! It seems you have the skills of a god residing within you!\n";
			usleep(micros / 2);
		}

		else
		{
			cout << "You Died!\n\n";
		}
	}

	else
	{
		cout << "You Died!\n\n";
	}

	obj.load();

	// First BOSS
	cout << "The Beast, Tree Sentinel is here.";
	c_beast = "Sentinel";
	c_beast_num = (rand() % 2);
	c_cheat = 4;
	cout << "\nNow Choose A Number Between '0' and '1' To Test The Victor: ";
	cin >> c_tarnished;
	obj.beastData(c_beast, c_beast_num, c_tarnished, c_cheat);

	obj.load();

	// Second BOSS
	cout << "The Demi-God, Radahn is here.";
	c_beast = "Radahn";
	again:
	c_beast_num = ((rand() % 5) + 1);
	c_cheat = 9;
	
	cout << "\nNow Choose A Number Between 1 and 5(including '1' and '5') To Test The Victor: ";
	cin >> c_tarnished;

	obj.beastDataLuck(c_beast, c_beast_num, c_tarnished, c_cheat, choice);

	if ((obj.l != 1) && ((choice == obj.luck) || (c_tarnished == 7)))
	{
		cout << "Seems like " << c_beast << " has taken a liking to you because of your class. You can try again:-\n";
		goto again;
	}

	obj.load();

	// Third BOSS
	cout << "The Demi-God, Malenia, Blade Of Miquella is here.";
	c_beast = "Malenia";
	c_beast_num = ((rand() % 5) + 1);
	c_cheat = 9;

	cout << "\nNow Choose A Number Between 1 and 5(including '1' and '5') To Test The Victor: ";
	cin >> c_tarnished;

	if (obj.l == 1)
	{
		obj.beastDataPower(c_beast, c_beast_num, c_tarnished, c_cheat);
	}

	else
	{
		obj.beastData(c_beast, c_beast_num, c_tarnished, c_cheat);
	}

	obj.load();

	// Final BOSS
	cout << "Your Final Being To Defeat, Elden God is here.";
	c_beast = "God";
	c_beast_num = (rand() % 10);
	c_cheat = 17;

	cout << "\nNow Choose A Number Between 0 and 9(including '0' and '9') To Test The Victor: ";
	cin >> c_tarnished;

	if (obj.m == 1)
	{
		obj.beastDataPowerLuck(c_beast, c_beast_num, c_tarnished, c_cheat, choice);
	}

	else
	{
		obj.beastData(c_beast, c_beast_num, c_tarnished, c_cheat);
	}
		
	return 0;
}
