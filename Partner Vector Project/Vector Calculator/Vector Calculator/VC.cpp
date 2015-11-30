/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Donte Wilson / Lethal Weapon Partner Project
//10/27/15
//ADPG110 Assessment Math Library
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "VC2.h"
#include "VC3.h"
//replaces std
using namespace std;


int main()
{
	//Creates a float for Magnitude 
	float Mag;
	//Creates an integer for the Dot product
	int Dot;
	cout << "Vector Calculator\n";
	//Vector 2 and its components 
	cout << "Vector 2:\n";

	Vector2<int>TwoDVec1(8,5);
	Vector2<int>TwoDVec2(12,3);
	Vector2<int>TwoDVec3;
	Vector2<int>TwoDVec4;

	//Creates the protocol to display the addition of Vector2. Represented in x,y
	TwoDVec4 = TwoDVec3.Add2(TwoDVec1, TwoDVec2);
	cout << "(" << TwoDVec4.x << "," << TwoDVec4.y << ")\n";
	//Creates the protocol to display the subtraction of Vector2. Represented in x,y
	TwoDVec4 = TwoDVec3.Sub2(TwoDVec1, TwoDVec2);
	cout << "(" << TwoDVec4.x << "," << TwoDVec4.y << ")\n";
	//Creates the protocol to display the subtraction of Vector2. Represented in x,y
	TwoDVec4 = TwoDVec3.Multi2(TwoDVec1, TwoDVec2);
	cout << "(" << TwoDVec4.x << "," << TwoDVec2.y << ")\n";


	Mag = TwoDVec3.Mag2(TwoDVec1);
	cout << "Magnitude is: " << Mag << endl;
	Mag = TwoDVec3.Mag2(TwoDVec2);
	cout << "Magnitude is: " << Mag << endl;
	TwoDVec4 = TwoDVec3.Norm2(TwoDVec1);
	cout << "(" << TwoDVec1.x << "," << TwoDVec1.y << ")\n";
	TwoDVec4 = TwoDVec3.Norm2(TwoDVec1);
	cout << "(" << TwoDVec2.x << "," << TwoDVec2.y << ")\n";
	//Displays the dot product of Vector2
	Dot = TwoDVec3.DotProduct(TwoDVec1, TwoDVec2);
	cout << "Dot Product is: " << Dot << endl;
	//Vector 3 and its components.
	cout << "\nVec3:\n";
	//Shows what is inside Vector3
	Vector3<int>Vec1(3, 7, 6);
	Vector3<int>Vec2(4, 4, 4);
	Vector3<int>Vec3;
	Vector3<int>Vec4;

	//Creates the protocol to display the addition of Vector3. Represented in x,y,z
	Vec4 = Vec3.Add(Vec1, Vec2);
	cout <<"Add: "<< "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";
	//Creates the protocol to display the subtraction of Vector3. Represented in x,y,z
	Vec4 = Vec3.Sub(Vec1, Vec2);
	cout <<"Sub: "<< "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";
	//Creates the protocol to display the Multiplication of Vector3. Represented in x,y,z
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
	cout <<"Normalized: " << "(" << Vec1.x << "," << Vec1.y << "," << Vec1.z << ")\n";
	Vec4 = Vec3.Norm(Vec1);
	cout << "Normalized: " << "(" << Vec2.x << "," << Vec2.y << "," << Vec2.z << ")\n";
	//Gives the Dot Product of Vector3.
	Dot = Vec3.Dot(Vec1, Vec2);
	cout << "The Dot Product is: " << Dot << endl;
	//Gives the cross product of Vector3.
	Vec4 = Vec3.Cross(Vec1, Vec2);
	cout << "Cross Product is:" << "(" << Vec4.x << "," << Vec4.z << ")" << "\n";
	//Prompts the system to pause.
	system("pause");
	return 0;







}