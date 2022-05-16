#include "vste.h"

void vste(char* file){
    char input_buf[1024];
    int i;
    for(i = 0; i < 1024; i++)
        input_buf[i] = '\0';
    
    FILE * fp;
    fp = fopen(file, "a");

    puts("\e[?1049h");
    char c;
    c = fgetc(fp);

    while(c != EOF)
    {
        printf("%c", c);
    }

    char in = '\0';
    for(i = 0; i < 1024; i++)
    {
        in = getchar();
        input_buf[i] = in;
        if(in == '`')
            break;
    }
    fwrite(input_buf, 1, i, fp);
    fclose(fp);
    puts("\e[?10491");
}
