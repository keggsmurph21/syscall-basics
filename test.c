#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *fp;
    char buf[255];

    fp = fopen("test.txt", "r");
    fgets(buf, 255, fp);
    printf("%s\n", buf);
    fclose(fp);

    return 0;
}
