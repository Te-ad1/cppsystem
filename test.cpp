
#include <windows.h>
#include <iostream>
using namespace std;

class pos{
	public:
	int choice;
	
	
    int menu(){
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 6);
    cout << "                     ------[1]--------       ------[2]------       ------[3]------     ------[4]-------     \n";
    cout << "                     | Fried Chicken |       |    burger   |       |    Drinks   |     | French Fries |     \n";
    cout << "                     -----------------       ---------------       ---------------     ----------------     \n";
    SetConsoleTextAttribute(h, 10);
    cout << "                     ------[5]-------       ------[6]------       ------[7]------      ------[8]------     \n";
    cout << "                     |    Snacks    |       |    Pizza    |       |    Tacos    |      |  Sandwiches |     \n";
    cout << "                     ----------------       ---------------       ---------------      ---------------      \n";
    
    SetConsoleTextAttribute(h, 12);
    cout << "                                   ------[9]-------      ----[10]----    ----[0]----      \n";
    cout << "                                   |  Reservation |      |  Receipt |    |   Exit  |         \n";
    cout << "                                   ----------------      -----------     -----------   \n";
    
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    cout << "	Enter your choice: ";
	cin >> choice;
    return 0;		
	}
	

	int transaction(){
	    
		char transacloop;
		do{

		switch(choice){
		
		case 1:
		cout << endl;
		cout << "		Choice: Fried Chicken" << endl;
		cout << "		Category: " << endl;
		cout << endl;
	
		cout << "		[a]Original Recipe Chicken (KFC)			55pesos" << endl;
		cout << "		[b]Chicken McNuggets (McDonald's))			85pesos" << endl;
		cout << "		[c]Chickenjoy (Jollibee))			        75pesos" << endl;
		cout << "		[d]Spicy Chicken Sandwich (Chick-fil-A))	92pesos" << endl;
		
		break;
		
		default:
		cout << "Invalid choice!\n";
		
		break;
		}
		cout << endl;
		cout << "	Enter your Category choice: ";
		cin >> choice;
		

	    //loop for transaction
	    cout << "	Do you want to buy another Fried Chicken (y/n): ";
		cin >> transacloop;
		}while(transacloop == 'y' || transacloop == 'y');
		
		
	    return 0;	
	
	}
	
};


int main()
{
    
    pos myObj;
    myObj.menu();
    myObj.transaction();
    return 0;
}

