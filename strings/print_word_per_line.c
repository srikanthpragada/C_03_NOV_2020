// Print each word on a separate line

void main()
{
 char st[50] = "How do you do today?";
 int i;

    for(i=0;  st[i] != '\0'; i ++)
    {
        if (st[i] == ' ')
           putch('\n');
        else
           putch(st[i]);
    }

}
