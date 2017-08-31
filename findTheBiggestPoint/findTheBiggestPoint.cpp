#include <stdio.h>
#include <stdlib.h>

typedef struct point{
	int x;
	int y;
	int state;
}Point;

int n;
Point* point;
void input(){
	scanf("%d",&n);
	int i;
	point = (Point*)malloc(sizeof(Point)*n);	
	for (i = 0; i < n; ++i)	{
		scanf("%d%d",&point[i].x,&point[i].y);		
		point[i].state = 1;
	}
}

void find(Point* curPoint,int index){
	if(index == n )return;	
	for (int i = 0; i < n; ++i) {
		if(curPoint[index].x < point[i].x && curPoint[index].y < point[i].y){
			curPoint[index].state = 0;
		}
	}
	find(curPoint,index+1);
}

void order(Point *a,int i,int j) {
	int m,n;Point temp;int k;
	m=i;n=j;
	k=a[(i +j)/2].x;
	do {
		while(a[m].x<k&&m<j) m++;
		while(a[n].x>k&&n>i) n--;
		if(m<=n) {
			temp=a[m];
			a[m]=a[n];
			a[n]=temp;
			m++;
			n--;
		}
	}while(m<=n);
	if(m<j) order(a,m,j);
	if(n>i) order(a,i,n);
}

void output(){		
	printf("\n");
	order(point,0,n-1);
	for (int i = 0; i < n; ++i)	{
		if(point[i].state == 1){
			printf("%d %d\n", point[i].x, point[i].y);
		}
	}	
}

void main(){
	input();
	find(point,0);
	output();
}