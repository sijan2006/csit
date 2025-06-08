// wap to overload search() function that takes array of integers characters and array of float to find the key supplied by the user
#include <iostream>
using namespace std;
int search(int arr[], int size, int key);
int search(char arr[], int size, char key);
int search(float arr[], int size, float key);
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    char arr2[] = {
        'a',
        'b',
        'c',
        'd',
    };
    int check;
    float arr3[] = {1.1, 2.2, 3.3};
    int key1;
    char key2;
    float key3;
    cout << "Enter the key to search in integer array: ";
    cin >> key1;
    cout << "Enter the key to search in character array: ";
    cin >> key2;
    cout << "Enter the key to search in float array: ";
    cin >> key3;
    check = search(arr1, sizeof(arr1), key1);
    (check == -1) ? cout << "not found " : cout << "key found at index" << check << endl;
    check = search(arr2, sizeof(arr2), key2);
    (check == -1) ? cout << "not found " : cout << "key found at index" << check << endl;
    check = search(arr3, sizeof(arr3), key3);
    (check == -1) ? cout << "not found " : cout << "key found at index" << check << endl;
    return 0;
}
int search(int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int search(char arr[], int size, char key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int search(float arr[], int size, float key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}