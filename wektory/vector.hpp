#pragma once
class Vector
{
private:
	unsigned int _size; // lub mSize
	unsigned int _capacity;
	int* _data;
public:
	Vector(); // konstruktor domyslny, tworzy pusty vektor
	Vector(unsigned int capacity); // rezerwuje miejsce na podaną liczbe elementów
	Vector(const Vector& old); // c-tor
	virtual~Vector();  // virtual gwarantuje odpowiednią kolejność destrukcji obiektów przy polimorfiźmie // d-tor
	void reserve(unsigned int capacity); //zwiększa rozmiar zarezerwowanej pamięci vectora, ale nie można zmniejszyć
	//void resize(unsigned int size); // pozwala zmniejszyć rozmiar vectora, ale nie zwiększyć
	// gettery
	unsigned int capacity() const;
	unsigned int size() const;
	bool empty() const;

	void insert(int value, unsigned int position); // wstawia wartość do wektora na zadaną pozycję
	//void remove(unsigned int position); // usuwa element vectora
	void clear(); // usuwa wszystkie elementy, ale nie zmniejsza zarezerwowanej pamięci
	void push_back(const int& value); // odkłada element na ostatnie wolne miejsce, const bo referencja musi być do zmiennej, bez const nie moglibysmy przekazac stałej tj. (3)

	int getItem(int position);

	int& operator[](unsigned int i); // operator dostępu do danych na podanej pozycji
	Vector& operator=(const Vector& vector); // to samo co c-tor kopijący
};

