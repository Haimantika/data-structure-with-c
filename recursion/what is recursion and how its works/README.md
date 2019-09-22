Recursion: Recursion is a process in which a function calls itself directly or indirectly.

* In which order control is going forword directon in the same order control should come back and where it starts the execution there only it should complete the execution.

	For example we took a Factorial program :
		--In this program we need to find the factorial of given number using recursion--


#include<stdio.h>
fact(int n){     
                int n;
	        int res;

		if (n==0){
				res = 1;
			   }
		else{
			res = n*fact(n-1);
          		       }
     		return res;
	     }


main(){
		int n;
		int res;
                        printf(“enter the number you want to finds its factorial”);
		scanf(“%d”,&n);
		res = ract(n);
		printf(“%d”,res);
	}


now in this program if we give input n = 3
	then in fact(int n) part we will get n = 3 and the if part will not satisfied,
		so it will go for the else part --
                             where res = n*fact(n-1)
    for this part the computer will create a stack memory:
    
     
Here i made a block diagram for better understanding how memory and reverse and forward path will work for recursion: 

![New Doc 2019-09-22 18 45 23_1](https://user-images.githubusercontent.com/33360400/65389845-c48e0800-dd77-11e9-88d0-18ce83aecac2.png)





