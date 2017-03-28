#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
using namespace std;

class player
{
        int magic;
        string name;
        int health;
public:
        player();
        ~player();
        void  setname(string inputname);
        string getname();
        int getmagic();
        int gethealth();
};



#endif
