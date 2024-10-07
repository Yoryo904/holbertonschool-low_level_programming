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
 *
 */

char *_strdup(char *str)
{
        int i = 0;
        char *arrayString = 0;
        int str_len = 0;

        if (str == NULL)
                return (NULL);
        str_len = _strlen(str);
        arrayString = (char *) malloc(sizeof(char) * (str_len + 1));

        if (arrayString == NULL)
                return (NULL);

        for (i = 0; i < str_len; i++)
        {
                arrayString[i] = str[i];
        }
        arrayString[str_len] = '\0';

        return (arrayString);
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
	dog_t *newDog = NULL;
	int name_len = 0;
	int owner_len = 0;

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

	newDog = (dog_t *) malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = _strdup(name);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->age = age;
	newDog->owner = _strdup(owner);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
