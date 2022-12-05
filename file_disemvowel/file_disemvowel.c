#include <stdio.h>
#include <stdbool.h>

#define BUF_SIZE 1024

bool is_vowel(char c) {
    const char* vowels = "aeiouAEIOU";
    for (int j=0; j<10; ++j){
                if(c == vowels[j]){
                        return true;
                }
        }
    return false;
}

int copy_non_vowels(int num_chars, char* in_buf, char* out_buf) {
	int count=0
	for(int i=0; i<num_chars; i++){
		if(is_vowel(in_buf[i])){
		out_buf[count] = in_buf[i];
		count++
		}
	}
	return count;
}

void disemvowel(FILE* inputFile, FILE* outputFile) {
    /*
     * Copy all the non-vowels from inputFile to outputFile.
     * Create input and output buffers, and use fread() to repeatedly read
     * in a buffer of data, copy the non-vowels to the output buffer, and
     * use fwrite to write that out.
     */
}

int main(int argc, char *argv[]) {
    // This sets these to `stdin` and `stdout` by default.
    // You then need to set them to user specified files when the user
    // provides files names as command line arguments.
    FILE *inputFile;
    FILE *outputFile;

    if(argc == 1){
	    inputFile = stdin;
	    outputFile= stdout;
    }

    if(argc == 2){
	    inputFile = fopen(argv[1], "r");

    // Code that processes the command line arguments
    // and sets up inputFile and outputFile.

    disemvowel(inputFile, outputFile);

    return 0;
}
