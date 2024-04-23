# Libtf

#### ft_memset.c
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
#### ft_memcpy.c
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
#### ft_memmove.c

```c
void	*ft_memmove(void *dst, const void *src, size_t len)
```
**This function  copies n characters from str2 to str1, but for overlapping memory blocks, memmove() is a safer approach than memcpy().**

**str1** − This is a pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.

**str2** − This is a pointer to the source of data to be copied, type-casted to a pointer of type void*.

**n** − This is the number of bytes to be copied.

**Return value** - This function returns a pointer to the destination, which is dst.


# test
## test'
### test
#### btest

 
