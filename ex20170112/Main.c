#include<stdio.h>
void PrintStrings(char *str) {
	int i;
	for (i = 0; str[i]; ++i) //? 
	printf("%c", str[i]);
	printf("\n");
}
void main() {
	char* s;
	s = "ABC";
	PrintStrings(s);
	PrintStrings("Hello!");

}

//#include<stdio.h>
//void PrintStrings(char *str) {
//	printf("%s\n", str);
//}
//void main() {
//	char* s;
//	s = "ABC";
//	PrintStrings(s);
//	PrintStrings("Hello!");
//	
//}
//

//#include<stdio.h>
//void main() {
//	char* s;
//	s = "ABC";
//	printf("%c %d\n", s[0], s[0]); // %s 가아니라 %c이거나 %d여야함 
//	printf("%c %d\n", s[1], s[1]); // %s 가아니라 %c이거나 %d여야함 
//	printf("%c %d\n", s[2], s[2]); // %s 가아니라 %c이거나 %d여야함 
//	printf("%c %d\n", s[3], s[3]); // %s 가아니라 %c이거나 %d여야함 
//}


//#include<stdio.h>
//void main() {
//	char* s;
//	s = "ABC";
//	printf("%c %c\n", s[0], "ABC"[0]); // %s 가아니라 %c이거나 %d여야함 
//	printf("%c %c\n", s[1], "ABC"[1]); // %s 가아니라 %c이거나 %d여야함 
//	printf("%c %c\n", s[2], "ABC"[2]); // %s 가아니라 %c이거나 %d여야함 
//}

//#include<stdio.h>
//void main() {
//	char* s;
//	s = "ABC";
//	printf("%c %c\n", s[0], "ABC"[0]); // %s 가아니라 %c이거나 %d여야함 
//}

//#include<stdio.h>
//void main() {
//	char* s;
//	s = "ABC";
//	printf("%s %s\n", s,"ABC");
//	printf("%s%s\n", s+1, "ABC"+1); //주소연산
//	printf("%s %s\n", s+2, "ABC"+2);
//}


//#include<stdio.h>
//void main() {
//	char* s;
//	s = "ABC";
//	printf("%s\n", s);
//}

//#include<stdio.h>
//void main() {
//	for (int i = 0; i < 26; ++i) {
//		printf("%d %c\n", i + 'A', i + 'A');
//	}
//}

//#include<stdio.h>
//void main() {
//	for (int i = 0; i < 26; ++i) {
//		printf("%d %c\n", i+'A', i+'A');
//	}
//}


//#include<stdio.h>
//void main() {
//	for (int i = 'A'; i <='Z'; ++i) {
//		printf("%d %c\n", i, i);
//	}
//}

//#include<stdio.h>
//
//void main() {
//	char c = 'A'; // Char c= 65;
//	printf("%d %c", c, c);
//	printf("%d %c", c+1, c+1);
//	printf("%d %c", c+2, c+2);
//}

//#include<stdio.h>
//
//void main() {
//	char c = 'A'; // Char c= 65;
//	printf("%d %c", c, c);
//}
//#include<stdio.h>
//void Increment(int *pn){
//	++*pn;
//}
//
//void main() {
//	int n = 10;
//
//	printf("%d\n", n);
//	Increment(&n);
//	printf("%d\n", n);
//	Increment(&n);
//	printf("%d\n", n);
//
//}

//#include<stdio.h>
//void Swap(int *pa, int *pb) {
//	int temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//
//}
//
//void main() {
//	int a = 10, b = 20;
//
//	printf("%d %d\n", a, b);
//	Swap(&a,&b);
//	printf("%d %d\n", a, b);
//}
//#include<stdio.h>
//void main() {
//	int a = 10, b = 20;
//	int temp;
//	printf("%d %d\n", a, b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d\n", a, b);
//}


//#include<stdio.h>
////call by value, call by reference
//void Add(int a, int b, int* psum) {
//	*psum= a + b;
//}
//void main() {
//	int a = 10, b = 20;
//	int sum;
//
//	Add(a, b, &sum);
//	printf("sum = %d\n", sum);
//}

//#include<stdio.h>
//int Add(int a, int b) {
//	return a + b;
//}
//void main() {
//	int a = 10, b = 20;
//	int sum;
//
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//}

