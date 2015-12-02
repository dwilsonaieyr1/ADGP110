#ifndef VC4_H
#define VC4_H


template<typename T>
class Vector4
{
public:
	Vector4<T>();
	Vector4<T>(T x, T y, T z, T r);
	~Vector4<T>();

	Vector4 Add4(Vector4 &a, Vector4 &b);
	Vector4 Sub4(Vector4 &a, Vector4 &b);
	Vector4 Multi4(Vector4 &a, Vector4 &b);

	float Mag4(Vector4 &a);

	Vector4 Norm4(Vector4 &a);



	int x;
	int y;
	int z;
	int r;



private:


};



template<typename T>
Vector4<T>::Vector4()
{

}
template<typename T>
Vector4<T>::Vector4(T X, T Y, T Z, T R)
{
	x = X;
	y = Y;
	z = Z;
	r = R;
}
template<typename T>
Vector4<T>::~Vector4()
{

}
template<typename T>
Vector4<T> Vector4<T>::Add4(Vector4<T> &a, Vector4<T> &b)
{
	Vector4 o;
	//Function to add Vector 4. x,y,z,r
	o.x = a.x + b.x;

	o.y = a.y + b.y;

	o.z = a.z + b.z;

	o.r = a.r + b.r;

	return o;
}
template<typename T>
Vector4<T> Vector4<T>::Sub4(Vector4<T> &a, Vector4<T> &b)
{
	Vector4 o;
	//Function to subtract Vector3, x,y,z,r
	o.x = a.x - b.x;

	o.y = a.y - b.x;

	o.z = a.z - b.z;

	o.r = a.r - b.r;

	return o;

}
template<typename T>
float Vector4<T>::Mag4(Vector4 &a)
{
	T asquared;
	//creates a float of a squared.
	float Asqrt;
	//Gives a squared a value
	asquared = (a.x * a.x) + (a.y * a.y) + (a.z * a.z) + (a.r * a.r);

	Asqrt = sqrt(asquared);
	//returns the float Asqrt
	return Asqrt;

}
template<typename T>
Vector4<T> Vector4<T>::Norm4(Vector4 &a)
{
	Vector4 o;

	T asquared;

	float Asqrt;

	asquared = (a.x * a.x) + (a.y * a.y) + (a.z * a.z) + (a.r *a.r);

	Asqrt = sqrt(asquared);

	o.x = (a.x / Asqrt);
	o.y = (a.y / Asqrt);
	o.z = (a.z / Asqrt);
	o.r = (a.r / Asqrt);

	return o;

}
template<typename T>
Vector4<T> Vector4<T>::Multi4(Vector4<T> &a, Vector4<T> &b)
{
	Vector4 o;

	o.x = a.x * b.x;
	o.y = a.y * b.y;
	o.z = a.z * a.z;
	o.r = a.r * b.r;

	return o;
}


#endif VC4_H
