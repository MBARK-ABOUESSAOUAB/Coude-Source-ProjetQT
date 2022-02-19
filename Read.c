#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {

    char *filename = argv[1];
    FILE *fp;
    char buf[100];
    char c;
    fp = fopen(filename, "r");
    int i;

   	while (!feof(fp)) {
   	c = fgetc(fp);
        printf("%c",c);
    	}
   fclose(fp);
    exit(EXIT_SUCCESS);
}
