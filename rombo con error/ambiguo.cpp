#include <iostream>
using namespace std;

class Servivo{
	private:
		string nombre;
	public:
		void vive(){
			cout<<nombre<<" esta vivo"<<endl;
		}
};

class Nino:public Servivo{
	private:
		string nombre;
	public:
		void corre(){
			cout<<nombre<<" puede correr"<<endl;
		}
	  

};

class Adolescente:public Servivo{
	private:
		string nombre;
	public:
		void estudia(){
			cout<<nombre<<" puede estudiar"<<endl;
		}
};

class Adulto:public Nino,Adolescente{
	private:
		string nombre;
	public:
		void trabaja(){
			cout<<nombre<<" puede trabajar"<<endl;
		}
};


int main(){
	
	Adulto juan("juan");
	juan.corre();
	juan.vive();
	juan.estudia();
	juan.trabaja();
	return 0;	
}
	
	
	
	
	
	


