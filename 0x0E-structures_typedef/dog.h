#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a structure.
 * @name: first member
 * @age: second member
 * @owner: last member
 *
 * Description: This defines a structure called dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - define a new type as the new name for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
