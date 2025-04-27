#include <stdio.h>

int main() {
    char s1[100], s2[100], s3[100];

    printf("Digite a primeira string: ");
    scanf("%s", s1);

    printf("Digite a segunda string: ");
    scanf("%s", s2);

    printf("Digite a terceira string: ");
    scanf("%s", s3);

    printf("\nStrings em ordem alfabética:\n");

    if ((s1[0] <= s2[0]) && (s1[0] <= s3[0])) {
        printf("%s\n", s1);
        if (s2[0] <= s3[0]) {
            printf("%s\n%s\n", s2, s3);
        } else {
            printf("%s\n%s\n", s3, s2);
        }
    } else if ((s2[0] <= s1[0]) && (s2[0] <= s3[0])) {
        printf("%s\n", s2);
        if (s1[0] <= s3[0]) {
            printf("%s\n%s\n", s1, s3);
        } else {
            printf("%s\n%s\n", s3, s1);
        }
    } else {
        printf("%s\n", s3);
        if (s1[0] <= s2[0]) {
            printf("%s\n%s\n", s1, s2);
        } else {
            printf("%s\n%s\n", s2, s1);
        }
    }

    return 0;
}
