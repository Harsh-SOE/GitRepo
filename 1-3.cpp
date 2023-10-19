#include<bits/stdc++.h>
using namespace std;

void Container_Pairs()
{
    // Defining a pair
    pair<int, int> p = {1,2};
    cout << p.first << " " << p.second << endl;
    pair<int , pair<int , int>> p2 = {1 , {2 , 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    // Array of type pair
    pair<int , int> arr[] = {{1,2} , {20,3} , {30,5}};
    cout << arr[1].second << endl;
}

void Container_Vectors()
{
    // Defining a vector
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);
    vector<pair<int,int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(3,4);
    vector<int> v3(5, 100);
    vector<int> v4(v3);
    // Accessing elements in a vector
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i].first << " " << v2[i].second << " ";
    }
    cout << endl;

    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    
    for(auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for(auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;

    // Deleting an Element in a vector
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    // Deleting 1
    v.erase(v.begin());
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    v.erase(v.begin() + 1);
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    // Deleting Multiple elements from a vector
    v.erase(v.begin()+2, v.begin()+4);
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    // Inserting an element in a vector
    v.insert(v.begin() , 1);
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    v.insert(v.begin() + 2 , 3);
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    vector<int> temp = {1,5,6};
    v.insert(v.begin() + 4, temp.begin()+1, temp.end());
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    v.pop_back();
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    v.clear();
    cout << v.empty();
}

void Container_List()
{
    // Defining a list
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(6);
    for (list<int>::iterator it = ls.begin(); it != ls.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}

void Container_Deque()
{
    // Defining Deque
    deque<int> dq;
    dq.push_back(2);
    dq.push_back(4);
    dq.push_back(6);
    dq.push_back(8);
    dq.push_back(10);
    //Efficient insertion and deletion at both the 
    // Begining and the end
    dq.pop_back();
    dq.pop_front();
    for(auto it : dq)
    {
        cout << it << " ";
    }
}

void Container_Stack()
{
    //Defining a stack
    stack<int> st;
    st.push(1);
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(20);
    cout<< st.top() << " " << endl;
    st.pop();
    cout << st.top() << " " << endl;
    cout << st.size() << " " << endl;
    cout << st.empty() << " " << endl;
    stack<int> st1;
    st1.swap(st);
}

void Container_Queue()
{
    //Defining a queue
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop(); // Deletes 1
    cout << q.front() << endl;
    cout << q.back() + 5 << endl;
    cout << q.empty() << endl;
    cout << q.size();
}

void Container_PriorityQueue()
{
    priority_queue<int> pq;
    pq.push(1);
    pq.push(10);
    pq.push(7);
    pq.push(3);
    pq.push(9);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    cout << pq.empty() << endl;
}

void Container_Set()
{
    set<int> st;
    st.emplace(1);
    st.emplace(2);
    st.emplace(2);
    st.emplace(5);
    st.emplace(3);
    st.insert(5);
    st.insert(7);
    for(auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;
    // cout << *(st.begin()) << endl;
    // cout << *(st.end()) << endl;
    st.erase(2);
    for(auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;
    auto it1 = st.find(2);
    auto it2 = st.find(7);
    st.erase(it1, it2);
    for(auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;
}

void Container_MultiSet()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(4);
    for(auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
    ms.erase(1);
    for(auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << ms.count(3) << endl;
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.erase(ms.find(3));
    for(auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
    // ms.erase(ms.find(3), ms.find(3)+2);
    for(auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
    
}

void Container_Map()
{
    map<int, int> mpp;
    mpp.insert({1,10});
    mpp.insert({2,20});
    mpp.insert({7,50});
    mpp.insert({4,48});
    for(auto it : mpp)
    {
        cout << it.first << " " << it.second <<endl;
    }
    mpp[3] = 46;
    cout << mpp[1] << " " << mpp[10] << endl;
    auto it = mpp.find(3);
    // cout << *(it).second;
}

bool comp(pair<int, int> p1, pair<int , int> p2)
{
    if(p1.second < p2.second)
    {
        return true;
    }
    else if(p1.second > p2.second)
    {
        return false;
    }
    else if(p1.second == p2.second)
    {
        if(p1.first >= p2.second)
        {
            return true;
        }
        else if(p1.first < p2.second)
        {
            return false;
        }
    }
}

void SortingArrays()
{
    // Sort According to a specific condition
    pair<int, int> arr[] = {{1 , 2}, {2 , 1} , {4 , 1}};
    sort(arr, arr + sizeof(arr)/sizeof(pair<int, int>) , comp);
    for (int i = 0; i < sizeof(arr)/sizeof(pair<int, int>); i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}

int main()
{
    // Container_Pairs();
    // Container_Vectors();
    // Container_List();
    // Container_Deque();
    // Container_Stack();
    // Container_Queue();
    // Container_PriorityQueue();
    // Container_Set();
    // Container_MultiSet();
    // Container_Map();
    SortingArrays();
    return 0;
}
