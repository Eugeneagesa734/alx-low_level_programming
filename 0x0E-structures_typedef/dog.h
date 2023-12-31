#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs basic info
 * @name: name to initialize
 * @age: age to initaialize
 * @owner: owner to initialize
 *
 * Description: longer description
 *
 * dog_t - dog struct typedef
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
