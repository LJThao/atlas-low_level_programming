#include <unistd.h>                                                                          

/**                                                                                           
 * _putchar - Write a program that prints _putchar, followed by a new line                    
 * @c: The characters
 * Return: On success 1.                                                                      
 * On error. -1 is returned, and errno is set appropriately.                                  
 */                                                                                           
                                                                                           
int _putchar(char c)  

{                                                                                             		return (write(1, &c, 1));

} 