//#include<stdio.h>
//void PrintArray(int *pa) {
//	int i;
//	for (i = 0; i < 5; ++i) {
//		printf("%d\n", pa[i]);
//	}
//}
//void main() {
//	int arr[5] = { 10,20,30,40,50 };
//	PrintArray(arr);
//
//}


//#include<stdio.h>
//void PrintArray(int *pa) {
//	int i;
//	for (i = 0; i < 5; ++i) {
//		printf("%d\n", pa[i]);
//	}
//}
//void main() {
//	int arr[5] = { 10,20,30,40,50 };
//	PrintArray(arr);
//
//}
//

//#include<stdio.h>
//void main() {
//	int arr[5] = { 10,20,30,40,50 };
//	int *pa = arr;
//for(int i =0; i<4; ++i){
//	printf("%d\n", pa[i]);
//}
//}


//#include<stdio.h>
//int totalInteger(int a, int b) {
//	int sum=0;
//	for (int i = a; i <= b; ++i) {
//		sum += a;
//	}
//	return sum;
//}
//void main() {
//	int sum=	totalInteger(2, 5);
//	printf("%d", sum);
//	}

//#include<stdio.h>
//int totalInteger() {
//	int sum=0;
//	for (int i = 1; i < 11; ++i) {
//		sum += i;
//
//	}
//		return sum;
//}
//void main() {
//	int sum =totalInteger();
//	printf("%d", sum);
//}
//#include<stdio.h>
//void PrintHello() {
//	printf("hello");
//}
//void main() {
//	PrintHello();
//}

//#include<stdio.h>
//
//void main() {
//	int arr[4] = { 1,2,3,4 };
//	int* p;
//
//	p = arr;
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	printf("%p %p %p %p \n", p[0], p[1], p[2], p[3], p[4]);
//}

//#include<stdio.h>
//
//void main() {
//	int arr[4] = { 1,2,3,4 };
//	int* p;
//	p = &arr[0]; // p = arr; 과같음
//	printf("%d\n", *p);
//	p = &arr[1]; // p = arr+1;
//	printf("%d\n", *p);
//	p = &arr[2]; // p = arr+2;
//	printf("%d\n", *p);
//
//}

//#include<stdio.h>
//
//void main() {
//	int arr[4] = { 1,2,3,4 };
//	printf("%p %p \n", arr, &arr[0]);
//	printf("%p %p \n", arr + 1, &arr[0] + 1);
//	printf("%p %p \n", arr + 2, &arr[0] + 2);
//	printf("%p %p \n", arr + 3, &arr[0] + 3);
//}
//

//#include<stdio.h>
//
//void main() {
//	int arr[4] = { 1,2,3,4 };
//	printf("%p %p \n", arr, &arr[0]);
//	printf("%p %p \n", arr+1, &arr[0]+1);
//	printf("%p %p \n", arr+2, &arr[0]+2);
//	printf("%p %p \n", arr+3, &arr[0]+3);
//}

//#include<stdio.h>
//
//void main() {
//	int n = 100;
//	printf("%p\n", &n);
//	printf("%p\n", &n + 1);
//	printf("%p\n", &n + 2);
//	printf("%p\n", &n - 1);
//}
//#include<stdio.h>
//
//void main() {
//	int arr[4] = { 10, 20, 30, 40 };
//	printf("%d", sizeof(arr)/sizeof(int));
//
//}

//#include<stdio.h>
//
//void main() {
//	int arr[4] = { 10, 20, 30, 40 };
//	printf("%p\n", arr);
//	printf("%d %d %d", sizeof(arr), sizeof(arr[0]), sizeof(&arr[0]));
//
//}

//#include<stdio.h>
//
//void main() {
//	int arr[4] = { 10, 20, 30, 40 };
//	printf("%p\n", arr);
//	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
//
//}


//#include<stdio.h>
//
//void main() {
//	int arr[4] = { 10, 20, 30, 40 };
//	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
//
//}

//#include<stdio.h>
//
//void main() {
//	int n = 10;
//	int *p = &n;
//	int ** pp = &p;
//	printf("%d %d %d", n, *p, *&n);
//	printf("%p %p %p", &n, p, *pp);
//}
//


//#include<stdio.h>
//
//void main() {
//	int n = 10;
//	int *p = &n;
//
//	printf("%d %d %d", n, *p, *&n);
//}