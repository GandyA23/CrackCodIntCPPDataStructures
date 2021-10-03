#include <bits/stdc++.h>

using namespace std;

typedef set<int> st;

void printSet (st setAux) {
    for (auto it = setAux.begin(); it != setAux.end(); it++)
        cout << *it << " " ; // 12 23 55
    cout << endl;
}

int main () {
    // set only contains unique elements in sorted order
    st set1;

    // add new elements in set 
    set1.insert(23);
    set1.insert(23);    // Set only save one time the number 23
    set1.insert(12);
    set1.insert(12);    // Set only save one time the number 12
    set1.insert(55);

    // You can't access with index, you need use iterators
    printSet(set1);

    // Set internally
    //      23
    //     /  \
    //    12  55

    // Remove an element of set
    set1.erase(12);

    // Set internally
    //      23
    //        \
    //        55

    printSet(set1);

    // Found an element in set
    // st1.find(val) -> if element exists so pint to it, otherwise point to end
    if (set1.find(23) != set1.end()) 
        cout << "Found" << endl;
    else 
        cout << "Not found" << endl;

    // Print the first element in set
    cout << *set1.begin() << endl;

    // set.insert()     ->      O(LogN)
    // set.erase()      ->      O(LogN)
    // set.find()       ->      O(LogN)
    
    // Maintain sorted order
    // Unique elements
    // Finding an element
}