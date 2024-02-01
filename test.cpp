
//#include <windows.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <stdlib.h> 
using namespace std;
//HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
class pos{
	public:
	int choice;
	int quantity;
	int totalcost;

	    int animation(){
	        cout << "                       Loading: ";

            const char animationChars[] = { '|', '/', '-', '\\'};

            const int numAnimationChars = sizeof(animationChars) / sizeof(animationChars[0]);
            int animationIndex = 0;
            const int numIterations = 50;

            for (int i = 0; i < numIterations; ++i) {
            std::cout << animationChars[animationIndex] << std::flush;
            // Introduce a short delay for animation effect
            usleep(100000); // usleep is in microseconds (1e6 microsec = 1 sec)
            animationIndex = (animationIndex + 1) % numAnimationChars;
            std::cout << '\b'; // Move the cursor back
        }
    
            system ("CLS");
	    }

		
		int verification(){
		string name;
		int password;
		//SetConsoleTextAttribute(h, 10);
		cout << " 					==============================" << endl;
		cout << "                                        Welcome to The Heritage Grill. " << endl;
		cout << " 					============================= " << endl;
		
		
		
		cout << endl;
		cout << endl;
		cout << "		Enter your username: ";
		cin >> name;
		cout << "		Enter your password: ";
		cin >> password;
		
		if(name == "admin" && password == 123){
			cout << "						Welcome admin!!" << endl;
		}else{
			cout << "			Wrong username or password!!" << endl;
			return 0;
		}
			
		cout << endl;
		cout << endl;
		
	}

	
    int menu(){
	//blue
    //SetConsoleTextAttribute(h, 2);
    cout << "                     ------[1]--------       ------[2]------       ------[3]------     ------[4]-------     \n";
    cout << "                     | Fried Chicken |       |    burger   |       |    Drinks   |     | French Fries |     \n";
    cout << "                     -----------------       ---------------       ---------------     ----------------     \n";
    //SetConsoleTextAttribute(h, 6);
    cout << "                     ------[5]-------       ------[6]------       ------[7]------      ------[8]------     \n";
    cout << "                     |    Snacks    |       |    Pizza    |       |    Tacos    |      |  Sandwiches |     \n";
    cout << "                     ----------------       ---------------       ---------------      ---------------      \n";
    
    //SetConsoleTextAttribute(h, 4);
    cout << "                                   ------[9]-------      ----[10]----    ----[0]----      \n";
    cout << "                                   |  Reservation |      |  Receipt |    |   Exit  |         \n";
    cout << "                                   ----------------      -----------     -----------   \n";
    
    
    //SetConsoleTextAttribute(h, 10);
    cout << "	Enter your choice: ";
	cin >> choice;
	//SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);	
    return 0;		
	}
	

	int transaction(){
	    //SetConsoleTextAttribute(h, 10);
		char transacloop;
		char chickCategory;
		
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
		cout << "	Enter your choice: ";
		cin >> chickCategory;
		
		if(chickCategory == 'a'){
		
		cout << "		Choice: Original Recipe Chicken (KFC)			55pesos" << endl;
		cout << "\tEnter quantity: ";
		cin >> quantity;
		
		totalcost = quantity * 55;
		
		cout << "		Total cost: " <<totalcost;
		
		}
		break;
		
		default:
		cout << "Invalid choice!\n";
		
		break;
		//SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		}
		cout << endl;
		//SetConsoleTextAttribute(h, 10);
		
		

	    //loop for transaction
	    cout << "	Do you want to buy another Fried Chicken (y/n): ";
		cin >> transacloop;
		}while(transacloop == 'y' || transacloop == 'y');
		
	   //SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);	
	    return 0;	
	
	}
	
};


int main()
{
    
    pos myObj;
    myObj.animation();
    myObj.verification();
 
    myObj.menu();
    myObj.transaction();
    return 0;
}
