#include <iostream>
using namespace std;

class DynamicArray
{
    int *Data;      // Pointer to the array
    int Capacity;   // Maximum capacity of the array
    int Size;       // Current number of elements in the array

public:
    // Constructor to initialize the dynamic array
    DynamicArray(int Capacity)
    {
        this->Capacity = Capacity;
        Size = 0;
        Data = new int[Capacity];
    }

    // Destructor to free allocated memory
    ~DynamicArray()
    {
        delete[] Data;
    }

    // Insert a value into the array
    void insert(int value)
    {
        if (Size == Capacity)
        {
            // Resize the array if it's full
            resize();
        }
        Data[Size++] = value;
    }

    // Print all elements in the array
    void PrintArray() const
    {
        for (int i = 0; i < Size; i++)
        {
            cout << "Element [" << i << "] -> " << Data[i] << endl;
        }
    }

    // Remove an element at a specific index
    void Remove(int index)
    {
        if (index < 0 || index >= Size)
        {
            cout << "Invalid index. Cannot remove element." << endl;
            return;
        }

        for (int i = index; i < Size - 1; i++)
        {
            Data[i] = Data[i + 1];
        }
        Size--; // Decrease the size after removal
    }

private:
    // Resize the array when it reaches its capacity
    void resize()
    {
        int newCapacity = Capacity * 2;
        int *newData = new int[newCapacity];

      
        for (int i = 0; i < Size; i++)
        {
            newData[i] = Data[i];
        }

        delete[] Data;
        Data = newData;
        Capacity = newCapacity;

        cout << "Array resized to new capacity: " << Capacity << endl;
    }
};

int main()
{
    DynamicArray Arr(4); 

   
    Arr.insert(10);
    Arr.insert(20);
    Arr.insert(30);
    Arr.insert(40);

    
    Arr.insert(50);

    
    cout << "Array after insertion:" << endl;
    Arr.PrintArray();


    Arr.Remove(1);

    
    cout << "Array after removing element at index 1:" << endl;
    Arr.PrintArray();

    return 0;
}