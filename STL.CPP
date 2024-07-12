#include<iostream>
#include <utility> 
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>

using namespace std;




// Pair 
void _Pair() {
    pair<int, int> pairs = {1, 3}; // declearing pair
    pair<int, int> pairs_array[] = { {1, 2}, {3, 4}}; //multidimentional Pair
    pair<int, pair<int, int>> pairs_nested = {1, {2, 3}}; // Nested Pair
    
    cout<<"First "<<pairs.first<<" Second "<<pairs.second<<endl;
    cout<<"First "<<pairs_nested.first<<" Second.First "<<pairs_nested.second.first<<" Second.Second "<<pairs_nested.second.second<<endl; 

    for(const auto& p: pairs_array) //Printing through the Array
        cout<<p.first<<" ";
    
}

// Vector @attention
void _Vector() {
    
    vector<int> v; // Initialising Vector
    vector<pair<int, int>> vec; // Initialising Vector of Pair Type
    vector<vector<int>> matrix(4, vector<int>(6, 0)); // Initialising a 2D Vector @attention

    v.push_back(1); // Push at the Last Index
    v.emplace_back(2); // Push At the Last Index(Faster then push_bacl())

    vec.push_back({1, 2}); // Have to define the Syntax of the Datatype before assigning
    vec.emplace_back(1, 2); // Dont have to explicitely define the syntax of the Data type

    vector<int> vx(5, 100); // 5 instance of value 100
    vector<int> v2(v); // Copy the v  and assign it into v2

    cout<<v[1]<<endl; // Printing the value with index
    cout<<v.at(1)<<endl; // Printing the Value with index(Generally avoided)

    vector<int> :: iterator it = v.begin(); // Assign the Address the Value (Address are contigious)
    cout<<*(it)<<endl;

    auto first_element = v.begin(); // First Element of the Vector
    auto last_element = v.end()-1; // Last Element of the Vector
    auto reverse_lastIndex = v.rend()+1; // First Element of the vector
    auto reverse_FirstIndex = v.rbegin()+1; // Dont know

    for(vector<int> :: iterator it = v.begin(); it<v.end(); it++) 
        cout<<*(it)<<endl;
    
    for(auto it = v.begin(); it<v.end(); it++) 
        cout<<*(it)<<endl;
    
    for(auto it: v)
        cout<<it<<endl;
    
    
    v.erase(v.begin()+1); // Erase single Element
    v.erase(v.begin()+1, v.begin()+4); // Erase a series of Element(starting from the element I want to delete, index after the element i want to delete)

    v.insert(v.begin(), 300); // Insert At the Begining
    v.insert(v.begin()+2, 2, 100); // Insert a Specific element a specific number of time and specific position 

    cout<<"Size : "<<v.size()<<endl; // Find out the Size of the Vector

    v.pop_back(); // Remove the First element from the Vector
    v.swap(vx); // InterCHange the Value of v and vec

    v.clear(); // Clear all the Values of a vector

    cout<<v.empty()<<endl; // Check is the Vector is empty or not
    
}


void _List() {
    list<int> ls;

    ls.push_back(1);
    ls.emplace_back(2);

    ls.push_front(3);
    ls.emplace_front(3);

    // Rest of the functions are as same as vector
    // begin, end, clear, insert, size, swap
}

void _Dequq() {
    deque<int> dq;

    dq.push_back(1);
    dq.emplace_back(2);

    dq.push_front(3);
    dq.emplace_front(4);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    // Rest of the Function is Similler to Vector
    // begin, end, clear, insert, size, swap
}

void _Stack() { // Last in First Out
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);

    cout<<st.top()<<endl;

    st.pop();

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;

    stack<int> st1, st2;

   st1.swap(str2);

}

void _Queue() { // First in First Out
    queue<int> que;

    que.push(1);
    que.push(2);
    que.emplace(3);

    cout<<que.back()<<endl;

    cout<<q.front()<<endl;

    que.pop();

    cout<<que.size()<<endl;

    // size, swap, empty functions is similler to stack
}

void _Priority_Queue() { // A Special type of queue where Largest Element will stay at the top

    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout<<pq.top()<<endl;
    pq.pop();

    // A Special type of queue where Smallest Element will stay at the top
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout<<pq.top()<<endl;
    pq.pop();

    // Rest of The Operation will be Same as other queue

}

// Set -> Sorted and Unique
// Multiset -> Sorted but not Unique
// Unorder_set -> Unique but not sorted

void _Set() { //Sorted and Unique
    set<int> s;

    s.insert(5);
    s.emplace(3);
    s.emplace(2);
    s.emplace(4);

    auto it = s.find(2); //return the iterator
    
    s.erase(2); //remove the value

    int count = s.count(2);
    auto it1 = s.find(3);
    auto it2 = s.find(5);
    s.erase(it1, it2);

    // size, swap, begin, functions are similler 
}

// map -> key will be sorted and unique
// multi_map -> key will be sorted but not unique
// unordered_map -> key will be unique but not sorted

void _Map() {
    map<int, int> m; //(key, Value) Key will be in sorted order
    map<int, pair<int, int>> m_pair;

    m[2] = 10;
    map.insert({1, 2});
    map.emplace({4, 5});

    m_pair({34, 12}) = 55;

    for(auto it: m) 
        cout<<it.first<<" "<<it.second<<endl;
    
    cout<<m[1]<<endl;
    auto it = m.find(4); // Return Iterator


}


int main() {
    _List();
    return 0;
}