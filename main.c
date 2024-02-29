#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int* array, int length) {
    int currentIndex, currentValue, prevIndex;
    for (currentIndex = 1; currentIndex < length; currentIndex++) { //�� ������� �������� �� ����������
        currentValue = array[currentIndex]; //������ �������� ��������
        prevIndex = currentIndex - 1; //������ ����������� ��������

        //����������� ���������, ��� ������ �������� �� ���� ������� ������
        while (prevIndex >= 0 && array[prevIndex] > currentValue) { 
            array[prevIndex + 1] = array[prevIndex]; //�������� �������� �� ������� ������
            prevIndex = prevIndex - 1; //������� � ���������� ��������
        }
        array[prevIndex + 1] = currentValue; //������ �������� �������� � ���������� �����
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int error() {
    printf("������.");
    exit(1);
}

int main() {
    SetConsoleOutputCP(1251);
    int isDigit = 0;
    int length = 0;
    srand(time(0));
    
    printf("������� ������ �������:\t");
    isDigit = scanf("%d", &length);
    if (isDigit != 1 || length <= 0)
        error();

    int* array = malloc(length * sizeof(int));
    for (int i = 0; i < length; i++) {
        array[i] = rand() % 100;
    }

    printf("�������� ������: \n");
    printArray(array, length);
    insertionSort(array, length);
    printf("\n������������� ������: \n");
    printArray(array, length);

    free(array);
    return 0;
}
