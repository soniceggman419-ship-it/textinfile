#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    const char *output_file = NULL;

    /* Parse arguments */
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-o") == 0) {
            if (i + 1 >= argc) {
                fprintf(stderr, "textinfile: -o requires a filename\n");
                return EXIT_FAILURE;
            }

            output_file = argv[++i];
        } else {
            fprintf(stderr, "Usage: %s -o file\n", argv[0]);
            return EXIT_FAILURE;
        }
    }

    if (output_file == NULL) {
        fprintf(stderr, "textinfile: output file not specified\n");
        fprintf(stderr, "Usage: %s -o file\n", argv[0]);
        return EXIT_FAILURE;
    }

    /* Open output file */
    FILE *file = fopen(output_file, "w");
    if (file == NULL) {
        perror("textinfile");
        return EXIT_FAILURE;
    }

    /* Copy stdin to the output file */
    char buffer[4096];
    size_t bytes_read;

    while ((bytes_read = fread(buffer, 1, sizeof(buffer), stdin)) > 0) {
        if (fwrite(buffer, 1, bytes_read, file) != bytes_read) {
            perror("textinfile: write");
            fclose(file);
            return EXIT_FAILURE;
        }
    }

    if (ferror(stdin)) {
        perror("textinfile: read");
        fclose(file);
        return EXIT_FAILURE;
    }

    fclose(file);

    return EXIT_SUCCESS;
}
