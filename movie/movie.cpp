#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct actor {
	string name;	// 0
	string age;		// 1
	string birth;	// 2
};
struct movie {
	vector<actor> actors;
	string year;
	string money;
	string mname;
	
};
int main()	{
	actor a2 = { "Sigourney Weaver", "70", "1949" };
	actor a1 = { "Tom Skerritt", "86", "1933" };
	string erver;
	erver.
	movie alien; 
	alien.actors.push_back(a2);
	alien.actors.push_back(a1);
	alien.year.push_back("1979");
	alien.money.push_back("$8.4–14 million");
	alien.mname.push_back("Alien");
		//	m1.actors = John wivector<actor> actors;




	return 0;
}