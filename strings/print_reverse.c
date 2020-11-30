

void main()
{
 char name[30];
 int i;

    printf("Enter a string :");
    gets(name);

    for(i=0; name[i] != '\0' ; i ++)
           ;

    for(i--; i >= 0; i --)
        putch(name[i]);

}
