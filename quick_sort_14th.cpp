#include <iostream>

using namespace std;

/*
                        Quick Sort Algorithm -  it sort any given data structure in ascending order and 
                                                by doing minor twicks it can sort in descending order.

                                TC -  N log N
                                SC -  O(1)

                                exa- arr - {4, 6, 2, 5, 7, 9, 1, 3}

                            step1 - pick a pivot and place it in its correct place in the sorted array
                                    a pivot can be-  a. 1st element in the array
                                                     b. last element in the array
                                                     c. median of the array
                                                     d. random element of the array

                                    lets take '4' in its correct place, then
                                            {4, 6, 2, 5, 7, 9, 1, 3}
                                                      4

                            step2 - smaller on the left, bigger on the right

                                            {4, 6, 2, 5, 7, 9, 1, 3}
                                             2, 1, 3, 4, 6, 5, 7, 9         ...(a)

                            step3 - repeat the above steps in the individual array from left and right side

                                    lets take left array
                                            {2, 1, 3}  and do the steps
                                    a.      {2, 1, 3}
                                                2
                                    b.      {2, 1, 3}
                                             1, 2, 3


                                    on the original array, the left changes
                                            {1, 2, 3, 4, 6, 5, 7, 9}        ...(b)

                            step4 - repeating the steps on the right of the array of (a)

                                            {6, 5, 7, 9}
                                    a.b.     5, 6, 7, 9                     ...(c)

                                    5, & 6 are in their sorted position, lets take 7 & 9 
                            step5 - 
                                            {7, 9}
                                    a.b.     7, 9                           ...(d)

                            by putting (c), (d) in (b)
                                            {1, 2, 3, 4, 5, 6, 7, 9}


        pseudo code     (watch video for pseudo code explanation)

        array - {4, 6, 2, 5, 7, 9, 1, 3}
        index -  0  1  2  3  4  5  6  7
                 ^                    ^
                 |                    |
                low                 high

qs(arr, low, high)
{
    if(low < high)
    {
        pIndex = f(arr, low, high)              // <-partition index, to define pivot
        qs(arr, low, pIndex)                    // left of the pivot
        qs(arr, pIndex + 1, high)               // right of the pivot
    }
}

int f(arr, low, high)
{
    pivot = arr[low]                // <- deciding pivot
    i = low
    j = high

    while(i < j)
    {
        while(arr[i] <= arr[pivot]  &&  i <= high)
        {
            i++
        }
        while(arr[j] >= arr[pivot]  &&  i <= low)
        {
            j--
        }
        if(i < j)
            swap(arr[i], arr[j])
    }
    swap(arr[low], arr[j])
        return j
}


        Actual Code

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j)
    {
        while(arr[i] <= pivot  &&  i <= high - 1)
        {
            i++;
        }

        while(arr[j] >= pivot  &&  i >= low + 1)
        {
            j--;
        }
        if(i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void qs(vector<int> &arr, int low, int high)
{
    if(low < high)
    {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}
vector<int> quickSort(vector<int> arr)
{
    qs(arr, 0, arr.size() - 1);
    return arr;
}
*/

int main()
{
    std::cout << "Hello World!\n";
}