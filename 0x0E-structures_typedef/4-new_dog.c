#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - length of the string
 * @s: string
 * Return: value
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copy string
 * @s1: first string
 * @s2: second string
 * Return: string
 */
char *_strcpy(char *s1, char *s2)
{
	int len, i;

	len = 0;
	while (s2[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';
	return (s1);
}
/**
 * new_dog - structure for creating new dog
 * @name: name of the dog
 * @owner: dog owners
 * @age: age of dog
 * Return: success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
