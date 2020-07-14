#include <stdlib.h>
#include "dog.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;
	int len1 = 0, len2 = 0;

	while (name[len1] != '\0')
		len1;
	while (owner[len2] != '\0')
		len2;

	new_dog = malloc(sizeof(struct dog));
	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (!(new_dog->name))
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (!(new_dog->owner))
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog); 
}
