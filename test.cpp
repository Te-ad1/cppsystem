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
		
		case 3: // Drinks
    do {
        cout << endl;
        cout << "		Choice: Drinks" << endl;
        cout << "		Category: " << endl;
        cout << endl;

        cout << "		[a] Coca-Cola                        25 pesos" << endl;
        cout << "		[b] Pepsi                            30 pesos" << endl;
        cout << "		[c] Sprite                           27 pesos" << endl;
        cout << "		[d] Fanta                            28 pesos" << endl;
        cout << endl;
        cout << "	Enter your choice: ";
        cin >> chickCategory;

        if(chickCategory == 'a'){
            cout << "		Choice: Coca-Cola                     25 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 25;

            cout << "	Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Coca-Cola\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "		Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if(chickCategory == 'b'){
            cout << "		Choice: Pepsi                         30 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 30;

            cout << "	Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Pepsi\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "		Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if(chickCategory == 'c'){
            cout << "		Choice: Sprite                        27 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 27;

            cout << "	Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Sprite\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "		Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if (chickCategory == 'd') {
            cout << "		Choice: Fanta                         28 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 28;

            cout << "	Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Fanta\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "		Total cost: " <<totalcost;
            totalAmount += totalcost;
        }

        cout << endl;
        cout << "	Do you want to buy another drink? (y/n): ";
        cin >> transacloop;
    	} while(transacloop == 'y' || transacloop == 'Y');
    	break;

		
		case 4: // French Fries
    	do {
        cout << endl;
        cout << "		Choice: French Fries" << endl;
        cout << "		Category: " << endl;
        cout << endl;

        cout << "		[a] Regular French Fries             20 pesos" << endl;
        cout << "		[b] Large French Fries               30 pesos" << endl;
        cout << "		[c] Curly French Fries               25 pesos" << endl;
        cout << "		[d] Waffle French Fries              35 pesos" << endl;
        cout << endl;
        cout << "	Enter your choice: ";
        cin >> chickCategory;

        if(chickCategory == 'a'){
            cout << "		Choice: Regular French Fries             20 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 20;

            cout << "	Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Regular French Fries\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "		Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if(chickCategory == 'b'){
            cout << "		Choice: Large French Fries               30 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 30;

            cout << "	Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Large French Fries\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "		Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if(chickCategory == 'c'){
            cout << "		Choice: Curly French Fries               25 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 25;

            cout << "	Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Curly French Fries\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "		Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if (chickCategory == 'd') {
            cout << "		Choice: Waffle French Fries              35 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 35;

            cout << "	Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Waffle French Fries\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "		Total cost: " <<totalcost;
            totalAmount += totalcost;
        }

        cout << endl;
        cout << "	Do you want to buy another French Fries? (y/n): ";
        cin >> transacloop;
    } while(transacloop == 'y' || transacloop == 'Y');
    break;

		
	case 5: // Snacks
    do {
        cout << endl;
        cout << "    Choice: Snacks" << endl;
        cout << "    Category: " << endl;
        cout << endl;

        cout << "    [a] Popcorn                    15 pesos" << endl;
        cout << "    [b] Nachos                     25 pesos" << endl;
        cout << "    [c] Pretzel                    20 pesos" << endl;
        cout << "    [d] Potato Chips               18 pesos" << endl;
        cout << endl;
        cout << "    Enter your choice: ";
        cin >> chickCategory;

        if(chickCategory == 'a'){
            cout << "    Choice: Popcorn                    15 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 15;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Popcorn\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if(chickCategory == 'b'){
            cout << "    Choice: Nachos                     25 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 25;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Nachos\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if(chickCategory == 'c'){
            cout << "    Choice: Pretzel                    20 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 20;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Pretzel\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if (chickCategory == 'd') {
            cout << "    Choice: Potato Chips               18 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 18;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Potato Chips\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }

        cout << endl;
        cout << "    Do you want to buy another Snack? (y/n): ";
        cin >> transacloop;
    } while(transacloop == 'y' || transacloop == 'Y');
    break;


		
		case 6: // Pizza
    do {
        cout << endl;
        cout << "    Choice: Pizza" << endl;
        cout << "    Category: " << endl;
        cout << endl;

        cout << "    [a] Margherita Pizza            100 pesos" << endl;
        cout << "    [b] Pepperoni Pizza             120 pesos" << endl;
        cout << "    [c] Hawaiian Pizza              130 pesos" << endl;
        cout << "    [d] Supreme Pizza               150 pesos" << endl;
        cout << endl;
        cout << "    Enter your choice: ";
        cin >> chickCategory;

        if(chickCategory == 'a'){
            cout << "    Choice: Margherita Pizza            100 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 100;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Margherita Pizza\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if(chickCategory == 'b'){
            cout << "    Choice: Pepperoni Pizza             120 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 120;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Pepperoni Pizza\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if(chickCategory == 'c'){
            cout << "    Choice: Hawaiian Pizza              130 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 130;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Hawaiian Pizza\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if (chickCategory == 'd') {
            cout << "    Choice: Supreme Pizza               150 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 150;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Supreme Pizza\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }

        cout << endl;
        cout << "    Do you want to buy another Pizza? (y/n): ";
        cin >> transacloop;
    } while(transacloop == 'y' || transacloop == 'Y');
    break;

		
		case 7: // Tacos
    do {
        cout << endl;
        cout << "    Choice: Tacos" << endl;
        cout << "    Category: " << endl;
        cout << endl;

        cout << "    [a] Beef Tacos                  50 pesos" << endl;
        cout << "    [b] Chicken Tacos               55 pesos" << endl;
        cout << "    [c] Fish Tacos                  60 pesos" << endl;
        cout << "    [d] Vegetarian Tacos            45 pesos" << endl;
        cout << endl;
        cout << "    Enter your choice: ";
        cin >> chickCategory;

        if(chickCategory == 'a'){
            cout << "    Choice: Beef Tacos                  50 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 50;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Beef Tacos\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if(chickCategory == 'b'){
            cout << "    Choice: Chicken Tacos               55 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 55;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Chicken Tacos\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if(chickCategory == 'c'){
            cout << "    Choice: Fish Tacos                  60 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 60;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Fish Tacos\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if (chickCategory == 'd') {
            cout << "    Choice: Vegetarian Tacos            45 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 45;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Vegetarian Tacos\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }

        cout << endl;
        cout << "    Do you want to buy another Tacos? (y/n): ";
        cin >> transacloop;
    } while(transacloop == 'y' || transacloop == 'Y');
    break;

		
		case 8: // Sandwiches
    do {
        cout << endl;
        cout << "    Choice: Sandwiches" << endl;
        cout << "    Category: " << endl;
        cout << endl;

        cout << "    [a] Ham and Cheese Sandwiches     40 pesos" << endl;
        cout << "    [b] Turkey Sandwiches             45 pesos" << endl;
        cout << "    [c] Tuna Sandwiches               50 pesos" << endl;
        cout << "    [d] Veggie Sandwiches             35 pesos" << endl;
        cout << endl;
        cout << "    Enter your choice: ";
        cin >> chickCategory;

        if(chickCategory == 'a'){
            cout << "    Choice: Ham and Cheese Sandwiches     40 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 40;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Ham and Cheese Sandwiches\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if(chickCategory == 'b'){
            cout << "    Choice: Turkey Sandwiches             45 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 45;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Turkey Sandwiches\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if(chickCategory == 'c'){
            cout << "    Choice: Tuna Sandwiches               50 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 50;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Tuna Sandwiches\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }
        else if (chickCategory == 'd') {
            cout << "    Choice: Veggie Sandwiches             35 pesos" << endl;

            cout << "\tEnter quantity: ";
            cin >> quantity;

            totalcost= quantity * 35;

            cout << "    Enter Discount (%): ";
            cin >> discount;

            totalcost -= (totalcost * discount / 100);


            cart += "Name: Veggie Sandwiches\nQuantity: " + intToString(quantity) + "\nPrice: " + intToString(totalcost) + " pesos\n______________________________\n";
            cout << "    Total cost: " <<totalcost;
            totalAmount += totalcost;
        }

        cout << endl;
        cout << "    Do you want to buy another Sandwich? (y/n): ";
        cin >> transacloop;
    } while(transacloop == 'y' || transacloop == 'Y');
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
