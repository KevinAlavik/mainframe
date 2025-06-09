/* mainframe v1.0 Copyright (c) 2025 Kevin Alavik */
#include <stdio.h>
#include <stdlib.h>
#include <lib/mf.h>

/* Entry point */
int mf(char** args) {
    int i = 0;
    while (args[i] != NULL) {
        printf("%s\n", args[i]);
        i++;
    }
    return EXIT_SUCCESS;
}

/* Bootstrap */
int main(int argc, char** argv) {
    int result = 0;
    char** args = NULL;
    int i = 0;

    /* Setup any libraries */
    if(libmf_init() != 0) {
        fprintf(stderr, "error: Failed to initialize libmf\n");
        return EXIT_FAILURE;
    }

    /* Setup args array */
    args = malloc((argc + 1) * sizeof(char*));
    if (args == NULL) {
        fprintf(stderr, "error: Failed to allocate memory\n");
        return EXIT_FAILURE;
    }

    for (i = 0; i < argc; i++) {
        args[i] = argv[i];
    }
    args[argc] = NULL;

    /* Call entry */
    result = mf(args);
    
    /* Cleanup */
    free(args);
    return result;
}

