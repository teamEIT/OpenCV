#ifndef __EUCLID_H__
#define __EHCLID_H__

/* global variables */
extern int x, y;

/* compute gcd */
int gcd(int a, int b);

/* compute g = gcd(a, b) and resolve ax+by=g */
int ext_euclid(int a, int b);

#endif
