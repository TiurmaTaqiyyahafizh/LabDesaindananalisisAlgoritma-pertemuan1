// CODE POLIMORPHISM

#include <iostream>
#include <string>

using namespace std;

class hewan{
	public:
		virtual void bersuara() {
			cout << "....";
		}
};

class kucing: public hewan {
	public:
		void bersuara(){
			cout << "meowww...."<< endl;
		}
};

class kambing: public hewan{
	public:
		void bersuara(){
			cout << "mbekk.."<< endl;
		}
};

int main(){
	hewan *h1 = new kucing();
	hewan *h2 = new kambing ();
	
	h1->bersuara ();
	h2->bersuara ();
	
	return 0;
}