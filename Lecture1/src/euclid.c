/*
 * euclid.c
 *
 *  Created on: Dec 22, 2015
 *      Author: Administrator
 */

#include "euclid.h"

int gcd(int a, int b) {
	while(b) {
		int temp = b;
		b = a;
		a = temp;
	}

	return a;

}

int ext_euclid(int a, int b) {

}
