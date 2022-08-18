// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node {
  public:
    int value;
  Node * Next;
  //constructor creates a new node
  Node(int val) {
    value = val;
    Next = NULL;
  }

};

///////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////

int CountLength(Node * head) {
  Node * temp = head;

  int count = 1;
  if (head == NULL) {
    return -1;
  }

  while (temp != NULL) {
    count++;
    temp = temp -> Next;
  }
  return count;

}
void display(Node * n) { //1 2 3 4 5 6 7 8 9

  while (n != NULL) {
    cout << n -> value;
    if (n -> Next != NULL) {
      cout << " -> ";
    }

    n = n -> Next;
  }

  cout << endl;

}
///////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////

//insetion at tail
void insertAtTail(Node * & head, int val)

{
  Node * newNode = new Node(val);
  if (head == NULL) //If the list is empty
  {
    head = newNode;
    return;
  }

  Node * temp = head;
  while (temp -> Next != NULL) {
    temp = temp -> Next;
  }
  temp -> Next = newNode;

}
///////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////
//insertion at first or head
void insertAtHead(Node * & head, int val) {
  Node * newnode = new Node(val);
  newnode -> Next = head;
  head = newnode;

}

//insetion at middle of node

void insertAtMiddle(Node * & head, int val) {

}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////
//1-2-3-4-5-6-7-8-9
void insertATspecicficpositions(Node * & head, int pos, int val) {
  int i = 0;
  Node * temp = head;
  while (i < pos - 2) { //0 1 2 3
    temp = temp -> Next;
    i++;
  }
  // first we are traversing the linked list and going to the specified position we are minising 2 because we have started our count from 0 and changing the preview node value and assing it to newnode and the previous value will store new node adress
  Node * newnode = new Node(val);
  newnode -> Next = temp -> Next;
  temp -> Next = newnode;
}

///////////////////////////////////////////////////////////////////////////
int serchUniqueValues(Node * & head, int key) {
  int index = 1;
  Node * temp = head;
  if (temp == NULL) {
    return -1;
  }
  while (temp -> value != key) {
    if (temp -> Next == NULL) {
      return -1;
    }
    index++;
    temp = temp -> Next;

  }

  return index;

}
//////////////////////
void searchDuplicateValues(Node * & head, int key) {
  int count = 1;
  int size;
  size = CountLength(head);
  int position[size + 1], k = 1;
  int flag = 0;
  Node * temp = head;
  while (temp != NULL) {
    if (temp -> value == key) {
      // cout<<count;
      position[k] = count;
      k++;
      flag = 1;
      // count++;

    }
    temp = temp -> Next;
    count++;
  }

  if (flag == 0) {
    cout << "The search value is not in the list";
  } else {
    position[0] = k;
    for (int i = 1; i < position[0]; i++) {
      cout << position[i];
      if (i < position[0] - 1) cout << ",";

    }
    cout << endl;
  }
}

///////////////////////////////////////////////////////////////////////////
int findMidValue(Node * & head) {
  if (head == NULL) {
    return -1;
  }
  Node * slow = head;
  Node * fast = head;
  while (fast != NULL && fast -> Next -> Next != NULL) {
    slow = slow -> Next;
    fast = fast -> Next -> Next;
  }
  return slow -> value;
}
/////////////////////////////////////////////////////////////////////////////////

void makeCycle(Node * & head, int pos) {
  Node * temp = head;
  Node * startNode;
  int count = 1;

  while (temp -> Next != NULL) {
    if (count == pos) startNode = temp;
    temp = temp -> Next;
    count++;
  }
  temp -> Next = startNode;
}

//////////////////////////////////////////////////
bool detectCyle(Node * & head) {
  Node * slow = head;
  Node * fast = head;
  while (fast != NULL && fast -> Next -> Next != NULL) {
    slow = slow -> Next;
    fast = fast -> Next -> Next;
    /////////cycle check////////
    if (slow -> Next == fast -> Next) {
      return true;
    }

  }
  return false;

}

/////////////////////////////////////////////////
void removeCycle(Node * & head) {
  Node * slow = head;
  Node * fast = head;
  //step 1: 
  do {
    slow = slow -> Next;
    fast = fast -> Next -> Next;
  } while (slow != fast);
  //    step 2:
  fast = head;
  // step 3:fast next != slow->Next
  while (fast -> Next != slow -> Next) {
    slow = slow -> Next;
    fast = fast -> Next;
  }
  // step 4:
  slow -> Next = NULL;

}
//insertion After a specific value

void insertionUniqueValue(Node * & head, int searchvalue, int value) {
  //step 1: search position of value in
  int position;
  position = serchUniqueValues(head, searchvalue);
  //step 2: insert value at the position
  insertATspecicficpositions(head, position + 1, value);

}
///////////////
//delete head value 

void deleteHead(Node * & head) {
  Node * temp = head;
  if (temp != NULL) {
    head = temp -> Next;
    delete temp;
  } else {
    cout << "There is no head value in the linked list!" << endl;
  }

}
//////////////////////
////////////////////////////////
//delete tail //
void deleteTail(Node * & head) {
  Node * temp = head;
  if (temp != NULL && temp -> Next -> Next != NULL) {
    while (temp -> Next -> Next != NULL) {
      temp = temp -> Next;
    }
    //here temp is the previous value of last node so with temp->next we are assining the last value to del node and next we are assing the previous value to null and deleting the tail
    Node * delNode = temp -> Next;

    temp -> Next = NULL;
    delete delNode;

  } else {
    //head is null
    if (temp == NULL) {

      cout << "There is no  value in the linked list!" << endl;

    }
    //head is tail
    else {
      deleteHead(head);
    }
  }
}

