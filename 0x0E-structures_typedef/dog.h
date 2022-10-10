#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - describes the sweet boy or girl
 * @name: name of dog
 * @age: how old is that dog?
 * @owner: who is the lucky person that gets to live with that dog?
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef dog_t - defines a new name for type struct dog
 */
typedef struct dog dog_t;
