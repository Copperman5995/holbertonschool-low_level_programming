#include "hash_tables.h"
/**
 * key_index - sdfgdsfgdfsg
 * @key: sdfgsdfg
 * @size: asdfgdsfg
 * Return:  sdfgsd
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idex;

	idex = hash_djb2(key);
	return (idex % size);
}
