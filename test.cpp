//latest
#include <sstream> // 
#include <string>
#include <windows.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <stdlib.h> 
#include <ctime>
using namespace std;
std::string intToString(int value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
}

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
string cart;
class pos{
	public:
	float totalAmount = 0;
	
	int choice;
	int quantity;
	int totalcost;

	    int animation(){
	    	SetConsoleTextAttribute(h, 4);
	    	cout << endl;
	    	cout << endl;
	    	cout << endl;
	    	cout << endl;
	    	cout << endl;
	    	cout << endl;
	    	cout << endl;
	        cout << "                       	Loading ";
	        

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
    
         system("CLS"); 
		 SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);  
	    }
		
		
		int verification(){
		string name;
		int password;
		SetConsoleTextAttribute(h, 10);
		cout << endl;
	    cout << endl;
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
		
		system ("CLS");
		
		}else{
			
			cout << "			Wrong username or password!!" << endl;
			return 0;
		}
		
		cout << endl;
		cout << endl;
		
	}

	
    int menu(){
	//blue
    SetConsoleTextAttribute(h, 10);
    time_t now = time(0);
    char* date_time = ctime(&now);

    cout << "					  Current time: " << date_time << endl;
    cout << endl;
    cout << "                     ------[1]--------       ------[2]------       ------[3]------     ------[4]-------     \n";
    cout << "                     | Fried Chicken |       |  Burger     |       |    Drinks   |     | French Fries |     \n";
    cout << "                     -----------------       ---------------       ---------------     ----------------     \n";
    SetConsoleTextAttribute(h, 6);
    cout << "                     ------[5]-------       ------[6]------       ------[7]------      ------[8]------     \n";
    cout << "                     |    Snacks    |       |    Pizza    |       |    Tacos    |      |  Sandwiches |     \n";
    cout << "                     ----------------       ---------------       ---------------      ---------------      \n";
    
    SetConsoleTextAttribute(h, 4);
    cout << "                                   ------[9]-------      ----[10]----    ----[0]----      \n";
    cout << "                                   |  Reservation |      |  Receipt |    |   Exit  |         \n";
    cout << "                                   ----------------      -----------     -----------   \n";
    
    
    SetConsoleTextAttribute(h, 10);
    cout << "	Enter your choice: ";
	cin >> choice;
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);	
    return 0;		
	}
	

	int transaction(){
	    SetConsoleTextAttribute(h, 10);
		char transacloop;
		char chickCategory;
		char questdiscount;
		int discount;
	

		switch(choice){
		
		case 1:
		do{
		cout << endl;
		cout << "		Choice: Fried Chicken" << endl;
		cout << "		Category: " << endl;
		cout << endl;
	
		cout << "		[a]Original Recipe Chicken (KFC)			55pesos" << endl;
		cout << "		[b]Chicken McNuggets (McDonald's)			85pesos" << endl;
		cout << "		[c]Chickenjoy (Jollibee)			        75pesos" << endl;
		cout << "		[d]Spicy Chicken Sandwich (Chick-fil-A) 	92pesos" << endl;
		cout << endl;
		cout << "	Enter your choice: ";
		cin >> chickCategory;
		
		if(chickCategory == 'a'){
		
		cout << "		Choice: Original Recipe Chicken (KFC)			55pesos" << endl;
		
		cout << "\tEnter quantity: ";
		cin >> quantity;
		
		totalcost= quantity * 55;
		
		cout << "	Enter Discount (%): ";
		cin >> discount;
		
		totalcost -= (totalcost * discount / 100);
	
		
		cart += "Name: Original Recipe Chicken (KFC)\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
		cout << "		Total cost: " <<totalcost;	
		totalAmount += totalcost;
		
		}
		else if(chickCategory == 'b'){
		cout << "		Choice: Chicken McNuggets (McDonald's)			85pesos" << endl;
		
			cout << "\tEnter quantity: ";
		cin >> quantity;
		
		totalcost= quantity * 85;
		
		cout << "	Enter Discount (%): ";
		cin >> discount;
		
		totalcost -= (totalcost * discount / 100);
	
		
		cart += "Name: Chicken McNuggets (McDonald's) \nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
		cout << "		Total cost: " <<totalcost;	
		totalAmount += totalcost;
		
		}
		
		
		
		else if(chickCategory == 'c'){
		cout << "		[c]Chickenjoy (Jollibee)			        75pesos" << endl;
		
		cout << "\tEnter quantity: ";
		cin >> quantity;
		
		totalcost= quantity * 75;
		
		cout << "	Enter Discount (%): ";
		cin >> discount;
		
		totalcost -= (totalcost * discount / 100);
	
		
		cart += "Name: Chickenjoy (Jollibee)\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
		cout << "		Total cost: " <<totalcost;	
		totalAmount += totalcost;
		
	}
		
		
		else if (chickCategory == 'd') {
        cout << "[d]Spicy Chicken Sandwich (Chick-fil-A) 92 pesos" << endl;

        cout << "\tEnter quantity: ";
		cin >> quantity;
		
		totalcost= quantity * 92;
		
		cout << "	Enter Discount (%): ";
		cin >> discount;
		
		totalcost -= (totalcost * discount / 100);
	
		
		cart += "Name: Chickenjoy (Jollibee)\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
		cout << "		Total cost: " <<totalcost;	
		totalAmount += totalcost;
		
	
		
	}
	cout << endl;
	cout << "	Do you want to buy another Fried Chicken (y/n): ";
		cin >> transacloop;
		}while(transacloop == 'y' || transacloop == 'y');

    break;
		
	case 2:
	
   	do{
    cout << endl;
    cout << "		Choice: Burgers" << endl;
    cout << "		Category: " << endl;
    cout << endl;

    cout << "		[a]Classic Burger (McDonald's)		50 pesos" << endl;
    cout << "		[b]Whopper (Burger King)			80 pesos" << endl;
    cout << "		[c]Big Mac (McDonald's)			70 pesos" << endl;
    cout << "		[d]Quarter Pounder with Cheese (McDonald's)	60 pesos" << endl;
    cout << endl;
    cout << "	Enter your choice: ";
    cin >> chickCategory;

    if(chickCategory == 'a'){
        cout << "		Choice: Classic Burger (McDonald's)		50 pesos" << endl;

        cout << "\tEnter quantity: ";
        cin >> quantity;

        totalcost= quantity * 50;

        cout << "	Enter Discount (%): ";
        cin >> discount;

        totalcost -= (totalcost * discount / 100);


        cart += "Name: Classic Burger (McDonald's)\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
        cout << "		Total cost: " <<totalcost;
        totalAmount += totalcost;
    }
    else if(chickCategory == 'b'){
        cout << "		Choice: Whopper (Burger King)			80 pesos" << endl;

        cout << "\tEnter quantity: ";
        cin >> quantity;

        totalcost= quantity * 80;

        cout << "	Enter Discount (%): ";
        cin >> discount;

        totalcost -= (totalcost * discount / 100);


        cart += "Name: Whopper (Burger King)\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
        cout << "		Total cost: " <<totalcost;
        totalAmount += totalcost;
    }
    else if(chickCategory == 'c'){
        cout << "		Choice: Big Mac (McDonald's)			70 pesos" << endl;

        cout << "\tEnter quantity: ";
        cin >> quantity;

        totalcost= quantity * 70;

        cout << "	Enter Discount (%): ";
        cin >> discount;

        totalcost -= (totalcost * discount / 100);


        cart += "Name: Big Mac (McDonald's)\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
        cout << "		Total cost: " <<totalcost;
        totalAmount += totalcost;
    }
    else if (chickCategory == 'd') {
        cout << "		Choice: Quarter Pounder with Cheese (McDonald's)	60 pesos" << endl;

        cout << "\tEnter quantity: ";
        cin >> quantity;

        totalcost= quantity * 60;

        cout << "	Enter Discount (%): ";
        cin >> discount;

        totalcost -= (totalcost * discount / 100);


        cart += "Name: Quarter Pounder with Cheese (McDonald's)\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
        cout << "		Total cost: " <<totalcost;
        totalAmount += totalcost;
    }
	cout << endl;
	cout << "	Do you want to buy another burger? (y/n): ";
		cin >> transacloop;
		}while(transacloop == 'y' || transacloop == 'y');
    break;

			
		
		
		
		
		
		break;
		SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		
		case 3:
		break;
		
		case 4:
		break;
		
		case 5:
		break;
		
		case 6:
		break;
		
		case 7:
		break;
		
		case 8:
		break;
		
		case 9:
		break;
		
		case 10:
			cout << "=================" << endl;
    cout << "|    Receipt    |" << endl;
    cout << "=================" << endl;
    cout << cart;
    cout << "Total Amount: " << totalAmount << " pesos" << endl;
    cout << endl;
    cout << endl;
    		
    		cout << "=================" << endl;
    		cout << "|  paymentOption |" << endl;
    		cout << "=================" << endl;

    		cout << endl;
    		cout << "Choose payment option:" << endl;
    cout << "[1] Cash" << endl;
    cout << "[2] Credit Card" << endl;

    int paymentOption;
    cin >> paymentOption;

    switch (paymentOption) {
        case 1:
            cout << "Please provide cash: ";
            float cash;
            cin >> cash;

            if (cash >= totalAmount) {
                cout << "Change: " << cash - totalAmount << " pesos" << endl;
                cout << "Thank you for your purchase!" << endl;
            } else {
                cout << "Insufficient cash. Transaction canceled." << endl;
            }
            break;

        case 2:
            cout << "Processing credit card payment..." << endl;
            // Add credit card processing logic here
            cout << "Thank you for your purchase!" << endl;
            break;

        default:
            cout << "Invalid payment option." << endl;
            break;
            
          
    }
     
		
		break;
		
		
		
		
		}
		cout << endl;
		SetConsoleTextAttribute(h, 10);
		
		

	    //loop for transaction
	    
		
	   
	    return 0;	
	
	}
	
	
};


int main()
{
    char transacloop;
    pos myObj;
    myObj.verification();
 
    do {
    myObj.menu();
    myObj.transaction();
	
    cout << "	Do you want to set another transaction? (y/n): ";
    
    cin >> transacloop;
} while (transacloop == 'y' || transacloop == 'Y');
 


    
}
