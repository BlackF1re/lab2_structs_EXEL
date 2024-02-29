//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int comparsionCounter;
//int swapCounter;
//
//void insertionSort(int* array, int length) {
//    int currentIndex, currentValue, prevIndex;
//    for (currentIndex = 1; currentIndex < length; currentIndex++) { //�� ������� �������� �� ����������
//        currentValue = array[currentIndex]; //������ �������� ��������
//        prevIndex = currentIndex - 1; //������ ����������� ��������
//
//        //����������� ���������, ��� ������ �������� �� ���� ������� ������
//        while (prevIndex >= 0 && array[prevIndex] > currentValue) { 
//            comparsionCounter++;
//            array[prevIndex + 1] = array[prevIndex]; //�������� �������� �� ������� ������
//            swapCounter++;
//            prevIndex = prevIndex - 1; //������� � ���������� ��������
//        }
//        array[prevIndex + 1] = currentValue; //������ �������� �������� � ���������� �����
//    }
//}
//
//int main() {
//    SetConsoleOutputCP(1251);
//    srand(time(0));
//
//    FILE* file = fopen("data.csv", "w");
//    if (file == NULL) {
//        printf("������ �������� �����.");
//        exit(1);
//    }
//    fprintf(file, "������ �������;������� ���������� ���������;������� ���������� ������������\n");
//
//    //������ ����������� ��� �������� ������ 100..10000 ��������� � ����� 100
//    for (int length = 100; length <= 10000; length += 100) {
//        //����� ���������
//        comparsionCounter = 0;
//        swapCounter = 0;
//
//        //���� ���
//        for (int i = 0; i < 5; i++) {
//            int* array = malloc(length * sizeof(int)); //��������
//
//            for (int index = 0; index < length; index++) {//����������
//                array[index] = rand() % 100;
//            }
//            insertionSort(array, length); //����������
//            free(array); //������������
//        }
//        fprintf(file, "%d;%.1f;%.1f\n", length, comparsionCounter / 5.0, swapCounter / 5.0);
//    }
//    fclose(file);
//    printf("������.");
//
//    return 0;
//}