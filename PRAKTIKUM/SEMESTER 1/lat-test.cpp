#include <iostream>
using namespace std;

int smallestIndex(int *array, int left, int size) {
    int smallest = array[left];
    int smIndex = left;
    for (int i = left+1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
            smIndex = i;
        }
    }
    return smIndex;
}
void sortingIntegers(int *list, int left, int size) {
    if (left == size)
        return;
    int smallest = smallestIndex(list, left, size);
    int c = list[smallest];
    list[smallest] = list[left];
    list[left] = c;
    sortingIntegers(list, left+1 ,size);
}

int main()
{   
    system("cls");
    int numbers[] = {8, 2, 5, 1, 0};
    sortingIntegers(numbers, 0, 5);
    for (int i=0;i<5;i++) cout << numbers[i] << ' ';
    return 0;
}