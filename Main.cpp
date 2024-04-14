#include "Main.h"

using namespace std;

void showList(list<int> myList)
{
	list<int>::iterator itr;
	for (itr = myList.begin(); itr != myList.end(); itr++)
	{
		cout << *itr << "  ";
	}
	cout << endl;
}

void erase(list<int>* lst)
{
	list<int>::iterator itr;
	itr = lst->begin();
	itr++;
	itr++;
	lst->erase(itr);
}

int main()
{
	list<int> myList;
	myList.push_back(1); // adds 1 to the end of list.
	myList.push_back(2); // adds 2 to the end of list.

	myList.push_front(3); // adds 3 to the top of the list.

	showList(myList);	

	myList.pop_back(); // removes the last element from the list.

	showList(myList);

	myList.pop_front(); // removes the first element from the list.
	showList(myList);

	myList.push_back(3); // adds 3 to the top of the list.
	myList.push_back(4); // adds 4 to the top of the list.
	myList.push_back(5); // adds 5 to the top of the list.
	myList.push_back(6); // adds 6 to the top of the list.

	list<int>::iterator itr;
	itr = myList.begin();
	itr++;
	myList.insert(itr, 10);
	itr++;
	myList.insert(itr, 11);
	showList(myList);

	// 1 10 3 11 4 5 6
	// we will erase 5
	itr++;
	myList.erase(itr);
	showList(myList);

	erase(&myList);
	showList(myList);

	cout << endl;
	return 0;
}