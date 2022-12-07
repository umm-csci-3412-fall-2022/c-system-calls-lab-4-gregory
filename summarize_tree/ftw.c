#include <ftw.h>
#include <stdio.h>

static int file_count = 0;
static int dir_count = 0;

static int callback(const char *fpath, const struct stat *sb, int typeflag) {
    if(typeflag ==0){
	   file_count++;
    }
   if(typeflag ==1){
           dir_count++;
    }
 return 0;
}

#define MAX_FTW_DEPTH 16

int main(int argc, char** argv) {
    ftw(argv[1], callback, MAX_FTW_DEPTH);

    printf("There were %d directories.\n", dir_count);
    printf("There were %d regular files.\n", file_count);
}
