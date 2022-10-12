#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for dog struct
 */

typedef struct dog dog_t;

/**
 * struct dog - Struct to store dog infor
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Discreption: a new type of 'struct dog'
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
