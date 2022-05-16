#include "vste.h"

int main(int argc, char* argv[]){
    // char input_buf[1024];
    // for(int i = 0; i < 1024; i++)
        // input_buf[i] = '\0';
    // FILE *fp;
    // fp = fopen(argv[1], "a+"); //argv 0 is the name of the program
    // puts("\e[?1049h");
    // char in = 0;
    // int i;
    // for(i = 0; i < 1024; i++){
        // in = getchar();
        // input_buf[i] = in;
        // if(in == '>')
            // break;
    // }
    // fwrite(input_buf, 1, i, fp);
    // fclose(fp);
    // puts("\e[?10491");
    // return 0;
    vste(argv[1]); //pass the command line arg as file
    return 0;
}
