#include<stdio.h>
int  main()
{
	if(7)
		printf("hi\n");//looking for else block(optional)for if block 
		printf("bye\n");//considers as outside if block
  else//error (where is if block for this else block?)if is mandatory
		printf("all\n");
		printf("bye\n");
	return 0;
}


