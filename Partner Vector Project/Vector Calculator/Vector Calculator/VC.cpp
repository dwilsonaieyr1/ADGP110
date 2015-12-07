/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Donte Wilson / Lethal Weapon Partner Project
//10/27/15
//ADPG110 Assessment Math Library
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include "VC2.h"
#include "VC3.h"
#include "VC4.h"

//replaces std

using namespace std;


int main()
{
	//Creates a float for Magnitude 
	float Mag;
	float Lerp;
	float Lerp2;
	//Creates an integer for the Dot product
	int Dot;
	//Creayes a float for Lerp

	cout << "--------------------------------------------------------\n";
	cout << "Vector Calculator\n";
	cout << "\n";
	cout << "Degrees to Radians/Radians to Degrees\n";
	double input1;

	cout << "Input Degrees to be converted to Radians:  ";

	cin >> input1;

	cout << endl;

	double rad = deg2rad(input1);

	cout << input1 << " Degrees = " << rad << " Radians." << endl;

	cout << endl;
	system("pause");
	cout << endl;

	// Radian to Degree Conversion
	double input2;

	cout << "Input Radians to be converted to Degrees:  ";

	cin >> input2;

	cout << endl;

	double deg = rad2deg(input2);

	cout << input2 << " Radians = " << deg << " Degrees." << endl;

	cout << endl;
	//Vector 2 and its components 


	cout << "Vector 2 Test";
	cout << "\n\n";
	cout << "Vector 2 consist of (7,3) and (4,7)\n";



	Vector2<int>TwoDVec1(7, 3);
	Vector2<int>TwoDVec2(4, 7);
	Vector2<int>TwoDVec3;
	Vector2<int>TwoDVec4;

	//Creates the protocol to display the addition of Vector2. Represented in x,y
	TwoDVec4 = TwoDVec1 + TwoDVec2;
	cout << "Addition: Outcome: (" << TwoDVec4.x << "," << TwoDVec4.y << ") Expected Outcome: (11,10)\n";


	//Creates the protocol to display the subtraction of Vector2. Represented in x,y
	TwoDVec4 = TwoDVec1 - TwoDVec2;
	cout << "Subtraction: Outcome: (" << TwoDVec4.x << "," << TwoDVec4.y << ") Expected Outcome: (3,-4)\n";
	//Creates the protocol to display the subtraction of Vector2. Represented in x,y
	TwoDVec4 = TwoDVec1 * TwoDVec2;
	cout << "Multiplication: Outcome:(" << TwoDVec4.x << "," << TwoDVec2.y << ") Expected Outcome: (28,7)\n";



	Mag = TwoDVec3.Mag2(TwoDVec1);
	cout << "Magnitude is: " << Mag << "\nExpected Outcome: 7.6 " << endl;
	Mag = TwoDVec3.Mag2(TwoDVec2);
	cout << "Magnitude is: " << Mag << "\nExpected Outcome: 8.1 " << endl;
	TwoDVec4 = TwoDVec3.Norm2(TwoDVec1);
	cout << "Normalized:  Outcome:(" << TwoDVec1.x << "," << TwoDVec1.y << ") Expected Outcome: (7,3)\n";
	TwoDVec4 = TwoDVec3.Norm2(TwoDVec2);
	cout << "Normalized:  Outcome:(" << TwoDVec2.x << "," << TwoDVec2.y << ") Epected Outcome: (4,7)\n";
	//Displays the dot product of Vector2
	Dot = TwoDVec3.DotProduct(TwoDVec1, TwoDVec2);
	cout << "Dot Product is: " << Dot << "\nExpected Outcome: 49" << endl;
	Lerp = TwoDVec3.Lerp(TwoDVec1, TwoDVec2);
	cout << "Lerp of Vector2: " << Lerp << "\nExpected Outcome: 5" << endl;


	//Vector 3 and its components.

	////////////////////////////////////////////////////////////////////////////////////////
	//Shows what is inside Vector3
	cout << "-----------------------------------------------------\n";
	cout << "\nThis is the vector 3 calculation test\n\n";
	cout << "The numbers entered are (5,2,3) and (4,2,0) \n\n";

	Vector3<int>Vec1(5, 2, 3);
	Vector3<int>Vec2(4, 2, 0);
	Vector3<int>Vec3;
	Vector3<int>Vec4;

	//Creates the protocol to display the addition of Vector3. Represented in x,y,z
	Vec4 = Vec1 + Vec2;
	cout << "Addition: " << "Outcome: (" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ") Expected Outcome: (9,4,3)\n";
	//Creates the protocol to display the subtraction of Vector3. Represented in x,y,z
	Vec4 = Vec1 - Vec2;
	cout << "Subtraction: " << "Outcome:(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ") Expected Outcome: (1,-2,3)\n";
	//Creates the protocol to display the Multiplication of Vector3. Represented in x,y,z
	Vec4 = Vec1 * Vec2;
	cout << "Multiplication: Outcome:(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ") Expected Outcome: (20,4,9)\n";
	//Displays the 1st Magnitude
	Mag = Vec3.Mag(Vec1);
	cout << "Magnitude is: " << Mag << "\nExpected Outcome: 6.2" << endl;
	//Displays the 2nd Magnitude
	Mag = Vec3.Mag(Vec2);
	cout << "Magnitude is: " << Mag << "\nExpected Outcome: 4.5" << endl;
	//Normalises Vector3
	Vec4 = Vec3.Norm(Vec1);
	cout << "Normalized:  Outcome:(" << Vec1.x << "," << Vec1.y << "," << Vec1.z << ") Expected Outcome:(5,2,3)\n";
	//Normalises Vector3
	Vec4 = Vec3.Norm(Vec2);
	cout << "Normalized: Outcome:(" << Vec2.x << "," << Vec2.y << "," << Vec2.z << ") Expected Outcome:(4,2,0)\n";
	//Gives the Dot Product of Vector3.
	Dot = Vec3.Dot(Vec1, Vec2);
	cout << "The Dot Product is: " << Dot << "\nExpected Outcome: 24" << endl;
	Lerp2 = Vec3.Lerp2(Vec1, Vec2);
	cout << "Lerp of Vector2: " << Lerp2 << "\nExpected Outcome: 4" << endl;


	//Gives the cross product of Vector3.
	Vec4 = Vec3.Cross(Vec1, Vec2);
	cout << "Cross Product is:" << "Outcome:(" << Vec4.x << "," << Vec4.z << ") Expected Outcome: (-6,2)" << "\n";
	cout << "\n";
	//////////////////////////////////////////////////////////////////////////////////////
	cout << "--------------------------------------------------------\n";
	cout << "This is the vector 4 calculation test\n\n";
	cout << "The numbers entered are (7,5,3,150) and (2,4,5,200) \n\n";

	Vector4<float>Vec1r(7, 5, 3, 150);
	Vector4<float>Vec2r(2, 4, 5, 200);
	Vector4<float>Vec3r(0, 0, 0, 0);
	Vector4<int>Vec4r;

	//Creates the protocol to display the addition of Vector3. Represented in x,y,z,r

	//Displays the 1st Magnitude
	//Normalises Vector4
	Vec3r = Vec1r.Norm4();
	//Normalises Vector4
	cout << "Vector (4) Output: " << endl;

	cout << Vec3r.RR << ",";
	cout << Vec3r.GG << ",";
	cout << Vec3r.BB << ",";
	cout << Vec3r.AA << endl;

	cout << Vec1r.Mag4() << endl;

	cout << "Hexadecimal #8A3EBD: ";
	cout << Vec4r.Hex("#00FF00").RR << ",";
	cout << Vec4r.Hex("#00FF00").GG << ",";
	cout << Vec4r.Hex("#00FF00").BB << ",";
	cout << Vec4r.Hex("#000000").AA << endl;
	//Prompts the system to pause.
	system("pause");
	return 0;







}
