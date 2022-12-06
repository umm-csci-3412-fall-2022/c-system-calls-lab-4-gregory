#include <stdlib.h>
#include <string.h>

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
	int count=0;
	for(int i=0; i<num_chars; i++){
		if(!is_vowel(in_buf[i])){
		out_buf[count] = in_buf[i];
		count++;
		}
	}
	return count;
}

void disemvowel(FILE* inputFile, FILE* outputFile) {

	
	char in_buf[BUF_SIZE];
	char out_buf[BUF_SIZE];
	int charCount = fread(in_buf, sizeof(char), BUF_SIZE, inputFile);

	while(charCount != 0){
		int count = copy_non_vowels(charCount, in_buf, out_buf);
		fwrite(out_buf, sizeof(char), count, outputFile);
		charCount = fread(in_buf, sizeof(char), BUF_SIZE, inputFile);
	}
}

int main(int argc, char *argv[]) {
    FILE *inputFile;
    FILE *outputFile;

    if(argc == 1){
	    inputFile = stdin;
	    outputFile= stdout;
    }

    if(argc == 2){
	    inputFile = fopen(argv[1], "r");
	    outputFile = stdout;
    }

    if (argc == 3){
	    inputFile = fopen(argv[1], "r");
	    outputFile = fopen(argv[2], "w");
    }

    disemvowel(inputFile, outputFile);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
