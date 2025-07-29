	/*#include <stdio.h>
	int main()
	{
	 int x;
	 for(x=0; x<10; x=x+1)
	 {
	 puts("Sore shoulder surgery");
	 }
	 return(0);
	}
	*//*
	#include <stdio.h>
	int main()
	{
	 int duo;
	 for(duo=2;duo<=100;duo=duo+2)
	 {
	 printf("%d\t",duo);
	 }
	 putchar('\n');
	 return(0);
	}
	*//*
	#include <stdio.h>
	int main()
	{
	 char alphabet;
	 for(alphabet='A';alphabet<='Z';alphabet=alphabet+1)
	 {
	 printf("%s",&alphabet);
	 }
	 putchar('\n');
	 return(0);
	}*/
	#include <stdio.h>
	int main()
	{
	 int alpha,code;
	 for(alpha='A';alpha<='Z';alpha=alpha+1)
	 {
		 for(code=1;code<=7;code=code+1)
			 {
	 printf("%c%d\t",alpha,code);
	 }
		 putchar('\n'); /* end a line of text */
	 }
	 return(0);
	}

