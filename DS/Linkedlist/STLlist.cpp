#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int> l ={10,20,30};

    //constructors
    list<int> l2(l); // Copy constructor
    list<int> l3(5, 100); // Fill constructor with 5 elements of value 100
    list<int> l4(l.begin(), l.end()); // Range constructor
    list<int> l5; // Default constructor

    //capacity
    cout << "Size of l: " << l.size() << endl; // Size of the list
    cout << "Is l empty? " << (l.empty() ? "Yes" : "No") << endl; // Check if the list is empty
    cout << "Max size of l: " << l.max_size() << endl; // Maximum size of the list
    l.resize(5,20); // Resize the list to 5 elements, filling with 20 if needed
    cout << "Size after resize: " << l.size() << endl;
   // l.clear(); // Clear the list    



    // Modifiers
    l.push_front(5); // Insert at head
    l.push_back(40); // Insert at tail
    l.pop_front(); // Remove from head
    l.pop_back(); // Remove from tail  
    l.insert(next(l.begin(), 2), 100); // Insert 100 at position 2(insert any postion)
    l.erase(next(l.begin(), 1)); // Erase element at position 1


    //printing the list
    for(int x : l){
        cout << x << " ";
    }
    return 0;
}