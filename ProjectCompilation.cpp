#include <iostream>
#include <string>

using namespace std;

//=========== Prelim Compilation =============
void act1();
void act2();
void act3();
void act4();
void prelimPractical1();
void prelimPractical2();
void prelimExam();

// Prelim Activity 4 Helper
const double getPi();                                                  			// returns pi
double computeCircle(const double &radius, double *circumference);     			// returns area, stores circumference
double computeEllipse(const double &A, const double &B, double *circumference); // returns area, stores circumference

// Prelim Practical 2 helpers
double sum(double num1, double num2, double &ref1, double &ref2);   			// returns sum of all four values
double average(double sum);                                         			// returns sum divided by 4
double product(double num1, double num2, double &ref1, double &ref2); 			// returns product of all four values


//============ Midterm Compilation ==============
void act5();
void act6();
void act7();
void midtermPractical1();
void midtermExam();

// Midterm Activity 5 helper
int check3DigitInt();															// Checks if user inputs 3 digits

// Midterm Activity 7 helper
void selectionSort(int arr[], int size);										// Selectionsort function for 1d array
void bubbleSort(int arr[], int size);											// Bubblesort function for 1d array
void insertionSort(int arr[], int size);										// Insertionsort function for 1d array

//============ Finals Compilation ==============
void act8();
void act9();


// Utility Function
void divider();


int main(){
	//Initialization of termChoice and itemChoice;
	
	int termChoice = 0, itemChoice = 0;
	
	cout << "Choose a number to select the term: " << endl
		 << "1. Prelim\n2. Midterm\n3. Finals\nInput your number: ";
	cin >> termChoice;
	
	divider();
	
	
	//Selection for term activities, quizzes,and exams
	switch(termChoice){
		case 1: // Prelim items
		
			cout << "\n\nSelect an item from Prelim: " << endl
				 << "1. Activity 1" << endl
				 << "2. Activity 2" << endl
				 << "3. Activity 3" << endl
				 << "4. Activity 4" << endl
				 << "5. Prelim Term Laboratory Test 1" << endl
				 << "6. Prelim Term Laboratory Test 2" << endl
				 << "7. Prelim Examination" << endl
				 << "Input number to select an item: ";
			cin >> itemChoice;
			
			break;
		
		case 2: // Midterm items
			
			cout << "\n\nSelect an item from Midterm: " << endl
				 << "8. Activity 5" << endl
				 << "9. Activity 6" << endl
				 << "10. Activity 7" << endl
				 << "11. Midterm Laboratory Test 1" << endl
				 << "12. Midterm Examination" << endl
				 << "Input number to select an item: ";
			cin >> itemChoice;
			
			break;
			
		case 3: // Final items
			
			cout << "\n\nSelect an item from Finals: " << endl
				 << "13. Activity 8" << endl
				 << "14. Activity 9" << endl
				 << "15. Final Examination" << endl
				 << "Input number to select an item: ";
			cin >> itemChoice;
			
			break;
			
		default:
			cout << "Invalid Input!";
			break;
	}
	
	divider();
	
	switch (itemChoice){
		case 1:
			act1();
			break;
		case 2:
			act2();
			break;
		case 3:
			act3();
			break;
		case 4:
			act4();
			break;
		case 5:
			prelimPractical1();
			break;
		case 6:
			prelimPractical2();
			break;
		case 7:
			prelimExam();
			break;
		case 8:
			act5();
			break;
		case 9:
			act6();
			break;
		case 10:
			act7();
			break;
		case 11:
			midtermPractical1();
			break;
		case 12:
			midtermExam();
			break;
		case 13:
			act8();
			break;
		case 14:
			act9();
			break;
	}
	// End of program
	return 0;
}

//============= Prelim =======================
void act1(){
	
	int integer1,integer2;
	
	cout << "Enter the first integer: ";
	cin >> integer1;
	
	cout << "Enter the second integer: ";
	cin >> integer2;
	
	cout <<"The sum of the two integer is " << integer1 + integer2 << endl
		 
		 <<"The difference of the two integer is " << integer1 - integer2 << endl
	
		 <<"The product of the two integer is " << integer1 * integer2 << endl
	
		 <<"The quotient of the two integer is " << integer1 / integer2 << endl;
}

void act2(){
	
	//declaration of rows of the multiplication table
	string multiplicationtable;
	
	//Assigning of values of the table
	multiplicationtable = "\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n"
						  "\t2\t4\t6\t8\t10\t12\t14\t16\t18\t20\n"
						  "\t3\t6\t9\t12\t15\t18\t21\t24\t27\t30\n"
						  "\t4\t8\t12\t16\t20\t24\t28\t32\t36\t40\n"
		      			  "\t5\t10\t15\t20\t25\t30\t35\t40\t45\t50\n"
					 	  "\t6\t12\t18\t24\t30\t36\t42\t48\t54\t60\n"
						  "\t7\t14\t21\t28\t35\t42\t49\t56\t63\t70\n"
						  "\t8\t16\t24\t32\t40\t48\t56\t64\t72\t80\n"
					 	  "\t9\t18\t27\t36\t45\t54\t63\t72\t81\t90\n"
						  "\t10\t20\t30\t40\t50\t60\t70\t80\t90\t100";
	
	//Output of the multiplication table
	cout << multiplicationtable << endl << endl;
	
}

