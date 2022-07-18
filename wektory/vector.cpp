#include "vector.hpp"

Vector::Vector()
	: _capacity(0)
	, _size(0)
	, _data(nullptr)
{	
}

Vector::Vector(unsigned int capacity)
	: _capacity(capacity)
	, _size(0)
{
	_data = new int[_capacity]; // możemy zainicjalizować polem, bo pole zainicjalizowane listą inicjalizacyjną
}

Vector::Vector(const Vector& old)
{
	_size = old._size;
	_capacity = old._capacity;
	// kopia głeboka
	_data = new int[_capacity];
	for (int i = 0; i < _size; ++i)
	{
		_data[i] = old._data[i];
	}
}

Vector::~Vector()
{
	if (_data != nullptr)
	{
		delete[] _data;
		_data = nullptr;
	}
}

void Vector::reserve(unsigned int capacity)
{
	int* data = new int[capacity];
	for (int i = 0; i < _size; ++i)
			{
				data[i] = _data[i];
			}
	_capacity = capacity;
	delete[] _data;
	_data = data;
	//if (_capacity < capacity)
	//{
	//	_capacity = capacity;
	//	int* old_data = _data;
	//	_data = new int[_capacity];
	//	for (int i = 0; i < _size; ++i)
	//	{
	//		_data[i] = old_data[i];
	//	}
	//	for (int i = _size; i < _capacity; ++i)
	//	{
	//		_data[i] = 0;
	//	}
	//	delete[] old_data;
	//}
}

unsigned int Vector::capacity() const
{
	return _capacity;
}

unsigned int Vector::size() const
{
	return _size;
}

bool Vector::empty() const
{
	return _size ==0;
}

void Vector::insert(int value, unsigned int position)
{
	if ((position < _capacity) && position>=0)
	{
		int* old_data = _data;
		_size++;
		_data = new int[_size];
		
		for (int i = 0, j = 0; i < _size; ++i)
		{
			if (i == position)
			{
				_data[i] = value;
			}
			else
			{
				_data[i] = old_data[j];
				j++;
			}
		}
		delete[] old_data;
	}
}

void Vector::clear()
{
	_size = 0;
}

void Vector::push_back(const int& value)
{
	if (_size >= _capacity)
	{
		reserve((_capacity + 1)*2)
	}
	_data[_size++] = value;
}		

int Vector::getItem(int position)
{
	return _data[position];
}

int& Vector::operator[](unsigned int i)
{
	if (i > _size)
	{
		// to do exeption
				
	}
	//if (_data != nullptr)
	//{

	//}
	return _data[i];
}

Vector& Vector::operator=(const Vector& vector)
{
	if (_data != nullptr)
	{
		_size = vector._size;
		_capacity = vector._capacity;
		delete[] _data;
		_data = nullptr;
		_data = new int[_capacity];
		for (int i = 0; i < _size; ++i)
		{
			_data[i] = vector._data[i];
		}
	}
	return *this; // zwrócenie *this umozliwi kaskadowe użycie operatora przypisania, bo referencję można utworzyc jedynie do obiektu
}
