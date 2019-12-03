//
// Created by xiaochen on 2019-08-12.
//

#include <stdlib.h>
#include <stdio.h>

int main() {
    char *s = "abcde";
    int checksum = 0;
    for (int i = 0; s[i] != 0; i++) {
        putchar(s[i]);
        checksum ^= s[i];
        putchar('\n');
    }
    printf("%d\n", checksum);
    putchar(checksum);
}
