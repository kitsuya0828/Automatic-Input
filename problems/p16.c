#include <stdio.h>

void sort(int *array, int size) {
    int tmp;
    for (int i=0; i<size-1; i++) {
        for (int j=i+1; j<size; j++) {
            if (array[j] > array[i]) {
                tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }
}

int kaprekar(int *sortedArray) {
    int maxNum = 100*sortedArray[0] + 10*sortedArray[1] + 1*sortedArray[2];
    int minNum = 100*sortedArray[2] + 10*sortedArray[1] + 1*sortedArray[0];
    printf("%3d - %3d = %3d\n", maxNum, minNum, maxNum-minNum);
    return maxNum - minNum;
}


int main() {
    int x;
    scanf("%d",&x);

    if (x>999 || x%111==0) {
        printf("ERROR!\n");
        return 0;
    }


    int numArray[3];

    while (1) {
        
        for (int i=0; i<3; i++) {
            numArray[i] = x%10;
            x /= 10;
        }

        sort(numArray,3);
        x = kaprekar(numArray);

        if (x==495) {
            break;
        }
    }

}