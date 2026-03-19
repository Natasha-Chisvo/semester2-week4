
/*
Name:Natasha Chisvo
Student ID: 201553125
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer

    char buffer[100] = "";

    // process the command-line data using appropriate string functions

    //* need to go through argv[1] --> agrv[argc-1]
    for (int i = 1; i<argc; i++){
        //join together values using strcat
        strcat(buffer, argv[i]);

        //*put a dash between each variable in buffer while i<argc-1
        if (i<argc - 1){
            strcat(buffer, "-");
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}