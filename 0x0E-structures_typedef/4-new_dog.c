#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: pointer to the new dog, or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog; /* pointer to the new dog */
    char *new_name; /* pointer to the copy of name */
    char *new_owner; /* pointer to the copy of owner */

    if (name == NULL || owner == NULL) /* check if the arguments are valid */
        return (NULL);

    new_dog = malloc(sizeof(dog_t)); /* allocate memory for the new dog */
    if (new_dog == NULL) /* check if malloc failed */
        return (NULL);

    new_name = _strcpy(NULL, name); /* copy the name to a new string */
    if (new_name == NULL) /* check if _strcpy failed */
    {
        free(new_dog); /* free the allocated memory for the new dog */
        return (NULL);
    }

    new_owner = _strcpy(NULL, owner); /* copy the owner to a new string */
    if (new_owner == NULL) /* check if _strcpy failed */
    {
        free(new_name); /* free the allocated memory for the name */
        free(new_dog); /* free the allocated memory for the new dog */
        return (NULL);
    }

    new_dog->name = new_name; /* assign the name to the struct member */
    new_dog->age = age; /* assign the age to the struct member */
    new_dog->owner = new_owner; /* assign the owner to the struct member */

    return (new_dog); /* return the pointer to the new dog */
}

/**
 * _strcpy - copies a string to a newly allocated space in memory
 * @dest: destination of the copied string
 * @src: source of the string to copy
 * Return: pointer to dest, or NULL if fails
 */
char *_strcpy(char *dest, char *src)
{
    int i, len;

    if (src == NULL) /* check if src is valid */
        return (NULL);

    len = _strlen(src); /* get the length of src */

    if (dest == NULL) /* if dest is NULL, allocate memory for it */
        dest = malloc(sizeof(char) * (len + 1));
    
    if (dest == NULL) /* check if malloc failed */
        return (NULL);

    for (i = 0; i <= len; i++) /* copy src to dest */
        dest[i] = src[i];

    return (dest); /* return pointer to dest */
}

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 * Return: length of s
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0') /* count until null terminator */
        len++;

    return (len);
}
