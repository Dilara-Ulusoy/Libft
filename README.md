# Libtf

## ft_memset.c
```c
void	*ft_memset(void *b, int c, size_t len)
```

  **This function copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument b.**
  
  **b** − This is a pointer to the block of memory to fill.
  
  **c**− This is the value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
  
  **n** − This is the number of bytes to be set to the value.
  
  **Return value** - This function returns a pointer to the memory area b.
  ```c
  Example;
  
  char str[] = "Hello World!";
  
  memset(str,'$',7);

Standart Output -> $$$$$$$ Hello World!
``` 
## ft_memcpy.c
```c
void	*ft_memcpy(void *dest, const void *src, size_t n)
```

 **This function copies n characters from memory area src to memory area dest.**
 
 **dest** − This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
 
 **src** − This is pointer to the source of data to be copied, type-casted to a pointer of type void*.
 
**n** − This is the number of bytes to be copied.

 **Return value** - This function returns a pointer to destination, which is dest.
```c
Example;

char dest[50];
char src[] = "This my source string";
memcpy(dest, src, strlen(src)+1);

Standart Output -->
Before memcpy dest = 
After memcpy dest = This my source string
```
## ft_memmove.c

```c
void	*ft_memmove(void *dst, const void *src, size_t len)
```
**This function  copies n characters from str2 to str1, but for overlapping memory blocks, memmove() is a safer approach than memcpy().**

**str1** − This is a pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.

**str2** − This is a pointer to the source of data to be copied, type-casted to a pointer of type void*.

**n** − This is the number of bytes to be copied.

**Return value** - This function returns a pointer to the destination, which is dst.
```c
Example: //If we work with two different arrays. 

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}

Standart Output -->
Before memmove dest = oldstring, src = newstring
After memmove dest = newstring, src = newstring
```
```c
Example: //If we work with single array. 

int main () {
   char str[] = "abcde";
   printf("Before memmove str %s", str);
   memmove(str, str+2, 2);
   printf("After memmove str %s", str);
   return(0);
}
Standart Output -->
Before memmove str = abcde
After memmove str = cdcde
```
## ft_memcmp.c

```c
int ft_memcmp(const void *str1, const void *str2, size_t n)
```
**This function compares the first n bytes of memory area str1 and memory area str2.**

**str1** − This is the pointer to a block of memory.

**str2** − This is the pointer to a block of memory.

**n** − This is the number of bytes to be compared.

**Return Value**

if Return value < 0 then it indicates str1 is less than str2.

if Return value > 0 then it indicates str2 is less than str1.

if Return value = 0 then it indicates str1 is equal to str2.

```c
Example;

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   return(0);
}
```
## ft_memchr.c

**This C function searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument s.**

```c
void	*ft_memchr(const void *s, int c, size_t n)
```
**Parameters**

**s** − This is the pointer to the block of memory where the search is performed.

**c** − This is the value to be passed as an int, but the function performs a byte per byte search using the unsigned char conversion of this value.

**n** − This is the number of bytes to be analyzed.

**Return Value**

This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.

```c
Example:

int main()
{
    char str[] = "My name is Dilara";
    printf("My function: %s\n", ft_memchr(str, 'a',4));
    return 0;
}

Standart Output -->
My function before memchr: = My name is Dilara
My function after memchr= ame is Dilara
```

# test
## test'
### test
#### btest

 
