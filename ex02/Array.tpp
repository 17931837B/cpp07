#include "Array.hpp"

template <typename T>
Array<T>::Array(void): data_(NULL), size_(0)
{

}

template <typename T>
Array<T>::~Array(void)
{
	delete[] data_;
}

template <typename T>
Array<T>::Array(unsigned int n) : size_(n)
{
	data_ = new T[size_]();
}

template <typename T>
Array<T>::Array(Array const &copy): size_(copy.size_)
{
	unsigned int	i = 0;
	data_ = new T[size_];
	while (i < size_)
	{
		data_[i] = copy.data_[i];
		i++;
	}
}

template <typename T>
Array<T>& Array<T>::operator=(Array const &src)
{
	std::cout << "copy assignment" << std::endl;
	unsigned int	i = 0;

	if (this != &src)
	{
		delete[] data_;
		size_ = src.size_;
		data_ = new T[size_];
		while (i < size_)
		{
			data_[i] = src.data_[i];
			i++;
		}
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= size_)
		throw(std::out_of_range("Index out of bounds"));
	return (data_[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= size_)
		throw (std::out_of_range("Index out of bounds"));
	return (data_[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (size_);
}
