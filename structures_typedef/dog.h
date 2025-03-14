#ifndef dog_h
#define dog_h

/**
* struct dog - doggy style
* @name: snoop
* @age: dog
* @owner: snoopy
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
