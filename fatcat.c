#include <stdio.h>
// import standard library

int main(int argc, char **argv)
// main function that takes in arguments and returns out an integer
{
    if (argv[1] == NULL)
    {
      return 0;
    }
    FILE *file;
    // define file as a structure to store the file
    char *filename = argv[1];
    // set file name variable to the first argument
    file = fopen(filename, "r");
    // reed file as and store content in variable file.
    char s;
    // define variable s as a character
    printf("\n\n");
    printf("File Name:\t%s\n", filename);
    printf("\n");
    int linenumber = 0;
    printf("\e[31m%d\t\b\b\b\b│ \e[0m", linenumber);
    while((s=fgetc(file))!= EOF)
    // while the file is not end of file do the following. Store character from file variable.
	{
		printf("%c",s);
       // print all the characters store in s.
 	  switch(s){
    case '\n':
      linenumber++;
      printf("\e[31m%d\t\b\b\b\b│ \e[0m", linenumber);
      s = '\n';
    }
	}
    printf("\n\n");
	return 0;
    // return 0, a standard in Unix if successfully executed.
}
