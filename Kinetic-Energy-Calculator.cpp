//Cristian Del Cid
//Date: 1/29/2026
//Kinetic Energy Calculator

#include<iostream>
using namespace std;

int main()
{
	int mass;
    int velocity;
	int kineticenergy;

	cout << "Kinetic Energy Calculator" << endl;
	
	cout << "Enter the mass of the object (in kg):" <<endl;
	cin >> mass;

	cout << "\nEnter the the velocity in (m/s):" <<endl;
	cin >> velocity;

	kineticenergy = 0.5 * mass * velocity * velocity;
	cout << "\nThe kinetic energy of the object is : " << kineticenergy << " joules" << endl;

	return 0;
}