void act3(){
	
	//declaration of the money,etc
	double money; 
	int thousand, hundred5, hundred2, hundred, fifty, twenty ,ten ,five ,one , cent;
	
	//Message , and getting input
	cout << "Enter amount of money in Philippine Peso: ";
	cin >> money;
	
	//condition for 1k
	if (money >= 1000){
		
		thousand = money / 1000;
		
		cout << "Php 1k: " << thousand << endl;
		
		money -= thousand * 1000;
		
	} else {
		
		cout << "Php 1k: " << 0 << endl;
		
	} 
	//condition for 500
	if (money >= 500){
		
		hundred5 = money /500;
		
		cout << "Php 500: " << hundred5 << endl;
		
		money -= hundred5 * 500;
		
	} else {
		
		cout << "Php 500: " << 0 << endl;
		
	}
	//condition for 200
	if (money >= 200){
		
		hundred2 = money /200;
		
		cout << "Php 200: " << hundred2 << endl;
		
		money -= hundred2 * 200;
		
	} else {
		
		cout << "Php 200: " << 0 << endl;
		
	} 
	//condition for 100
	if (money >= 100){
		
		hundred = money /100;
		
		cout << "Php 100: " << hundred << endl;
		
		money -= hundred * 100;
		
	} else {
		
		cout << "Php 100: " << 0 << endl;
		
	}
	//condition for 50
	if (money >= 50){
		
		fifty = money /50;
		
		cout << "Php 50: " << fifty << endl;
		
		money -= fifty * 50;
		
	} else {
		
		cout << "Php 50: " << 0 << endl;
		
	} 
	//condition for 20
	if (money >= 20){
		
		twenty = money /20;
		
		cout << "Php 20: " << twenty << endl;
		
		money -= twenty * 20;
		
	} else {
		
		cout << "Php 20: " << 0 << endl;
		
	} 
	//condition for 10
	if (money >= 10){
		
		ten = money /10;
		
		cout << "Php 10: " << ten << endl;
		
		money -= ten * 10;
		
	} else {
		
		cout << "Php 10: " << 0 << endl;
		
	} 
	//condition for 5
	if (money >= 5){
		
		five = money /5;
		
		cout << "Php 5: " << five << endl;
		
		money -= five * 5;
		
	} else {
		
		cout << "Php 5: " << 0 << endl;
		
	} 
	//condition for 1
	if (money >= 1){
		
		one = money /1;
		
		cout << "Php 1: " << one << endl;
		
		money -= one * 1;
		
	} else {
		
		cout << "Php 1: " << 0 << endl;
		
	} 
	//condition for 25 cents
	if (money >= 0.25){
	
		cent = money /0.25;
		
		cout << "Php 0.25: " << cent << endl;
		
		money -= cent * 0.25 ;
		
	} else {
		
		cout << "Php 0.25: " << 0 << endl;
		
	} 
	cout << endl;
}


void act4(){
	// Declare radius and assigns to its pointer
    double radius;
    double *ptrRadius = &radius;

    cout << "Enter radius: ";
    cin >> *ptrRadius;
	
	// Initialization of minor and major axis
	double A = *ptrRadius;
	double B = 2 * A;
	
	// Computation of circle and ellipse
    double circleCircumference = 0.0;
    double circleArea = computeCircle(*ptrRadius, &circleCircumference);

    double ellipseCircumference = 0.0;
    double ellipseArea = computeEllipse(A, B, &ellipseCircumference);
	
	
    // Display output: Circle
    cout << "\nOutput of the Computation: Circle" << endl
    	 << "Radius (units)\t\t : " << radius << endl
    	 << "Area (squared units)\t : " << circleArea << endl
    	 << "Circumference (units)\t : " << circleCircumference << endl;

    // Display output: Ellipse
    cout << "\nOutput of the Computation: Ellipse " << endl
    	 << "A (Minor Axis)\t\t : " << A << endl
    	 << "B (Major Axis)\t\t : " << B << endl
    	 << "Area (squared units)\t : " << ellipseArea << endl
    	 << "Circumference (units)\t : " << ellipseCircumference << endl;

    cout << endl;
}

