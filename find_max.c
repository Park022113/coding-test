#include <stdio.h>
#include <assert.h>

int find_max(int *arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int test_1() {
    int data[5] = {12, 88, 3, 42, 7};
    int result = find_max(data, 5);
    assert(result == 88);
    return 1;
}

int test_2() {
    int data[5] = {12, 88, 3, 42, 7};
    int result = find_max(data, 6);
    assert(result == 88);
    return 1;

}

int test_3() {
    int data[11] = {0,1,2,3,4,5,6,7,8,9,10};
    int result = find_max(data, 11);
    assert(result == 10);
    return 1;
}

int test_4() {
    int data[10] = {10,9,8,7,6,5,4,3,2,1};
    int result = find_max(data, 10);
    assert(result == 10);
    return 1;
}

void main() {
    int cnt = 0;
    cnt += test_1();
    cnt += test_2();
    cnt += test_3();
    cnt += test_4();
    if (cnt == 4) {
        printf("[PASS] %d/4 tests !\n", cnt);
    } 
}
