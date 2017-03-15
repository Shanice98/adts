#include <iostream>
#include "List.h"

using namespace std;

int main()
{
  int l1Num,choice,x=0;
  int posRem;
  int posIns, posGet;
  int l2Num;

 List L1, L2;
    
        cout<< " 1. Insert an element in list1" <<endl;
        cout<< " 2. Insert an element in list2" <<endl;
        cout<< " 3. Remove an element from list1 " <<endl;
        cout<< " 4. Remove an element from list2" <<endl;
        cout<< " 5. Display list1 " <<endl;
        cout<< " 6. Display list2" <<endl;
        cout<< " 7. Display the size of list1 " <<endl;
        cout<< " 8. Display the size of list2" <<endl;
        cout<< " 9. Get an element from list1 " <<endl;
        cout<< " 10. Get an element from list2" <<endl;
        cout<< " 11. exit" <<endl<<endl;
   
   while (x!=1)
   {
	    
        cout<< " Enter your choice" <<endl;
        cin >> choice;
        
        switch(choice)
        {
			case 1:
			    cout <<" Enter the element you want to insert and the position you want it to be in" << endl;
			    cin >> l1Num; 
			    cin >> posIns;
			    L1.insert(l1Num,posIns);
			    break;
			    
                        case 2:
			    cout <<" Enter the element you want to insert and the position you want it to be in" << endl;
			    cin >> l2Num; 
			    cin >> posIns;
			    L2.insert(l2Num,posIns);
			    break;

			case 3:
			    cout <<" Enter the position of the element you want to remove." << endl;
			    cin >> posRem;
			    L1.remove(posRem);
			    break;
			    
                        case 4:
			    cout <<" Enter the position of the element you want to remove." << endl;
			    cin >> posRem;
			    L2.remove(posRem);
			    break;
			    
			case 5:
			    cout <<" List1 contains:" << endl;
			    L1.display()<<endl;
			    break;

                        case 6:
			    cout <<" List2 contains:" << endl;
			    L2.display()<<endl;
			    break;
			    
		        case 7:
			    cout <<" The size of list1 is: " << endl;
			    cout<<L1.size()<<endl;
			    break;
			   
                        case 8:
			    cout <<" The size of list2 is: " << endl;
			    cout<<L2.size()<<endl;
			    break;
			   
                        case 9:
			    cout <<" Enter the position of the element you want to get." << endl;
			    cin >> posGet;
			    cout<< L1.getAt(posGet)<<endl;
			    break;
			    
                        case 10:
			    cout <<" Enter the position of the element you want to get." << endl;
			    cin >> posGet;
			    cout<<L2.getAt(posGet)<<endl;
			    break;
			    
                        case 11:
			    x=1;
			    break;
			    
			 default:
			      cout<<"wrong choice. try again"<<endl;
		}//switch
	}//while
   
   return 0;

    

 //Do some stuff with L1, L2, ...
 // ...

}
