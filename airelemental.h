#ifndef AIRELEMENTAL_H
#define AIRELEMENTAL_H

class airelemental :public minion
{
	
public:
	airelemental();
	~airelemental();
	void hit(player &p);
};