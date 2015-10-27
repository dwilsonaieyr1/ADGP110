#include <iostream>
#include "VC2.h"
#include "VC3.h"
//replaces std
using namespace std;


int main()
{
	float Mag;
	int Dot;
	cout << "Vector Calculator\n";
	//Vector 2 and its components 
	cout << "Vector 2:\n";

	Vector2<int>TwoDVec1(3, 3);
	Vector2<int>TwoDVec2(1, 1);
	Vector2<int>TwoDVec3;
	Vector2<int>TwoDVec4;

	
	TwoDVec4 = TwoDVec3.Add2(TwoDVec1, TwoDVec2);
	cout << "(" << TwoDVec4.x << "," << TwoDVec4.y << ")\n";
	
	TwoDVec4 = TwoDVec3.Sub2(TwoDVec1, TwoDVec2);
	cout << "(" << TwoDVec4.x << "," << TwoDVec4.y << ")\n";

	TwoDVec4 = TwoDVec3.Multi2(TwoDVec1, TwoDVec2);
	cout << "(" << TwoDVec4.x << "," << TwoDVec2.y << ")\n";


	Mag = TwoDVec3.Mag2(TwoDVec1);
	cout << "Magnitude is: " << Mag << endl;
	Mag = TwoDVec3.Mag2(TwoDVec2);
	cout << "Magnitude is: " << Mag << endl;
	TwoDVec4 = TwoDVec3.Norm2(TwoDVec1);
	cout << "(" << TwoDVec4.x << "," << TwoDVec4.y << ")\n";
	Dot = TwoDVec3.DotProduct(TwoDVec1, TwoDVec2);
	cout << "Dot Product is: " << Dot << endl;
	//Vector 3 and its components.
	cout << "\nVec3:\n";

	Vector3<int>Vec1(3, 7, 6);
	Vector3<int>Vec2(4, 4, 4);
	Vector3<int>Vec3;
	Vector3<int>Vec4;


	Vec4 = Vec3.Add(Vec1, Vec2);
	cout <<"Add: "<< "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";

	Vec4 = Vec3.Sub(Vec1, Vec2);
	cout <<"Sub: "<< "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";

	Vec4 = Vec3.Multi(Vec1, Vec2);
	cout << "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";
	//Displays the 1st Magnitude
	Mag = Vec3.Mag(Vec1);
	cout << "Magnitude is: " << Mag << endl;
	//Displays the 2nd Magnitude
	Mag = Vec3.Mag(Vec1);
	cout << "Magnitude is: " << Mag << endl;

	//Normalises Vector3
	Vec4 = Vec3.Norm(Vec1);
	cout << "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";
	//Gives the Dot Product of Vector3.
	Dot = Vec3.Dot(Vec1, Vec2);
	cout << "The Dot Product is: " << Dot << endl;
	//Gives the cross product of Vector3.
	Vec4 = Vec3.Cross(Vec1, Vec2);
	cout << "Cross Product is:" << "(" << Vec4.x << "," << Vec4.z << ")" << "\n";

	system("pause");
	return 0;







}