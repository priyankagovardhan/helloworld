#include<stdio.h>

struct us
{ int x;
  char c;
};

struct us  a[6]={{1},{2},{3},{4},{5},{6}},b[6],t;
main()
{  int i;
    printf("size of struct us is %d\n",sizeof(a));
    for(i=0;i<6;i=i+1)
    {   printf("%d\n",a[i].x);
    }
//    b[i]=0;
 for(i=0;i<12;i++)
{  //a[i].c='A';
  b[2*i].x=a[i].x;
  b[2*i-1].x=0;
  //printf("%c+%d\n",'A',b[i].x);
 if(1!=i%2)
{ b[i].x=b[i].x;


  printf("%c+%d\n",'A',b[i].x);
}
}
}
