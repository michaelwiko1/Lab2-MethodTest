#include <iostream>

#include "BoardH.h"
#include "VectorBoardObjectH.h"

using namespace std;

void banner()
{
	cout << "***************************************************" << endl;
	cout << "*                                                 *" << endl;
	cout << "*  Welcome to TEXT-BASED PACKMAN		           *" << endl;
	cout << "*                                                 *" << endl;
	cout << "*  (c) 2010  Vlad Estivill_Castro		           *" << endl;
	cout << "*                                                 *" << endl;
	cout << "*   E<cr> - Move up		                       *" << endl;
	cout << "*   X<cr> - Move down 	                           *" << endl;
	cout << "*   S<cr> - Move left 	                           *" << endl;
	cout << "*   D<cr> - Move right 	                       *" << endl;
	cout << "*   P<cr> - Park   	                           *" << endl;
	cout << "*                                                 *" << endl;
	cout << "***************************************************" << endl;


}

int main()

{
	
	char aMove;
	banner();

	cout << "Hello World!" << endl;
	// Create first entry of the memory list
		p_BoardObject init_object = new BoardObject(1,1);
		VectorBoardObject vectorobject(init_object);
	// Add one object to the game, for ex: Player
		vectorobject.addOne(new Player(1,1));
	// Removing player
		//vectorobject.removeOnePlayer();
	// Insert cookie 
		vectorobject.addOne(new Cookie(1,1));
	// Insert wall
		vectorobject.addOne(new Wall(1,1));
	// Print line from memory list
		p_BoardObject first = vectorobject.theFirst();
		cout << "The first object memory address is : " << first << endl;
		p_BoardObject next = vectorobject.theNext();
		cout << "The next object memory address is : " << next << endl;
	// Get cookie value
		int nextCookie = vectorobject.isCookieValue();
		cout << "The cookie value is : " << nextCookie << endl;
	// Get wall value
		int nextWall = vectorobject.isThereAWall();
		cout << "The wall value is : " << nextWall << endl;


	// Initialize

	Board theBoard (7,7);

	// Set Up

        do{


	theBoard.paint();

	cin >> aMove;	

	if ( ('E'==aMove) || ('X'==aMove) || ('S'==aMove) || ('D'==aMove) )
		 aMove=aMove-'A'+'a';

	if ( ! (
           ('e'==aMove) || ('x'==aMove) || ('s'==aMove) || ('d'==aMove) 
            ) ) aMove='p';

	theBoard.move(aMove);

	} while (theBoard.IamAlive());


        return 0;

	/*VectorBoardObject testObj();     // Create an object of MyClass
  	testObj->theTestMethod();  // Call the method
  	return 0;*/

}

