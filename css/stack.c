#include <stdio.h>
int max;
int q[100];
int f = -1,r=-1;

int equeue(int item) {
  if (r== max - 1)
    printf("queue is full");
  else
    printf("Enter the element");
  scanf("%d", &item);
  r = r + 1;
  q[r] = item;
  return item;
}
int dequeue() 
{
    int item;
  if (f== -1 && r==-1)
    printf("Stack is underflow");
  else
    printf("%d is the delete element", q[r]);
  item = q[r];
  r = r - 1;
  return 0;
}
int disp()
{
    int i;
    for(i=0;i<max;i++)
    printf("%d\n",q[i]);
}
    
int main() {
    printf("ENter the length ");
    scanf("%d",&max);
    for(int n=0;n<max;n++)
{    
  equeue(n);
}
  
  disp();
  dequeue();
  disp();
  return 0;
}
