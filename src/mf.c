/* mainframe v1.0 Copyright (c) 2025 Kevin Alavik */
#include <stdio.h>
#include <stdlib.h>

static int r = EXIT_SUCCESS;

/* Entry point */
void mf() {
    printf("Hello, World!\n");
}

/* Bootstrap */
int main(void) {
    mf();
    goto exit;
exit:
    return r;
}

