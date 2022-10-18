#include "main.h"
/**
 * _isalpha - a function that check for alphabet character
 * @c: single letter input
 * Return: 1 if c is a letter (ower or uppercase), 0 othherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
