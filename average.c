//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int comparsionCounter;
//int swapCounter;
//
//void insertionSort(int* array, int length) {
//    int currentIndex, currentValue, prevIndex;
//    for (currentIndex = 1; currentIndex < length; currentIndex++) { //от второго элемента до последнего
//        currentValue = array[currentIndex]; //запись текущего значения
//        prevIndex = currentIndex - 1; //запись предыдущего значения
//
//        //перемещение элементов, что больше текущего на одну позицию вперед
//        while (prevIndex >= 0 && array[prevIndex] > currentValue) { 
//            comparsionCounter++;
//            array[prevIndex + 1] = array[prevIndex]; //смещение элемента на позицию вперед
//            swapCounter++;
//            prevIndex = prevIndex - 1; //переход к следующему элементу
//        }
//        array[prevIndex + 1] = currentValue; //запись текущего значения в корректное место
//    }
//}
//
//int main() {
//    SetConsoleOutputCP(1251);
//    srand(time(0));
//
//    FILE* file = fopen("data.csv", "w");
//    if (file == NULL) {
//        printf("Ошибка открытия файла.");
//        exit(1);
//    }
//    fprintf(file, "Размер массива;Среднее количество сравнений;Среднее количество перестановок\n");
//
//    //запись результатов для массивов длиной 100..10000 элементов с шагом 100
//    for (int length = 100; length <= 10000; length += 100) {
//        //сброс счетчиков
//        comparsionCounter = 0;
//        swapCounter = 0;
//
//        //пять раз
//        for (int i = 0; i < 5; i++) {
//            int* array = malloc(length * sizeof(int)); //создание
//
//            for (int index = 0; index < length; index++) {//заполнение
//                array[index] = rand() % 100;
//            }
//            insertionSort(array, length); //сортировка
//            free(array); //освобождение
//        }
//        fprintf(file, "%d;%.1f;%.1f\n", length, comparsionCounter / 5.0, swapCounter / 5.0);
//    }
//    fclose(file);
//    printf("Готово.");
//
//    return 0;
//}