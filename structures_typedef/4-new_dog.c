#include "dog.h"

/**
 * _strlen - counts the length of a string
 * @s: the string
 *
 * Returns: the length of the desire string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * new_dog - creates a new dog type struct dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner's name
 *
 * Return: name, age and owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *arrayDog = NULL;
	char *arrayStore = NULL;
	int name_len = 0;
	int owner_len = 0;
	int i = 0;

	if (name == NULL)
		return (NULL);
	if (age == 0.0)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	if (name_len == 0)
		return (NULL);
	if (owner_len == 0)
		return (NULL);

	arrayDog = (dog_t *) malloc(sizeof(dog_t) * 3);
	arrayStore = (char *) malloc(sizeof(char) * ((name_len + owner_len) + 1));

	arrayDog->name = name;
	arrayDog->age = age;
	arrayDog->owner = owner;

	if (arrayStore == NULL)
		return (NULL);
	if (arrayDog == NULL)
		return (NULL);

	for (i = 0; i < name_len; i++)
	{
		arrayStore[i] = name[i];
	}

	for (i = 0; i < owner_len; i++)
	{
		arrayStore[name_len + i] = name[i];
	}
	free(arrayStore);
	return (arrayDog);
}