/////////////////////////////////////////
//delete at specific postion

void deleteAtspecifiedPostion(Node * & head, int postion) {
  Node * temp = head;
  if (temp != NULL && postion <= CountLength(head)) {
    if (postion == 1) {
      deleteHead(head);
    } else if (postion == CountLength(head)) {
      deleteTail(head);
    } else {
      int i = 1;
      while (i < postion - 1) {
        temp = temp -> Next;
        i++;
      }
      Node * delNode = temp;
      temp -> Next = delNode -> Next;
      delete delNode;

    }

  } else {
    if (position > CountLength(head)) {
      cout << "Position out of bound";
    } else {
      cout << "There is no value in linked list ";
    }
  }
}

//deletion by value(unique list)
void deletionByvalueunq(Node * & head, int val) {

  int position;
  position = serchUniqueValues(head, val);
  deleteAtspecifiedPostion(head, position);
}

int main() {
  Node * head = NULL;
  int n, pos, key, Indexpos, midvalue;
  bool cycleStatus;
  cout << "Choice 1:Insertion at head " << endl << "Choice 2:Insertion at taile" << endl;
  cout << "Choice 3:Insetion at any position " << endl << "Choice 4:Search a value for (unique List)" << endl;
  cout << "Choice 5:Size of Linked List" << endl << "Choice 6: Search a value (Duplication enabled List)" << endl;
  cout << "Choice 7:Finding the mid value " << endl << "Choice 8: Make a cycle in linked list" << endl;
  cout << "Choice 9:Check if there is cycle in linked list" << endl << "Choice 10:Remove a cycle in linked list" << endl;
  cout << "Choice 11:Insertion after a specific value(unique list)" << endl << "Choice 12:Insertion after a specific value(unique list)" << endl;
  cout << "Choice 13:Delete head !" << endl << "Choice 14:Delete tail !" << endl;
  cout << "Choice 15:Display Linkedlist !" << endl << "Choice 16:Delete At specific postion !" << endl;
  cout << "Choice 17:Deletion By value !" << endl << "Choice 18:Delete At specific postion !" << endl;
  cout << "Choice 0:Exit" << endl;
  int choice;
  cout << "Next Choice:";
  cin >> choice;

  while (choice != 0) {
    switch (choice) {
    case 1:
      cout << "Enter the valule : ";
      cin >> n;
      insertAtHead(head, n);
      break;

    case 2:
      cout << "Enter the valule : ";
      cin >> n;
      insertAtTail(head, n);
      break;

    case 3:
      cout << "Enter the desired position : ";
      cin >> pos;
      cout << "Enter the value : ";
      cin >> n;
      insertATspecicficpositions(head, pos, n);
      break;

    case 4:
      cout << "Enter the value for search: ";
      cin >> key;
      Indexpos = serchUniqueValues(head, key);
      if (Indexpos == -1) {
        cout << "THe number is not in the list" << endl;

      } else {
        cout << "The number is at position =" << Indexpos << endl;
      }
      break;

    case 5:
      cout << "Size of linked list is :" << CountLength(head) << endl;
      break;

    case 6:
      cout << "Enter the value for search: ";
      cin >> key;
      cout << "The number is at position: ";
      searchDuplicateValues(head, key);

      break;

    case 7:
      midvalue = findMidValue(head);
      if (midvalue == -1) {
        cout << "The mid is not found in the list" << endl;
      } else {
        cout << "The mid value is = " << midvalue << endl;
      }

      break;

    case 8:
      cout << "Enter the desired position";
      cin >> pos;
      makeCycle(head, pos);
      break;

    case 9:

      cycleStatus = detectCyle(head);
      if (cycleStatus == true) {
        cout << "There is cycle in linked list" << endl;
      } else {
        cout << "There is no cycle in linked list" << endl;
      }
      break;

    case 10:

      cycleStatus = detectCyle(head);
      if (cycleStatus == true) {
        removeCycle(head);
      } else {
        cout << "There is no cycle in linked list" << endl;
      }
      break;

    case 11:
      int searchvalue, value;
      cout << "Enter the value to search: ";
      cin >> searchvalue;
      cout << "Enter the value to insert: ";
      cin >> value;
      insertionUniqueValue(head, searchvalue, value);
      break;

    case 12:
      // int searchvalue,value;
      cout << "Enter the value to search: ";
      // cin>>searchvalue;
      // cout<<"Enter the value to insert: ";
      // cin>>value;
      // insertionUniqueValue(head,searchvalue,value);
      break;

    case 13:
      deleteHead(head);
      break;
    case 14:
      deleteTail(head);
      break;
    case 15:
      display(head);
      break;
    case 16:
      if (head == NULL) {
        cout << "There is no value in linked list";
        break;
      }
      int deleteposition;
      cout << "Enter the desired position :";
      cin >> deleteposition;
      deleteAtspecifiedPostion(head, deleteposition);
      break;

    case 17:
      int delValue;
      cout << "Enter the desired value :";
      cin >> delValue;
      deletionByvalueunq(head, delValue);
      break;

    default:
      break;

    }

    cout << "Next Choice :";
    cin >> choice;
  }
  cout << endl << "Linked List: ";
  display(head);

  return 0;
}