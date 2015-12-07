#ifndef VC3_H
#define VC3_H

template<typename T>
class Vector3
{
public:
	Vector3<T>();
	Vector3<T>(T x, T y, T z);
	~Vector3<T>();



	float Mag(Vector3 &a);
	float Lerp2(Vector3 &a, Vector3 &b);

	Vector3 Norm(Vector3 &a);

	T Dot(Vector3 &a, Vector3 &b);
	Vector3 Cross(Vector3 &a, Vector3 &b);

	int x;
	int y;
	int z;







private:


};



template<typename T>
Vector3<T>::Vector3()
{

}
template<typename T>
Vector3<T>::Vector3(T X, T Y, T Z)
{
	x = X;
	y = Y;
	z = Z;
}
template<typename T>
Vector3<T>::~Vector3()
{

}
template<typename T>
Vector3<T> operator +(Vector3<T> &a, Vector3<T> &b)
{
	Vector3<T> o;
	//Function to add Vector 3. x,y,z
	o.x = a.x + b.x;

	o.y = a.y + b.y;

	o.z = a.z + b.z;

	return o;
}
template<typename T>
Vector3<T> operator -(Vector3<T> &a, Vector3<T> &b)
{
	Vector3<T> o;
	//Function to subtract Vector3, x,y,z
	o.x = a.x - b.x;

	o.y = a.y - b.x;

	o.z = a.z - b.z;

	return o;

}
template<typename T>
float Vector3<T>::Mag(Vector3 &a)
{
	T asquared;
	//creates a float of a squared.
	float Asqrt;
	//Gives a squared a value
	asquared = (a.x * a.x) + (a.y * a.y) + (a.z * a.z);

	Asqrt = sqrt(asquared);
	//returns the float Asqrt
	return Asqrt;

}
template<typename T>
Vector3<T> Vector3<T>::Norm(Vector3 &a)
{
	Vector3 o;

	T asquared;

	float Asqrt;

	asquared = (a.x * a.x) + (a.y * a.y) + (a.z * a.z);

	Asqrt = sqrt(asquared);

	o.x = (a.x / Asqrt);
	o.y = (a.y / Asqrt);
	o.z = (a.z / Asqrt);

	return o;

}
template<typename T>
T Vector3<T>::Dot(Vector3 &a, Vector3 &b)
{
	return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}
template<typename T>
Vector3<T> Vector3<T>::Cross(Vector3 &a, Vector3 &b)
{
	Vector3 c;

	Vector3 t;
	Vector3 Cross;

	c.x = a.y * b.z;
	t.x = a.z * b.y;

	Cross.x = c.x - t.x;
	c.y = a.z * b.x;
	t.y = a.x * b.z;

	Cross.y = c.y - t.y;
	c.z = a.x * b.y;
	t.z = a.y * b.x;

	Cross.z = c.z - t.z;

	return Cross;

}
template<typename T>
Vector3<T> operator *(Vector3<T> &a, Vector3<T> &b)
{
	Vector3<T> o;

	o.x = a.x * b.x;
	o.y = a.y * b.y;
	o.z = a.z * a.z;

	return o;
}
template<typename T>
float Vector3<T>::Lerp2(Vector3<T> &a, Vector3<T> &b)
{
	T asquared;

	float Asqrt;

	asquared = a.x + 0.5 * (b.x - a.x), a.y + 0.5 * (b.y - a.y), a.z + 0.5 * (b.y - a.z);

	Asqrt = asquared;

	return Asqrt;
}
#endif VC3_H