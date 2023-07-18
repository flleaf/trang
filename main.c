#include <stdint.h>
#include <limits.h>
#include <math.h>
#include <assert.h>

#include "parser.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Error: expected 1 command line arguments but got none\n");
        exit(1);
    }
    char *filepath = argv[1];
    parse(filepath);
    save_audio("out.wav");
    return 0;
}
