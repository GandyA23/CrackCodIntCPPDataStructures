#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

// Run this code in terminal
// g++ --std=c++11 vectors.cpp -o vectors

void firstWay (vi v) {
    // v.size() Gets how many elements the vector contains
    int n = v.size();

    cout << "Size of vector: " << n << endl;
    cout << "First way: " << endl;
    
    for (int i=0; i<n; i++)
        cout << v[i] << " " ;
    cout << endl;
}

void secondWay (vi v) {
    cout << "Second way: " << endl;
    // You can use `auto` to print the content of any data structure
    for (auto it=v.begin(); it!=v.end(); it++)
        cout << *it << " " ;
    cout << endl;
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // The vector size is not fixed
    // The vector can increase or decrease th size dynimically
    vi v;  // Dynamic size
    int arr[8];     // Static/Fixed size

    int n;

    // Push a element at the bottom
    v.push_back(23);    // [23]
    v.push_back(24);    // [23, 24]
    v.push_back(12);    // [23, 24, 12]

    // First way for print a vector
    firstWay(v);

    // Second way for print a vector
    secondWay(v);

    // You can access the last element with v.back()
    cout << "Last element: " << v.back() << endl;

    // Insert an element in any position
    v.insert(v.begin(), 55);    // [55, 23, 24, 12]
    secondWay(v);

    // Sort the vector
    sort(v.begin(), v.end());

    cout << "Sorted vector: " << endl;
    secondWay(v);

    // Complexity
    // push_back()              ->  O(1)
    // insert()                 ->  O(N)
    // sort()                   ->  O(NLogN)
    // v[i] acces any element   ->  O(1)  

    return 0; 
}