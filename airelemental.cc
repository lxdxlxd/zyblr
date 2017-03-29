#include "airelemental.h"

airelemental::airelemental():name{"airelemental"}attack{1}, health{1}, cost{1}{}

airelemental::~airelemental(){}

void hit(player &p){
	p->health -= health;
}