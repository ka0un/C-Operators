#include <stdio.h>

int main()
{
	//==================================
	// C Operators & Operator Precedence
	//==================================
	
	// Operators

	// 1. Arithmatic Operators
	
	// + - / * %
	
	// 2. Logical / Boolean Operators
	
	// == != < > <= >=
	
	// 3. Assignement Operators
	
	// = += -= /= *=
	
	
	// Operator Precedence
	
	// Left To Right
	// Statement By Statement
	
	// 1. () i++ j--
	// 2. ++i --j (cast)
	// 3. * / %
	// 4. + -
	// 5. < <= > >=
	// 6. == !=
	// 7. &&
	// 8. ||
	// 9. ?:
	// 10. = += -= /= %=
	 
	// Question 01
	
	int a = 10;   // a=11 b=11 c=11
	int b = a++; 
	int c = ++b;
	
	printf("Q1 : %d \n", c); // 11
	
	// Question 02
	
	printf("Q2 : %d \n", a); // 11
	
	// Question 03
	
	int ans = 1 + 2 / 2;
	// 1 + 2 / 2;
	// 1 + 1;
	// 2
	printf("Q3 : %d \n", ans); // 2
	
	// Question 04
	
	int ans1 = 2 != 1;
	
	printf("Q4 : %d \n", ans1); // 1
	
	// boolean operators
	
	// true 1 false 0
	
	// 12 == 12
	// 1
	
	// 12 != 12
	// 0
	
	if(0){
		
		printf("allways runs on 1\n");
		
	}else{
		
		printf("allways runs on 0\n");
		
	}
	
	// Question 05
	
	int ans2 = 5 + 5 / 2 * (5 % 2 == 1);
	// 5 + 5 / 2 * (1 == 1)
	// 5 + 5 / 2 * (1)
	// 5 + 5 / 2 * 1
	// 5 + 5 / 2 * 1
	// 5 + 2 * 1
	// 5 + 2
	// 7 
	
	printf("Q5 : %d \n", ans2); // 7
	
	
	// Question 06
	
	int apple = 2; // 1
	int orange = 5; //6
	
	int ans3 = 1 + --apple + orange + ++orange; 
	// 1 + 1 + orange + ++orange
	// 1 + 1 + 5 + 6
	// 13
	
	printf("Q6 : %d \n", ans3);  //13
	
	// Question 07
	
	int k = 4;
	int l = k = 3;
	
	// Key - Assignment Operator allways returns the value in right side
	
	printf("Q7 : %d \n", k); // 3
	printf("Q7 : %d \n", l); // 3
	
	// Question 08
	
	int x = 20; // 60
	
	int y = x += 40; // 60
	
	// y = x += 40;
	// y = (x = x + 40)
	// y = (x = 60)
	// y = (60)
	// y = 60
	
	int z = y == 1 || y != 1;  
	
	// 1 || 1 = 1
	// 0 || 1 = 1
	// 1 || 0 = 1
	// 0 || 0 = 0
	
	printf("Q8 : %d \n", x); // 60
	printf("Q8 : %d \n", y); // 60
	printf("Q8 : %d \n", z); // 1
	
	// Question 09
	
	int last = 1 - 0 ? 2 : 5;
	// 1 ? 2 : 5
	// 2

	//(condition) ? if true : if false
	
	printf("Q9 : %d \n", last);// 2
	
}