void prelimPractical1(){
	// Menu for choosing a set
	int choice;
	cout << "Choose your Set:\n\n1. Find Days in a Month\n2. Cubed Square\n3. Time Converter\n\nSelect number to choose set: ";
	cin >> choice;
	
	cout << endl;
	
	switch(choice) {
		case 1:
			// LEAP YEARS
			
			int year, month;
			
			cout << "Find how many days in a month" << endl;
			cout << "Enter a year: ";
			cin >> year;
			
			cout << "Enter a month(1-12): ";
			cin >> month;
			
			// GET DAY IN A MONTH
			switch(month) {
				case 1: 
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					cout << "Number of Days: 31";
					break;
					
				case 4:
				case 6:
				case 9:
				case 11:
					cout << "Number of Days: 30";
					break;
					
				case 2:
					// CHECK FOR LEAP YEAR
					if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
						cout << "Number of Days: 29";
					} else {
						cout << "Number of Days: 28";
					}
					break;
					
				default:
					cout << "Not a valid month.";
					break;
			}
			
			// FIND NEXT LEAP YEAR
			do {
				year += 1;
			} while (!((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)));
			
			cout << "\nNext leap year: " << year;
			break;
			
		case 2:
			// CUBED SQUARE
			
			int size, numbers;
			
			cout << "CUBED SQUARE" << endl;
			cout << "Enter the size of the square: ";
			cin >> size;
			
			// GET THE CUBE OF THE NUMBER 
			numbers = size * size * size;
			
			// PRINT THE CCUBED SQUARE
			for(int row = 0; row < size; row++) {
				for(int column = 0; column < size; column++) {
					cout << numbers << "\t";
					numbers -= size;
				}
				cout << "\n\n";
			}
			break;
			
		case 3:
			//	TIME CONVERTER
			
			int seconds, day, hours, minutes;
            int execute = 1;
             
			 //input statement
        	cout << "\nTIME CONVERTER" << endl;   
        	cout << "\nEnter your time in seconds: ";
            cin >> seconds;
                
            do {
            // RESETS VALUES AFTER FIRST
                day = 0;
                hours = 0;
                minutes = 0;

                if (seconds >= 86400) {
                	day = seconds / 86400;
                    seconds %= 86400;
                }
                if (seconds >= 3600) {
                    hours = seconds / 3600;
                    seconds %= 3600;
                }
                if (seconds >= 60) {
                    minutes = seconds / 60;
                    seconds %= 60;
                }

                if (execute == 1) {
                    cout << "\nConverted seconds : " << endl;
                    cout << day << ":" << hours << ":" << minutes << ":" << seconds << endl;
                } else {
                    cout << "\nTotal seconds : " << endl;
                    cout << day << ":" << hours << ":" << minutes << ":" << seconds << endl;
                }
                
                // GET TOTAL SECONDS
                seconds = 86400 * day + 3600 * hours + 60 * minutes + seconds + 60120;
                execute++;	
                
            } while (execute <= 2);
            
			if (day < 1) {
                cout << "\nTime not Exceeded" << endl;
            } else {
                cout << "\nTime exceeded!!" << endl;
			}
        	
			break;
	}
	
}
void prelimPractical2(){
	    
	int choice, again;

    do{
        cout << "\nChoose a set:" << endl
             << "1. Pointer" << endl
             << "2. Reference " << endl
             << "Enter choice: ";
        cin >> choice;

        while (choice < 1 || choice > 2){
            cout << "Invalid choice. Enter 1 or 2: ";
            cin >> choice;
        }

        switch (choice){
            case 1:{
                int number1, number2;

                cout << "Enter the first number: ";
                cin >> number1;

                cout << "\nEnter the second number: ";
                cin >> number2;

                int *ptr1 = &number1, *ptr2 = &number2;

                *ptr1 = 33;
                *ptr2 = number2 + 40;

                cout << "\n\nFirst Number Address: " << &number1 << endl
                     << "Second Number Address: " << &number2 << endl
                     << "First Pointer Address: " << &ptr1 << endl
                     << "Second Pointer Address: " << &ptr2 << endl;

                cout << "\nFirst Number Value: " << number1 << endl
                     << "Second Number Value: " << number2 << endl
                     << "First Pointer Value: " << ptr1 << endl
                     << "Second Pointer Value: " << ptr2 << endl;

                break;
            }

            case 2:{
                double num1, num2;
                double sumResult, averageResult, productResult;

                double &ref1 = num1;
                double &ref2 = num2;

                cout << "\nSET B: REFERENCE\n";

                cout << "Enter first number: ";
                cin >> ref1;

                cout << "Enter second number: ";
                cin >> ref2;

                sumResult = sum(num1, num2, ref1, ref2);
                averageResult = average(sumResult);
                productResult = product(num1, num2, ref1, ref2);

                cout << "\nValues:\n";
                cout << "First number  : " << num1 << endl;
                cout << "Second number : " << num2 << endl;
                cout << "First reference  : " << ref1 << endl;
                cout << "Second reference : " << ref2 << endl;

                cout << "\nResults:\n";
                cout << "Sum     : " << sumResult << endl;
                cout << "Average : " << averageResult << endl;
                cout << "Product : " << productResult << endl;

                break;
            }
        }

        cout << "\nDo you want to try again?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        cout << "Enter choice: ";
        cin >> again;

        while (again < 1 || again > 2)
        {
            cout << "Invalid choice. Enter 1 or 2: ";
            cin >> again;
        }

    } while (again == 1);
	
}

