/*11.a. Write a C program to implement Depth First Search for a graph.

Program:
*/
#include<stdio.h> 
#include<conio.h> 
int top=0,size=20,v;
int a[20][20],s[20],visited[20],n,i,j,item,st; 
void push(int);
int pop(); 
void dfs();
 void main()
{
printf("\n Enter the number of vertices: ");
 scanf("%d",&n);
for(i=1;i<=n;i++)
{
visited[i]=0;
}
printf("\n Enter Adjacency matrix: \n"); 
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n Enter the starting vertex: "); 
scanf("%d",&st);
push(st);	/* PUSH the starting vertex into the STACK */ 
printf("\n DFS for Given graph is");
dfs();
}
 
void dfs()
{
while(top!=0)	/* While the STACK is not EMPTY */
{
v=pop();	/* POP vertex from STACK */
if(visited[v]==0)	/* If the poped vertex is not visited */
{
visited[v]=1;	/* Visit the poped vertex */ 
printf("\n %d",v);
for(i=1;i<=n;i++)
{
if(a[v][i]==1)
{
push(i);	/* PUSH ALL THE ADJACENT VERTICES OF vertex V in to STACK */
}
}
}
}
}

void push(int item)
{
if(top==size)
{
printf("\n Stack is full ");
}
else
{
top=top+1; 
s[top]=item;
}
}
  
int pop()
{
int item;
if(top==0)
{
printf("\n Stack is empty"); 
return 0;
}
else
{
item=s[top];
top=top-1;
return item;
}
}
 

