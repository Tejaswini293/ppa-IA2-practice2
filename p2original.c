#include<stdio.h>
int input_side()
{
  int a;
  printf("enter a value\n");
  scanf("%d",&a);
  return 0;
}
int check_scalene(int a,int b,int c)
{
  int equilateral,isosceles,scalene,r;
  if (a==b && b==c)
  {
    r=equilateral;
  }
  else if(a!=b && b==c && a==c)
  {
    r=isosceles;
  }
  else
  {
    r=scalene;
  }
}
void output(int a,int b,int c,int scalene)
{
  if(a==b && b!=c)
  {
    printf("triangle is equilateral\n");
  }
  else
  {
    printf("triangle is scalene\n");
  }
}
int main()
{
  int a,b,c,scalene;
  a=input_side();
  b=input_side();
  c=input_side();
  check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
  }
