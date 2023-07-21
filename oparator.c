#include<stdio.h>

main(){
	
	
	//1
	int x = 10, y = 15;
	
	int ans = (x+y)*(x+y);
	
	printf("\t1\n (x+y)*(x+y)=%d",ans); 
	
	
	//2
	ans = (x-y)*(x-y);
	
	printf("\n\n\t2\n (x-y)*(x-y)=%d",ans);
	
	
	//3
	ans = (x+y)*3;
	
	printf("\n\n\t3\n (x+y)*3=%d",ans);
	
	
	//4
	ans = (x-y)*3;
	
	printf("\n\n\t4\n (x-y)*3=%d",ans); 
	
	
	//5
	int z = 35;
	
	ans = (x+y+z)*3;
	
	printf("\n\n\t5\n (x+y+z)*3=%d",ans); 
	
	
	//6	
	ans = (x-y-z)*3;
	
	printf("\n\n\t6\n (x-y-z)*3=%d",ans); 
	
	
	//7
	ans = (x+y+z)*(x+y+z);
	
	printf("\n\n\t7\n (x+y+z)*(x+y+z)=%d\n\n",ans);
	
	
}