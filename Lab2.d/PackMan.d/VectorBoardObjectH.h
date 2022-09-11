#include <vector>
#include  "BoardObjectH.h"
#include  "PlayerH.h"
#include  "CookieH.h"
#ifndef H_VECTOR_OF_OBJECTS
#define H_VECTOR_OF_OBJECTS
typedef BoardObject* p_BoardObject;


class  VectorBoardObject
{
	std::vector <p_BoardObject> list;
	std::vector < p_BoardObject>::iterator internalIterator;
public:
	VectorBoardObject(p_BoardObject theFirst);

	p_BoardObject theFirst();
	p_BoardObject theNext();
	void addOne(p_BoardObject newOne);
	void removeOnePlayer();
	bool isThereAWall();
	int isCookieValue();
};
#endif
