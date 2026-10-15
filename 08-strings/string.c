 #include<stdio.h>

 int main()
{

    char name[] = "abdullah ashraf";

    printf("%s\n",name);

    name[0] = 'A';
    name[9] = 'A';

    printf ("%s\n",name);

    printf("%c\n",name[7]);

    int length = sizeof(name)/sizeof(name[0]);

    for (int i = 0 ; i < length ; i++)
    {

      printf ("%c\n",name[i]);

    }

    char greeting[] = {'h','e','l','l','o',' ','w','o','r','l','d','\0'};

    printf ("%s\n",greeting);

    printf ("%s i am %s\n",greeting,name);

    printf("%d  %d ",sizeof(name),sizeof(greeting));



    return 0;
}