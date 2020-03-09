#ifndef PERRI
#define PERRI
/**
 *struct dog - perro
 *@name: nombre del perro
 *@age: edad del perro
 *@owner: dueño del perro
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
