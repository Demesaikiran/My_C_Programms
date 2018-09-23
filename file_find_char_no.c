#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){

	    FILE *finp;
	    FILE *output;
	    char letter;

	    int ex=0;

    if((finp=fopen(argv[1], "r")) == NULL){

        printf("Error Reading input!\n");

    }

    while((letter = fgetc(finp))!=EOF){

        /*From ASCII TABLE*/
        if(letter==33){
            ex++;}}

    if(output=fopen(argv[2], "w")){


        if(strcmp(argv[3],"!")==0){
            fprintf(output, "The character being written was '%s' and it occured %d
                    times", argv[3], ex);
        }
	
	 if(output==NULL){
            printf("ERROR\n");
            exit(1);
        }

    }
    fclose(finp);
}

