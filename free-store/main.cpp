#include <iostream>
#include <vector>
#include <string>
#include "my_utils.h"
using namespace std;

using common::print_data_sizes;
using common::to_lower;
using common::my_strdup;
using common::my_findx;
using common::find_mem_exhaust;
using common::read_string;
using List::LinkedList;
using List::Node;

int main(){

    //print_data_sizes();
    //Free store allocation
    int * int_arr = new int[4]; 
    *int_arr = 24;
    int_arr[1] = 34; // is short hand for *(int_arr + 1)
    *(int_arr + 1) = 67;
    int& ref  = *(int_arr + 1);
    ref = 23;

    //Class example with constructors and destructors of a class.
    examples::ConDesCls* cdc;
    //cout << "Before Loop my Address: " << cdc << "\n"; 
    for(int i = 0; i < 5; ++i){
        //cout <<"Loop " << i << " -\n";
        cdc = new examples::ConDesCls;
        //cout << "\tMy Address: " << cdc << endl;
        //delete cdc;
    }
    //cout << "Out of the loop -\n\t";  (*cdc).test_print(); cout << "\tMy Address: " << cdc << endl;
    //(*cdc).test_print();

    /**
     * @brief So... when a object is declared without the "new" operator it returns a referance. This object is
     * subsequently deleted every time it goes out of scope - this automatically calls upon the desctructor of the 
     * object. IF "new" operator is used, a pointer to the object is returned this does NOT get deleted (have its destructor called )
     * once it goes out of scope.
     * 
     */

    //Allocating C-Style string on the heap.
    char* ptr_str = new char[4];
    int ind = 0;
    while(ind < 3 ){ // super risky to go beyond the the allocated spaces as it writes into other memory.
        ptr_str[ind] = 'H';
        ++ ind;
    }
    ptr_str[3] = '\0'; // we can see that the cout prints until it finds this
    //cout << ptr_str;
    //cout << *ptr_str;
    
    //Allocating C-Style string on the stack.
    char my_str_ptr[] = "HeLlo WOrLd"; // this is initialised on the stack since new is not used, empty brackets ensures space of the string is allocated.
    //my_str_ptr[0] = 'l';
    //cout << *my_str_ptr<<"\n";
    //for char array cout works differently and instead of printing out the address of the first element it deferences and prints out until null terminator \0.
    //cout<<"C-Style string before changing to all lower case: " <<  my_str_ptr << endl;
    to_lower(my_str_ptr);
    //cout <<"Same string after: "<< my_str_ptr;

    //Changing a char array on stack to char array on the heap.
    char stack_ptr[] = "Hi my name is mal";
    char * heap_ptr = my_strdup(stack_ptr);
    //cout << heap_ptr;

    //Trying to see char array returns a constant pointer 
    //Makes a CONST pointer pointing to CONST objects.
    const char * mess  = "Hello"; 
    const char * me = mess; // Success ! thus it is ensured that a CONSTANT pointer is returned oh this is
    int i = 0; 
    while(mess[i] != '\0'){
        //cout << mess[i];
        //Shows that the null string is default put at the end.
        ++i;
    }
    const char & h_ref = *mess;
    //cout<< h_ref;
    //h_ref = "L"; //This gives error !  
    //cout << h_ref;

    //Trying to see other declaration. 
    char str[] = "Hello";
    char str0[] = "Hello";
    //str = str2; //will give error.
    char& h = *str; //See is not const.
    const char& e = *str; ///OMG str is a pointer that is why in this case we are deferencing a pointer!
    //cout << h << "\n";
    h = 'L'; 
    //cout << str << "\n";

    /**
     * @brief So when const char * mess  = "Hello"; is used, a CONST referance with CONST chars is returned 
     * while when char str[] = "Hello"; is used, a NON - CONST referance with a NON-CONST char is returned. Both of these 
     * strings are allocated on the stack and not the heap and both the arrays cannot be re-assigned (even though the second
     * one has NON-CONST pointer).
     * 
     */

    //Find a c-style string inside another string. 
    char str1[] = "chessboard"; 
    char str2[] = "bo";
    char * p = str2 + 2; 
    //First occurance of man in cameraman occurs at 6th index.
    //cout << "Address of correct index: " << (int*) &str1[5] << "\n";
    //cout << "Address received by findx: " << (int*) my_findx(str1, str2) << "\n";

    ////Figure out when memory gets exhausted.
    //find_mem_exhaust();
    //Final memory was 3.6 *10*9 bytes allocated i.e 3.6gb memory allocated.


    ////Read character in one by one stopping when hit with !
    //char * user_str = read_string(); 
    //cout << "\nUser has entered string:" << user_str;

    ////See if "new" allocates with null character. 
    char * new_strr = new char[100];
    new_strr[0] = 'M';
    //cout << "Allocated 'M' on free store char via new without null terminator:" << new_strr << endl;//See how it goes passed "M"
    char nice_str[100]; 
    nice_str[0] = 'M';
    //cout << "Allocated 'M' on stack without null terminator:" << nice_str << endl;

    /**
     * @brief As we can see from most previous example when allocated with "new" on the heap (free store)
     * there is no default null termination as opposed to when stack allocation is seen and the null terminator is
     * implicitly added.
     */


    ////Make a linked list.
    
    LinkedList a_list;
    //Test append
    //cout << "Before appending any elements:"; 
    a_list.print_list();
    a_list.append("Hi");
    a_list.append("this");
    a_list.append("is");
    a_list.append("a");
    a_list.append("L");
    a_list.append("O");
    a_list.append("L");
    a_list.append("list.");
    //cout << "After appending 8 elements:"; 
    //a_list.print_list();
    //Test pop.
    a_list.pop(); 
    a_list.pop(); 
    a_list.pop();  
    //cout << "After popping last 3 element:"; 
    //a_list.print_list();
    //Test insert. 
    a_list.insert("Yo", 1); 
    //cout << "After inserting node at 1st index:"; 
    //a_list.print_list();






    

}