void prelimExam(){
		
	int option;
	
	cout << "Select a Set to operate: " << endl
		 << "1. Set A: Squares" << endl
		 << "2. Set B: Directions" << endl
		 << "3. Set C: Binary to Decimal" << endl
		 << "4. Set D: Rectangle" << endl
		 << "Enter the number of the set: ";
		 
	cin >> option;
	
	switch (option){
		//For Squares
		case 1:                                                                                                                                                                             {
			
			int rowSize;
            cout<<"\nEnter the number of rows: ";
            cin>>rowSize;

            int region = rowSize /  2;

            //Loop for the rows
            for (int row = 1; row <= rowSize; row++) {
                //Loop for the columns
                for (int column = 1; column <= rowSize; column++) {
                    
                    bool north = row <= region;                     
                    bool west = column <= region;

                    if (north && west ) { //North Western Region
                        cout << "* "; 
                    } else if (north && !west ) {  //North Eastern Region
                        cout << "@ ";
                    } else if (!north && west ) { //South Western Region
                        cout << "@ "; 
                    } else { //South Eastern Region
                        cout << "  "; 
                    }
                }	
                cout << endl;
            }
            break;                                                                                                                                                                          }
        //For Direction where South is blank
		case 2:                                                                                                                                                                             {
			//Declaration of rows
			int rows;

			// Getting the users input
            cout << "\nEnter number of rows: ";
            cin >> rows;

            if (rows % 2 != 0) {
                cout << "Please use even number of rows only!" << endl;
            
			
			}else {
				
				//Pattern maker for the 4 coordinates where south is just blank
                for (int vertical = 0; vertical < rows; vertical++) {
                    for (int horizontal = 0; horizontal < rows; horizontal++) {
                    	
                        // check if the coordinates is in south region and print space
                        if (vertical >= horizontal && vertical >= rows - 1 - horizontal) {
                            cout << "  ";
                        
						// print @ symbol when its not south    
                        } else {
                            cout << "@ ";
                        }
                    }

                    cout << endl;
                }
            }

			break;                                                                                                                                                                          }
		// For Binary to Decimal
		case 3:                                                                                                                                                                             {
			int binary, decimal;

			//Getting the binary number
            cout << "\nInput a binary number: ";
            cin >> binary;
		
			cout << "\nProcess: " << endl;
            decimal = 0;
			// Loop for 8 bits binary to decimal
            for (int binaryIndex = 1; binaryIndex <= 8; binaryIndex ++){

                int placeValue = 1;
                int power2 = 1;

                // For loop is used for multiplying by 10 repeatedly to obtain the place value (ones, tens, hundreds)
                for (int loop = 1; loop < binaryIndex; loop ++){
                    placeValue *= 10;
                }

                // Multiply it by 2 repeaedly to obtain the decimal value (1, 2, 4, 8, 16...)
                for (int loop2 = 1; loop2 < binaryIndex; loop2 ++){
                    power2 *= 2;
                }

                // Get the zero/one from the place value (bit)
                int bit = (binary / placeValue) % 10;

                // Get the 8 4 2 1 equivalent of bit
                int decimalPlace = bit * power2;
                decimal += decimalPlace;

                cout << "binary digit: " << bit << " | "
                     << bit << " x 2^" << binaryIndex << " = " << decimalPlace << " "
                     << endl;

            }
			
            cout << "\nDecimal value: " << decimal << endl;	
			break;                                                                                                                                                                          }
		
		//Rectangular pattern
		case 4:                                                                                                                                                                             {
			// Declaration of variables
			int length, width, additionalFactor, displayedNumber;

            displayedNumber = 1;
            additionalFactor = 1;

            cout << "\nInput length: ";
            cin >> length;

            cout << "Input width: ";
            cin >> width;

			cout << endl;
			
            if (length < width) {
                cout << "invalid length width ratio!" << endl;
                
            } else {
                for (int column = 0; column < width; column++){
                    for (int row = 0; row < length; row ++){

                        cout << displayedNumber << "\t";

                        displayedNumber += additionalFactor;
                        additionalFactor += 1;
                    }
                    cout << endl;
                }
            }
			break;                                                                                                                                                                          }
	
	}
}
//================================================



//======== Prelim Activity 4 helper ================

// Const function for pi
const double getPi() {
    return 3.1415;
}

// Function that returns the area and calculates the circumference of circle via pointer
double computeCircle(const double &radius, double *circumference) {
    *circumference = 2.0 * getPi() * radius;
    
    return getPi() * radius * radius;
}

// Function that returns the area and calculates the circumference of ellipse via pointer
double computeEllipse(const double &A, const double &B, double *circumference) {
	double eccentric = (A - B) / (A + B);
	*circumference = getPi() * (A+B) * (1+ (eccentric * eccentric) /4);
	
    return getPi() * A * B; 
}
//==================================================



//======== Prelim Practical Test 2 helper ================

double sum(double num1, double num2, double &ref1, double &ref2){ // Summing function
    return num1 + num2 + ref1 + ref2;
}

double average(double sum){ // Averaging function
    return sum / 4;
}

double product(double num1, double num2, double &ref1, double &ref2){ // Getting Product function
    return num1 * num2 * ref1 * ref2;
}
//========================================================


//===================== Midterm ==========================
void act5(){
	
	//declaration of row and col
	int row,col;
	int rows = row, cols = col;
	int mdarray[rows][cols];
	
	//getting input for row and column
	cout << "Input number of row: ";
	cin >> row;
	
	cout << "Input number of column: ";
	cin >> col;
	
	
	cout << endl << "============: Enter three digit integer :============" << endl << endl;
	for (int rowI = 0; rowI < row; rowI++){
		for (int colI = 0; colI < col; colI++){
			cout << "Row " << rowI << ":: Column " << colI << " : ";
			
			int integerNum = check3DigitInt();
			mdarray[rowI][colI] = integerNum;
		}
	}
	//Start checking on (0,0)
	int largeNum = mdarray[0][0];
	
	cout << endl<< "==========:   Table   :==========" << endl;
	cout << "=================================" << endl;
	
	for (int rowI = 0; rowI < row; rowI++){
		for (int colI = 0; colI < col; colI++){
			
			cout << " | " << mdarray[rowI][colI] << "\t";
			
			int currInt = mdarray[rowI][colI];

            if(largeNum < currInt){
                largeNum = currInt;
			}
		}
		cout << "| " << endl;
	}
	cout << "=================================" << endl;
	// print the max number
    cout << endl << "Largest number: " << largeNum << endl;
}

