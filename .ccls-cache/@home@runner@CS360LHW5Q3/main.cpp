#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Tensor
{
public:
    // Function sort for sorting the vectors 
    void vectorsort(vector<int> v)
    {
        cout << "Original vector: ";
        // Displaying the original vector
        for (int i : v)
            cout << i << " ";
        cout << endl;

        // Calling the inbuilt function sort to sort the vector 
        sort(v.begin(), v.end());
        // Displaying the sorted vector
        cout << "Sorted vector: ";
        for (int i : v)
            cout << i << " ";
    }
};

int main()
{
    // Sample vector 
    vector<int> v {6,3,8,9,1,0,2,4,7,5};
    // Creating an object for Tensor 
    Tensor t;
    // Calling the function vectorsort
    t.vectorsort(v);

    return 0;
}
