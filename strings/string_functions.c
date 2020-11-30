// String functions demo

void main()
{
 char st1[30], st2[30];
 int i;

    printf("Enter a string :");
    gets(st1);

    strcpy(st2,st1);
    strupr(st2);
    strrev(st2);

    puts(st1);
    puts(st2);


}
