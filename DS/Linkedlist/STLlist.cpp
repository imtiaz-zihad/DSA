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
    l.erase(next(l.begin(), 1), next(l.begin(), 3)); // Erase elements from position 1 to 2(earse multiple value)
    replace(l.begin(), l.end(), 20, 50); // Replace all occurrences of 20 with 50
    auto it = find(l.begin(), l.end(), 30); // Find element 30 in the list

    if (it == l.end()) {
        cout << "Element 30 not found." << endl;
    } else {
        cout << "Element 30 found." << endl;
    }
    

    //Operations
    l.remove(50); // Remove all occurrences of 50
    l.sort(); // Sort the list(in ascending order)
    l.sort(greater<int>()); // Sort the list in descending order
    l.unique(); // Remove consecutive duplicates(only works if the list is sorted) 
    l.reverse(); // Reverse the list


    //Element access
    cout << "Front element: " << l.front() << endl; // Access the first element
    cout << "Back element: " << l.back() << endl; // Access the last
    cout << "Element at position 2: " << *next(l.begin(), 2) << endl; // Access element at position 2

    // Iterators
    cout << *l.begin() << endl; // Access first element using iterator
    cout << l.back() << endl; // Access last element using iterator
    


    //printing the list
    for(int x : l){
        cout << x << " ";
    }
    return 0;
}