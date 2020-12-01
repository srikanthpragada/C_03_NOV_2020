
void alphabets(char st[])
{
  int i;

     for(i=0; st[i] != '\0'; i ++)
         if (isalpha(st[i]))
             putch(st[i]);

}


void main()
{
    char s[] = {"Welcome 2021. Goodbye 2020"};

      alphabets(s);
}
