# Vectors

## In C++, vectors are used to store elements of similar data types. However, unlike arrays, the size of a vector can grow dynamically.

* That is, we can change the size of the vector during the execution of a program as per our requirements.

### C++ Vector Initialization

code 
```
vector<int> vec;
vector<int> vec = {1, 2, 3, 5, 6};
vector<int> vec(5, -1)
```

### Functions You MUST Remember

Function	Meaning
v.size()	Number of elements
v.empty()	Is vector empty?
v.front()	First element
v.back()	Last element
v.clear()	Remove all elements
v.capacity()	Current allocated capacity


#### Add Element in a Vector

v.push_back(10);

#### Remove Element in a vector

v.pop_back();