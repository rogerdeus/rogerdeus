#include <stdio.h>

void hoje(int data[]) {
    printf("%d/%d/%d", data[0], data[1], data[2]);
}

int main() {
    int data[3] = {4, 11, 2005};
    hoje(data);
    printf("\n");
    return 0;
}