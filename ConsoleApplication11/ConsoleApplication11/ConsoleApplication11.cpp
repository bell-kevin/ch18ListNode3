// ConsoleApplication11.cpp : This program illustrates the building and traversal of a linked list. by kevin bell
 #include <iostream>
 #include <fstream>
 using namespace std;
 struct ListNode
{
	 double value;
	 ListNode* next;
	 // Constructor
	 ListNode(double value1, ListNode* next1 = nullptr)
	 {
		 value = value1;
		 next = next1;
	 }    
};

 int main()
 {
	 ListNode* p = new ListNode(56.4);
	 p = new ListNode(34.2, p);
	 cout << (*p).value << "  " << p->value;
 } // end main