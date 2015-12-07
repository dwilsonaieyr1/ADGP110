#ifndef VC4_H
#define VC4_H


template<typename T>
class Vector4
{
public:
	Vector4<T>();
	Vector4<T>(T x, T y, T z, T r);
	~Vector4<T>();
	T RR;
	T GG;
	T BB;
	T AA;
	Vector4<T> Hex(string);
	T Mag4();

	Vector4<T> Norm4()
	{
		Vector4<T> o;
		o.RR = RR / Mag4();
		o.GG = GG / Mag4();
		o.BB = BB / Mag4();
		o.AA = AA / Mag4();
		return o;

	}
private:


};



template<typename T>
Vector4<T>::Vector4()
{
	RR = 0;
	GG = 0;
	BB = 0;
	AA = 0;

}
template<typename T>
Vector4<T>::Vector4(T X, T Y, T Z, T R)
{
	RR = X;
	GG = Y;
	BB = Z;
	AA = R;
}
template<typename T>
Vector4<T>::~Vector4()
{

}

template<typename T>
T Vector4<T>::Mag4()
{
	T m;
	T V4RR, V4GG, V4BB, V4AA;
	V4RR = RR * RR;
	V4GG = GG * GG;
	V4BB = BB * BB;
	V4AA = AA * AA;
	m = V4RR + V4GG + V4BB + V4AA;
	m = sqrt(m);
	return m;
}

template <typename T>
Vector4<T> Vector4<T>::Hex(string UserInput)
{
	Vector4<T> o;
	if (UserInput[0] == '#')
	{
		int Array[8];
		Vector4<T> o;
		for (int i = 1; i <= 8; ++i)
			Array[i - 1] = (int(UserInput[i]));

		for (int j = 0; j < 6; ++j)
		{
			if (Array[j] / 10 == 4 || Array[j] / 10 == 5)
				Array[j] = Array[j] - 48;
			else if (Array[j] / 10 == 6 || Array[j] / 10 == 7)
				Array[j] = Array[j] - 55;
			else
				Array[j] = Array[j];
		}

		o.RR = (Array[0] * 16) + Array[1];
		o.GG = (Array[2] * 16) + Array[3];
		o.BB = (Array[4] * 16) + Array[5];
		o.AA = (Array[7] * 16) + Array[8];

		return o;
	}
	else
	{
		o.RR = 00;
		o.GG = 00;
		o.BB = 00;
		o.AA = 00;
	}

}

#endif VC4_H