#include "Test.h"

using namespace std; 
 
 Test:: Test()
 {
 	//ls = new LinkedListOfInts();
 }

 
 void Test:: test()
 {
 	bool step2 = false;
 	bool found = false;
 	if(ls.search(1))
 	{
 		cout<<"Test 0: Search() cannot found an int when the list is empty: PASSED"<<endl;
 	}
 	else
 	{
 		cout<<"Test 0: Search() cannot found an int when the list is empty: FAILED"<<endl;
 	}

	if(ls.size() == 0)
 	{
 		cout<<"Test 1: size() returns correct value when the list is empty: PASSED"<<endl;
 	}
 	else
 	{
 		cout<<"Test 1: size() returns correct value when the list is empty: FAILED"<<endl;
 	} 	 	
 	
 	if(ls.isEmpty())
 	{
 		cout<<"Test 2 : IsEmpty() returns true before adding ints to the list: PASSED"<<endl;
 	}

	ls.addFront(1);
	if(ls.toVector().at(0)==1)
	{
		found = true;
		cout<<"Test 3: toVector() contains the int after addFront: PASSED"<<endl;
	}
	else
	{
		cout<<"Test 3: toVector() contains the int after addFront: FAILED"<<endl;
	}

	if(ls.size() == 1)
 	{
 		cout<<"Test 4 : size() returns correct value after 1 addFront: PASSED"<<endl;
 	}
 	else
 	{
 		cout<<"Test 4 : size() returns correct value after 1 addFront: FAILED"<<endl;
 	} 	
 	
 	if(!(ls.isEmpty()))
 	{
 		step2 = true;
 	}
 	
 	
 	if(found && step2)
 	{
 		cout<<"Test 5 : IsEmpty() returns correct value after 1 addFront: PASSED"<<endl;
 	}
 	else
 	{
 		cout<<"Test 5 : IsEmpty() returns correct value after 1 addFront: FAILED"<<endl;
 	}
 	
 	ls.addBack(2);
 	if(!(ls.isEmpty()))
 	{
 		step2 = true;
 	}
 	
 	if(ls.toVector().at(1)==2 || ls.toVector().at(0)==2)
	{
		found = true;
		cout<<"Test 6 : toVector() contains the int after addBack: PASSED"<<endl;
	}
	else
	{
		cout<<"Test 6 : toVector() contains the int after addBack: FAILED"<<endl;
	}
 
	if(ls.size() == 2) 	
	{
		cout<<"Test 7 : size() returns correct value after 1 addBack: PASSED"<<endl;
	}
	else
	{
		cout<<"Test 7 : size() returns correct value after 1 addBack: FAILED"<<endl;
	} 	
 	
 	if(found && step2)
 	{
 		cout<<"Test 8 : IsEmpty() returns correct value after 1 addBack: PASSED"<<endl;
 	}
 	else
 	{
 		cout<<"Test 8 : IsEmpty() returns correct value after 1 addBack: FAILED"<<endl;
 	}
 	
 	ls.removeFront();
 	
 	if(ls.toVector().at(0)==1 || ls.toVector().at(1)==1)
	{
		found = true;
		cout<<"Test 9 : cannot found the front int after 1 removeFront in the Vector(toVector()): PASSED"<<endl;
	}
	else
	{
		cout<<"Test 9 : cannot found the front int after 1 removeFront in the Vector(toVector()): FAILED"<<endl;
	}
 	
 	if(ls.size() == 1)
 	{
 		cout<<"Test 10 : size() returns correct value after 1 removeFront: PASSED"<<endl;
 	}
 	else
 	{
 		cout<<"Test 10 : size() returns correct value after 1 removeFront: FAILED"<<endl;
 	} 	
 	
	ls.removeBack(); 	
 	
 	if(ls.toVector().at(0)==2 || ls.toVector().at(1)==2)
	{
		found = true;
		cout<<"Test 11 : cannot found the Back int after 1 in the Vector(toVector()): PASSED"<<endl;
	}
	else
	{
		cout<<"Test 11 : cannot found the Back int after 1 in the Vector(toVector()): FAILED"<<endl;
	}
	
	if(ls.size() == 0)
 	{
 		cout<<"Test 12 : size() returns correct value after 1 removeBack: PASSED"<<endl;
 	}
 	else
 	{
 		cout<<"Test 12 : size() returns correct value after 1 removeBack: FAILED"<<endl;
 	} 	
 	
 }
 
    	