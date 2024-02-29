#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int* array, int length) {
    int currentIndex, currentValue, prevIndex;
    for (currentIndex = 1; currentIndex < length; currentIndex++) { //от второго элемента до последнего
        currentValue = array[currentIndex]; //запись текущего значения
        prevIndex = currentIndex - 1; //запись предыдущего значения

        //перемещение элементов, что больше текущего на одну позицию вперед
        while (prevIndex >= 0 && array[prevIndex] > currentValue) { 
            array[prevIndex + 1] = array[prevIndex]; //смещение элемента на позицию вперед
            prevIndex = prevIndex - 1; //переход к следующему элементу
        }
        array[prevIndex + 1] = currentValue; //запись текущего значения в корректное место
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int error() {
    printf("Ошибка.");
    exit(1);
}

int main() {
    SetConsoleOutputCP(1251);
    int isDigit = 0;
    int length = 0;
    srand(time(0));
    
    printf("Введите размер массива:\t");
    isDigit = scanf("%d", &length);
    if (isDigit != 1 || length <= 0)
        error();

    int* array = malloc(length * sizeof(int));
    for (int i = 0; i < length; i++) {
        array[i] = rand() % 100;
    }

    printf("Исходный массив: \n");
    printArray(array, length);
    insertionSort(array, length);
    printf("\nСортированный массив: \n");
    printArray(array, length);

    free(array);
    return 0;
}
