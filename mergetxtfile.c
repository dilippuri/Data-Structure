#include <dirent.h>
#include <stdio.h>
#include <regex.h>//library for regular expression

int main(void){

  FILE *fp1, *fp2;	//pointer for reading and writing files
  char c;
  regex_t regex;	//regular expression variable
  int reti;

	/*compile regular expression */
  reti = regcomp(&regex, "^.*.txt$", 0);	//all the file which has .txt extension set 'reti' variable
  if (reti) {
      fprintf(stderr, "Could not compile regex\n");	//if fails to create regular expression
  }

  DIR *d;					//directory pointer
  struct dirent *dir;				//structure dirent
  d = opendir(".");
  if (d){
      while ((dir = readdir(d)) != NULL){
            reti = regexec(&regex, dir->d_name, 0, NULL, 0);	//check for file name which match to regular expression
            if (!reti) {
                fp1 = fopen("final.txt", "a");			//create 'final.txt' file if not exist
                fp2 = fopen(dir->d_name, "r");			//open file which has .txt extenssion
			// Read contents from file
			c = fgetc(fp2);
			while (c != EOF) {			//coping content into 'final.txt'(acutally append)
			        fputc(c, fp1);
			        c = fgetc(fp2);
			}

                fcloseall();
            }
          }
        closedir(d);
    }
	printf("All file(s) are merged.\n");
    regfree(&regex);
    return(0);
}