void act6(){
	// Declare the table and its size
    int maxRows = 4;
    int maxCols = 4;
    
    int number;
    
    // Tables content (Descending)
    int table[4][4] = {
        {400, 398, 387, 378},
        {360, 351, 347, 341},
        {330, 323, 317, 310},
        {300, 295, 285, 275},
    };
    
    // Print the table's contents
    cout << " - - - - - - - TABLE - - - - - - -" << endl;
    for (int rowI = 0; rowI < maxRows; rowI++) {
        for (int colI = 0; colI < maxCols; colI++) {
            cout << " | " << table[rowI][colI] << "\t";
        }
        cout << "| " << endl;
    }
    
    // Ask for user input (target number)
    cout << endl << "Enter the target number: ";
    cin >> number;

    // Declare mid row and mid col
    int midRow, midCol;
    
    // Declare the middle index of array
    if ((maxCols % 2 == 0) && (maxRows % 2 == 0)){
        midRow = (maxRows / 2) - 1;
        midCol = (maxCols / 2) - 1;
    } else {
        midRow = maxRows / 2;
        midCol = maxCols / 2;
    }
    
    if (table[midRow][midCol] == number){
        cout << "Number: " << number << " is found at: Row: " << midRow + 1 << " Column: " << midCol + 1 << endl;
    
    // if middle < number, search elements before middle
    } else if (table[midRow][midCol] < number) {
        bool found = false;
        for (int row = 0; row <= midRow; row++) {
            int max_c = maxCols - 1;
            
            if (row == midRow) {
                max_c = midCol;
            }

            for (int col = 0; col <= max_c; col++) {
                if (table[row][col] == number) {
                    cout << "Number: " << number << " is found at Row: " << row + 1 << " Col: " << col + 1 << endl;
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        if (!found) {
            cout << "Element not found" << endl;
        }
    
    //if middle > number, target is smaller search elements after middle
    } else {
        bool found = false;
        for (int row = midRow; row < maxRows; row++) {
            int start_c = 0;
            if (row == midRow) {
                start_c = midCol + 1;
            }

            for (int col = start_c; col < maxCols; col++) {
                if (table[row][col] == number) {
                    cout << "Number: " << number << " is found at Row: " << row + 1 << " Col: " << col + 1 << endl;
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        if (!found) {
            cout << "Element not found" << endl;
        }
    }
}

void act7(){
	int size;
	
	// input the size of array
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    
    cout << endl;
    // input values of the array
    for (int index = 0; index < size; index ++){
        cout << "Enter element at index " << index << ": ";
        cin >> arr[index];
    }
    
    int option;

    // take user input
    cout << "\nPick a sorting algorithm: " << endl
         << "1. Selection sort" << endl
         << "2. Bubble sort" << endl
         << "3. Insertion sort" << endl
         << "Select number: ";
    cin >> option;
    
    
     // print the unsorted array
    cout <<"\nUnsorted Array:\n" << endl;
    for (int index = 0; index < size; index ++){
    	
        cout << arr[index];
        
        if (index < size - 1 ){
        	cout << ", ";
		}
            

    }
    cout << endl;
    
    // apply the sorting algorithm from selected user's option
    switch (option){
    	 case 1:
            selectionSort(arr, size);
            break;
        case 2:
            bubbleSort(arr, size);
            break;
       
        case 3:
            insertionSort(arr, size);
            break;

        default:
            cout << "invalid input";
    }
    
    // print the sorted array
    cout << "\nSorted Array:\n" << endl;
    for (int index = 0; index < size; index ++){
        cout << arr[index];
        
        if (index < size - 1){
		
            cout << ", ";
		}
    }
    cout << endl;
}

void midtermPractical1(){
	
	int choice;
	
	cout << "SELECT WHICH SET: " << endl << endl;
    cout << "1. Set A:" << endl;
    cout << "2. Set B:" << endl;
    
    cout << "\nEnter the number of set: ";
    cin >> choice;
    
    switch(choice){
    	//FOR SET A
    	case 1:{
			int rows;

            // Input number of rows
            cout << "\nEnter number of rows: ";
            cin >> rows;

            int numbers[rows][rows];

            // Input elements
            cout << "\nEnter " << rows * rows << " integers from 1-26:\n";

            for (int row = 0; row < rows; row++) {
                for (int column = 0; column < rows; column++) {
                    cout << "Enter integer for index [" << row << "][" << column << "]: ";
                    cin >> numbers[row][column];
                    
                    while (numbers[row][column] < 1 || numbers[row][column] > 26) {
                        cout << "Invalid! Enter 1-26 only: ";
                        cin >> numbers[row][column];
                    }
                }
            }

            // Print Original Array
            cout << "\nOriginal Array:\n";

            for (int row = 0; row < rows; row++) {
                for (int column = 0; column < rows; column++) {
                    cout << numbers[row][column] << "\t";
                }

                cout << endl;
            }

            // Print Resultant Array
            cout << "\nResultant Array:\n";

            for (int row = 0; row < rows; row++) {
                for (int column = 0; column < rows; column++) {
                    char letter = 'a' + numbers[row][column] - 1;
                    cout << letter << "\t";
                }

                cout << endl;
            }

            // Input letter to search
            char searchletter;

            cout << "\nEnter letter to search: ";
            cin >> searchletter;

            // Convert uppercase input to lowercase
            if (searchletter >= 'A' && searchletter <= 'Z') {
                searchletter = searchletter + 32;
            }

            bool found = false;

            // Search for the letter and print its index location
            for (int row = 0; row < rows; row++) {
                for (int column = 0; column < rows; column++) {
                    char letter = 'a' + numbers[row][column] - 1;

                    if (letter == searchletter) {
                        cout << "\nLetter '" << searchletter << "' found in index: [" << row << "][" << column << "]" << endl;
                        found = true;
                    }
                }
            }

            // If not found
            if (!found) {
                cout << "Letter not found." << endl;
            }

            break;
        }

		
		case 2:{
			int rows, columns;

            // Input number of rows
            cout << "\nEnter number of rows: ";
            cin >> rows;

            // Validate that rows is even
            while (rows <= 0 || rows % 2 != 0){

                cout << "Invalid! Enter an even number of rows: ";
                cin >> rows;
            }

            // Input number of columns
            cout << "Enter number of columns: ";
            cin >> columns;

            // Validate number of columns
            while (columns <= 0){

                cout << "Invalid! Enter a positive number of columns: ";
                cin >> columns;
            }

            int array[rows][columns];
            int halfrows = rows / 2;

            // Input numbers for the upper half
            cout << "\nEnter integers from 1-26:\n";

            for (int row = 0; row < halfrows; row++){
                for (int column = 0; column < columns; column++){

                    cout << "Enter integer for index [" << row << "][" << column << "]: ";

                    cin >> array[row][column];

                    while (array[row][column] < 1 || array[row][column] > 26){
                        cout << "Invalid! Enter 1-26 only: ";
                        cin >> array[row][column];
                    }
                }
            }

            // Mirror the upper half to the lower half
            for (int row = 0; row < halfrows; row++){
                for (int column = 0; column < columns; column++){
                    array[rows - 1 - row][column] = array[row][column];
                }
            }

            // Display array
            cout << "\nARRAY" << endl;

            // Display upper half as numbers
            for (int row = 0; row < halfrows; row++) {
                for (int column = 0; column < columns; column++) {
                    cout << array[row][column] << "\t";
                }
                cout << endl;
            }

            // Display lower half as lowercase letters
            for (int row = halfrows; row < rows; row++){
                for (int column = 0; column < columns; column++){
                    char letter = 'a' + array[row][column] - 1;
                    cout << letter << "\t";
                }
                cout << endl;
            }

            // Search for the smallest number
            int smallest = array[0][0];
            int smallestrow = 0;
            int smallestcolumn = 0;

            for (int row = 0; row < halfrows; row++){
                for (int column = 0; column < columns; column++){
                    if (array[row][column] < smallest) {
                        smallest = array[row][column];
                        smallestrow = row;
                        smallestcolumn = column;
                    }
                }
            }

            // Find the mirrored position
            int mirrorrow = rows - 1 - smallestrow;
            int mirrorcolumn = smallestcolumn;

            // Convert mirrored number to lowercase letter
            char mirrorletter = 'a' + array[mirrorrow][mirrorcolumn] - 1;

            // Display search result
            cout << "\nRESULT" << endl;

            cout << "Smallest Number is: "<< smallest << endl;
            cout << "Index: (" << smallestrow << "," << smallestcolumn << ")" << endl;
            cout << "Equivalent letter: " <<  mirrorletter << endl;
            break;
        }
	
	    default:{
	        cout << endl;
	        cout << "Invalid choice!" << endl;
	        break;
	    }
	}
}

void midtermExam(){
	
	int option;
	
	cout << "Select a Set to operate: " << endl
		 << "1. Set A: Row Squares Ascending" << endl
		 << "2. Set B: Rectantangle Descending" << endl << endl
		 << "Choose the number to select set: ";
		 
	cin >> option;
	
	switch (option){
		case 1:{
			//Declaration of the rows
			int rowS;
			cout << "Enter the number of rows: ";
			cin >> rowS;
			
			cout << endl;
			int table[rowS][rowS];
			//Getting the inputs
			for (int row = 0; row < rowS; row++){
				for (int col = 0; col < rowS; col++ ){
					cout << "Enter elements at [" << row+1 << "][" << col +1 << "]: ";
					cin >> table[row][col];
				}
			}
			//bubblesort
			bool swapped = true;
			while (swapped){
				swapped = false;
				for (int row = 0; row < rowS; row++){
					for (int col = 0; col < rowS; col++ ){
						int nextRow = row;
						int nextCol = col + 1;
						if (nextCol == rowS){
							nextRow = row + 1;
							nextCol = 0;
						}
						
						if(nextRow < rowS){
							if (table[row][col] > table[nextRow][nextCol]){
								int temp = table[row][col];
								table[row][col] = table[nextRow][nextCol];
								table[nextRow][nextCol] = temp;
								swapped = true;
							}
						}
					}
				}
			}
			//Output
			cout << "\nResultant Array: " << endl << endl;
			for (int row = 0; row < rowS; row++){
				for (int col = 0; col < rowS; col++ ){
					cout << " " << table[row][col] << " ";
				}
				cout << endl << endl;
			}
			
			break;
		}
			
		case 2:{
			//Declaration of length, width and size
			int length, width, size;
			
			//Getting the size of the array
			cout << "\nEnter the length of the rectangle: ";
			cin >> length;
			cout << "Enter the width of the rectangle: ";
			cin >> width;

			int mdarray[length][width]; // array initialization

			size = length * width; // size of the rectangular pattern

			// getting user input
			cout << "\nEnter " << size << " 3-digit integers:\n";
			for(int row = 0; row < length; row++){
				for(int column = 0; column < width; column++){
					cout << "Enter elements at [" << row+1 << "][" << column +1 << "]: ";
					cin >> mdarray[row][column];
				}
			}

			// sorting the array using Bubble Sort
			for(int row = 0; row < size - 1; row++){
				for(int column = 0; column < size - 1 - row; column++){

					int row1 = column / width;
					int column1 = column % width;

					int row2 = (column + 1) / width;
					int column2 = (column + 1) % width;

					if(mdarray[row1][column1] < mdarray[row2][column2]){
						int temp = mdarray[row1][column1];
						mdarray[row1][column1] = mdarray[row2][column2];
						mdarray[row2][column2] = temp;
					}
				}
			}

			//Resultant Array
			cout << "\nResultant Array:\n\n";
			for(int row = 0; row < length; row++){
				for(int column = 0; column < width; column++){
					cout << mdarray[row][column] << "\t";
				}
				cout << endl;
			}
			break;
		}
		default:
			cout << "Please choose only between 1-2";
			break;
			
	}
	
	
}
//========================================================

//======== Midterm Activity 5 helper ======================

// runs a loop that only stop when a 3 digit number is entered by the user
int check3DigitInt(){
    int input;
    bool condition = true; 

    while(condition){
        cin >> input;

        bool is2Digit =  (input > 0 && input > 99) || (input < 0 && input < -99) ;
        bool isLess4Digit = (input > 0 && input < 1000) || (input < 0 && input > -1000); 

        if (is2Digit && isLess4Digit){
            condition = false;
            return input;
        } else {
            cout << "3-Digit Only: "; 
        }
    }

    return 0;
}
//=========================================================

//======== Midterm Activity 7 helper ======================

// Function for selection sort
void selectionSort(int arr[], int size){
    int minIndex;

    // iterate from start to end of array
    for (int row = 0; row < size; row ++){
        // find the minimum number
        // (assume the initial value)
        int min = arr[row];
        int minCounter = 0;

        // iterate from next index, upto end of array
        for (int nxtRow = row+1; nxtRow < size; nxtRow ++){
            int element = arr[nxtRow];

            // change the minIndex if a smaller number is found
            if(min > element){
                min = arr[nxtRow];
                minIndex = nxtRow;
                minCounter ++;
            }
        }

        // check if the smaller number is found
        if (minCounter != 0){
            // swap the current element to smallest element
            int temp = arr[row];
            arr[row] = arr[minIndex];
            arr[minIndex] = temp;
        }

    }
}

//Function for bubble sort
void bubbleSort(int arr[], int size){
    
    // iterate by using a moving starting index
    for (int startingIndex = 0; startingIndex < size-1; startingIndex ++){
        // start the index from zero, then ignore the last element (as it is assumed
        // to be already the greatest one)
        for (int currentIndex = 0; currentIndex < (size - 1 - startingIndex); currentIndex++){
            int currentElem = arr[currentIndex];
            int nextElement = arr[currentIndex + 1];

            // check if next element is smaller than current element
            if(currentElem > nextElement){
                // swap the current element to next element
                int temp = arr[currentIndex];
                arr[currentIndex] = arr[currentIndex+1];
                arr[currentIndex+1] = temp;
            }
        }
    }
}

//Function for insertion sort
void insertionSort(int arr[], int size){

    // iterate from start to finish of array
    for (int row = 1; row < size; row ++){

        int currentElement = arr[row];
        int targetIndex = row;

        // iterate from start of array upto the current target
        for(int nRow = 0; nRow < row; nRow++){

            // change the target index if a smaller element to 
            // the left was found
            if(currentElement < arr[nRow]){
                targetIndex = nRow;
                break;
            }
        }

        // shift the elements to the right
        for(int shift = row; shift > targetIndex; shift--){
            arr[shift] = arr[shift-1];
        }

        // place the target element to it's appropriate position
        arr[targetIndex] = currentElement;
    }
}

//=========================================================



//===================== Finals ============================
void act8(){
	const int ROW = 4, COL = 5, CAP = ROW * COL;   // 4x5 array, 20 slots

    // Initialized array (15 elements)
    int arr[ROW][COL] = {
        {123, 876, 765, 543, 432},
        {213, 836, 965, 643, 532},
        {113, 376, 265, 143, 232}
    };
    int cpy[ROW][COL];   	  // target array for duplication
    int size = 15;            // number of filled elements
    int op, pos, num;
    int rowPos, colPos;       // row and column entered by the user

    do {
        // Print current array; blanks use "-"
        cout << "\nCurrent Array:\n\n";
        for (int row = 0; row < ROW; row++) {
            for (int col = 0; col < COL; col++) {
                int ind = row * COL + col;           // 1D index of this slot
                if (ind < size) {
                    cout << arr[row][col] << "\t";
                } else {
                    cout << "-\t";
                }
            }
            cout << endl;
        }

        cout << "\n:-----MENU-----:\n";
        cout << "1. Insertion\n2. Deletion\n3. Duplication\n4. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> op;

        switch (op) {
            case 1:   // INSERT
                if (size == CAP) {
                    cout << "\nArray is full\n";
                    break;
                }

                // Ask for position
                cout << "Enter the position (row col), ex. 0 1: ";
                cin >> rowPos >> colPos;
                cout << "Enter the number to insert: ";
                cin >> num;

                // Must be inside the grid
                if (rowPos < 0 || rowPos >= ROW || colPos < 0 || colPos >= COL) {
                    cout << "\nInvalid position.\n";
                    break;
                }

                // Convert to 1d
                pos = rowPos * COL + colPos;

                // Position past the last element: move it left to the first empty slot
                if (pos > size) {
                    pos = size;
                    rowPos = pos / COL;
                    colPos = pos % COL;
                }

                // Move elements 1 index to the right
                for (int ind = size; ind > pos; ind--) {
                    arr[ind / COL][ind % COL] = arr[(ind - 1) / COL][(ind - 1) % COL];
                }

                arr[rowPos][colPos] = num;   // insert
                size++;

                cout << "\nArray after Insertion:\n\n";
                for (int row = 0; row < ROW; row++) {
                    for (int col = 0; col < COL; col++) {
                        int ind = row * COL + col;
                        if (ind < size) {
                            cout << arr[row][col] << "\t";
                        } else {
                            cout << "-\t";
                        }
                    }
                    cout << endl;
                }
                break;

            case 2:   // DELETE
                if (size == 0) {
                    cout << "\nArray is empty, can't del \n";
                    break;
                }

                // Ask for position 
                cout << "Enter the position to delete (row col), ex. 0 1: ";
                cin >> rowPos >> colPos;

                // Convert to 1D
                pos = rowPos * COL + colPos;

                // Must be inside the grid 
                if (rowPos < 0 || rowPos >= ROW || colPos < 0 || colPos >= COL || pos >= size) {
                    cout << "\nInvalid position.\n";
                    break;
                }

                // Move elements 1 index to the left
                for (int ind = pos; ind < size - 1; ind++) {
                    arr[ind / COL][ind % COL] = arr[(ind + 1) / COL][(ind + 1) % COL];
                }

                size--;

                cout << "\nArray after Deletion:\n\n";
                for (int row = 0; row < ROW; row++) {
                    for (int col = 0; col < COL; col++) {
                        int ind = row * COL + col;
                        if (ind < size) {
                            cout << arr[row][col] << "\t";
                        } else {
                            cout << "-\t";
                        }
                    }
                    cout << endl;
                }
                break;

            case 3:   // COPY whole array
                for (int row = 0; row < ROW; row++) {
                    for (int col = 0; col < COL; col++) {
                        cpy[row][col] = arr[row][col];
                    }
                }

                cout << "\nDuplicated Array:\n\n";
                for (int row = 0; row < ROW; row++) {
                    for (int col = 0; col < COL; col++) {
                        int ind = row * COL + col;
                        if (ind < size) {
                            cout << cpy[row][col] << "\t";
                        } else {
                            cout << "-\t";
                        }
                    }
                    cout << endl;
                }
                break;

            case 4:
                cout << "\nProgram ended.\n";
                break;

            default:
                cout << "\nInvalid choice.\n";
        }
    } while (op != 4);
}

void act9(){
	// Initialization of 4x4 array with 13 elements
    int array[4][4] = {
        {101, 202, 303, 404},
        {505, 606, 707, 808},
        {909, 111, 222, 333},
        {444}}; 

    int size = 13;
    int choice, num;

    // Show original array
    cout << "Original Array:\n";
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            if (row * 4 + col < size) {
                cout << array[row][col] << "\t";
            } else {
                cout << "-\t";
        	}
        }
        cout << endl;
    }

	//
    do {
       // Display menu
        cout << "\nMenu:\n1. Enqueue\n2. Dequeue\n3. Push\n4. Pop\n5. Exit\nEnter your choice: ";
        cin >> choice;

        // Adding new element
        if (choice == 1 || choice == 3) {
            if (size == 16) {
                cout << "Array is full!\n";
			} else {
				// Choice enqueue or push
                if (choice == 1) {
                    cout << "Enter number to enqueue: ";
                } else {
                    cout << "Enter number to push: ";
			}
                cin >> num;
				
				// Shift the elements to the right
                for (int index = size; index > 0; index--) {
                    array[index / 4][index % 4] = array[(index - 1) / 4][(index - 1) % 4];
                }
				//Push method and enqueue
                array[0][0] = num;
                size++;

                if (choice == 1) {
                    cout << "Enqueue successful!" << endl;
                } else {
                    cout << "Push successful!" << endl;
            	}
            }

        // Removing an element
		}else if (choice == 2 || choice == 4) {
            if (size == 0) {
                cout << "Array is empty!\n";
            } else {
            	// Dequeue method
                if (choice == 2) {
                    cout << "Dequeued element: " << array[(size - 1) / 4][(size - 1) % 4] << endl;

                    size--;
                    
                } else {
                	// Output: popped
                    cout << "Popped element: " << array[0][0] << endl;

                    // Popped method: Shifting the numbers to the left
                    for (int index = 0; index < size - 1; index++) {
                        array[index / 4][index % 4] = array[(index + 1) / 4][(index + 1) % 4];
                    }
                    
                    size--;
                }
            }
        //Exiting the program
        }else if (choice == 5) {
            cout << "Program terminated!" << endl;
        } else {
            cout << "Invalid choice!" << endl;
		}
        // Display the modified array
        if (choice >= 1 && choice <= 4){
            cout << "\nCurrent Array: " << endl;
			// Making the table output
            for (int row = 0; row < 4; row++) {
                for (int col = 0; col < 4; col++) {
                    if (row * 4 + col < size) {
                        cout << array[row][col] << "\t";
                    } else {
                        cout << "-\t";
                	}
                }
                cout << endl;
            }
        }

    } while (choice != 5);
}
//=========================================================



//================== Utility function =====================
void divider(){
	cout << "\n============================================\n";
}
