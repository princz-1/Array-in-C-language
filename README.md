# Array-in-C-language

# What is Array? Explain types of array?

A variable can store only one value at a time. When we want to store multiple values for a single variable, then array is used.

Array is a derived data type used to store, accessing and manipulating large amount of data.

Array is a fixed size variable that can collect elements of similar data items stored in contiguous memory locations(First element boundary is connected to the next). The complete set of values is referred to as array and individual value are called element.

# Types of Array:

1. One dimensional

2. Multi dimensional

1. 1-D array: One-dimensional arrays, also known as single arrays, are arrays with only one dimension or a single row.

Array Declaration: data_type array_name [size]; int a[10]; float b[4]; Size indicates maximum number of elements that can be stored inside the array. the size is compulsory.

The C arrays are static in nature, i.e., they are allocated memory at the compile time.

Array Initialization: two types

1. At compile time:

data_type array_name [size] = {value1, value2, ... valueN};

The size of the array is equal to the number of elements present in the array. Size is optional if the values are initializing.

int a[5]=(3,5,8,2,4}

2. At run time: We initialize the array after the declaration by assigning the initial value to each element individually using for loop, while loop, or do- while loop. for (int i = 0; i < N; i++)
{
array_name[i]= value;

} Access Array Elements

We can access any element of an array in C using the array subscript operator [] and the index value i of the element. Indexing is always starts with 0, means first element will store at oth position/index. We can access the array elements with for loop.


2. 2 d array: It is array of 1 d array. It is represent in the form of table or matrix which has rows and columns.

Only visualization, actually data is stored in contiguous. data_type array_name [row][column]; int table[2][3]; int table[2][3]=(1,2,3,4,5,7); or int table[2][3]={{1,2,3),(4,5,7});

Row size can be omitted.

Types of array according to data types:

1. int array

2. float array

3. character array

# Write a program for print marks of 10 students: void main(){
int i,marks[10]: for(i=0-103++)

printf("enter marks of %d student "+1); scanf("%d",&marks[i]);
}
printf("Marks are:");

for(i=0;i<10;i++) { printf("%d", marks[i]);
}
}

# Write a program for addition of two matrices.

void main(){

int m, n, c, d, first[10][10], second[10][10], sum[10][10]: printf("Enter the number of rows and columns of matrix\n"); scanf("%d %d", & m, & n); printf("Enter the elements of first matrix\n"); for (c=0; cm; c++) for (d = 0; d < n; d++) scanf("%d", & first[c][d]): printf("Enter the elements of second matrix\n"); for (c = 0; c<m; c++) for (d=0; d<n; d++)

scanf("%d", & second[c][d]);


printf("Sum of entered matrices:-\n");
 for (c = 0); c <m; c++)
 for (d=0; d<n; d++) 
sum[c][d] = first[c][d] + second[c][d]: printf("%d", sum[c][d]);
}
  printf("\n");
}
}

# What is Character array and String?

String is a collection of characters enclosed in double quotation and terminated by null (0 backslash zero) character.

String is a variable length structure so, the last element of array need to represent the end of the string. So we use null char to show the string end. Declaration of array: String is not a data type for e. so it is declared as an array

of character. char string_name[size]; char name[20]: There are two ways to initialize a string in c language. 1. By char array

2. By string literal

char ch[10]=('L','a', 'n','g','u','a','g','e', '\0'); explicitly add null char

char ch[10]="language": 10' will be appended at the end of the string by the

compiler.

String operations:

Read String from the user:

scanf(); scanf() function reads the sequence of characters until it encounters whitespace (space, newline, tab, etc.).

scanf("%s", name);

& is not used because the array name is the address of it's base element.

gets():gets() function is used to read a multi word string from the user. It reads character into string from the keyboard until a new line character is encountered.

gets(name);

# Write string to the screen:

printf(). It display the entire content of the array name.

printf("%s", name);

Sweeti kakhani

puts():Same task. It is one parameter function.

puts(name);

 Traversing String:

1. By using the length of string


2. By using the null character: while(s[i]!= NULL)

# Explain String functions?

1. strlen(): To get the length of a string. It counts total characters in the string.

a="language"; printf("%d", strien(a)) =>8



2. streat():To combine/join two strings.

char str[20]= "Hello":

char str2[]= "World!"

strcat(str1, str2): //Concatenate str2 to stri

printf("%s", strl); HelloWorld!



3. strcpy():To copy the value of one string to another string

char stri[20]= "Hello World!";

char str2[20] "Hello India",

strcpy(str2, strl);

printf("%s", str2); Hello World (content overwrite)



4. strcmp():To compare two strings. It returns 0 if the two strings are equal, it return positive values if strl>str2 else it return negative value.

strcmp(str1, str2)



5. strrev(string): It returns reverse of a string.

char a[10]="hello"; printf "%s" strrev(a)) olleh



6. strupr(string):It returns string characters in uppercase. 7. strlwr(string)



8. strstr(): It finds out the first occurrence of a given string in a string and print

string after occurrence.

char s[10]="hello world", strstr(s,"10"); lo world



