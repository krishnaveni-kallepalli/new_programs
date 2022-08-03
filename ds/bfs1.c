/* Write a C program to implement Bredth First Search for a graph.

Program:
*/
#include<stdio.h>
 #include<conio.h>
int front=0,rear=0,size=20;
int a[20][20],q[20],visited[20],n,i,j,item; 
void bfs();
void enqueue(int);
 int dequeue(); 
void main()
{
int s; 
clrscr();
printf("\n Enter the number of vertices: "); 
scanf("%d",&n);
for(i=1;i<=n;i++)
{
visited[i]=0;
}
printf("\n Enter Adjacency matrix:\n");
 
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n Enter the starting vertex: ");
 scanf("%d",&s);
enqueue(s);	/* Enqueue the starting vertex into the QUEUE */
printf("\n BFS for Given graph is"); 
bfs();
getch();
} 

void bfs()
{
int v;
while(front!=0 && rear !=0)	/* While the QUEUE is not EMPTY */
{
v=dequeue();	/* Dequeue vertex from QUEUE */ if( visited[v]==0)	/* If Dequeued vertex is not visited */
{
visited[v]=1;
 printf("\n %d",v);
 for(i=1;i<=n;i++)
{
if(a[v][i]==1)
{
enqueue(i);	/* Enqueue ALL THE ADJACENT VERTICES OF vertex V */
}
}
}
}
}
 
void enqueue(int item)
{
if(rear==size)
{
printf("\n Queue is full ");
}
else
{
if(front==0 && rear==0)
{
 front=1;
 rear=rear+1;
 q[rear]=item;
}
else
{
rear=rear+1;
 q[rear]=item;
}
}
}
  
int dequeue()
{
int item;
if(front==0 && rear==0)
{
printf("\n Queue is empty");
 return 0;
}
else
{
if(front==rear)
{ 
item=q[front];
front=0;
 rear=0; 
return item;
}
else
{
item=q[front]; 
front=front+1; 
return item;
}
}
}
