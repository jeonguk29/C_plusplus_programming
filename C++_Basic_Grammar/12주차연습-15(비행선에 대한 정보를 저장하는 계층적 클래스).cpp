#include <iostream>
using std::cout;
using std::endl;

class Airship {
protected:
	int passengers;
	double cargo;
public:
	void A_Show();
};
void Airship::A_Show()
{
	cout << "승객 수 : " << passengers << endl;
	cout << "짐의 양 : " << cargo << endl;
}
class Airplane : public Airship {
	char engine;
	double range;
public:
	Airplane(int p, double c, char e, double r)
	{
		passengers = p;
		cargo = c;
		engine = e;
		range = r;
	}
	void Show();
};
class Balloon : public Airship {
	char gas;
	double altitude;
public:
	Balloon(int p, double c, char g, double a) {
		passengers = p;
		cargo = c;
		gas = g;
		altitude = a;
	}
	void Show();
};
void Airplane::Show() {
	A_Show();
	cout << "엔진 : ";
	cout << ((engine == 'p') ? "프로펠러\n" : "제트\n");
	cout << "운항 거리 : " << range << endl;
}
void Balloon::Show() {
	A_Show();
	cout << "가스 : ";
	cout << ((gas == 'o') ? "수소\n" : "헬륨\n");
	cout << "최대 고도 : " << altitude << endl;
}
int main(void) {
	Airplane B727(100, 40000.0, 'j', 40000.0);
	Balloon b(3, 200.0, 'h', 10000.0);
	B727.Show(); cout << endl;
	b.Show();
}



