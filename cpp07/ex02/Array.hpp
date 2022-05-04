#pragma once

template <typename T>
class Array
{
	private:
		unsigned int		_n;
		T	*_array;
	public:
		Array(void):  _n(0), _array(new T[0]){}
		Array(unsigned int n){
			_array = new T [n];
			_n = n;
			};
		Array( Array const &copy){ 
			this->_n = copy._n;
			this->_array = new T[copy._n];
			for(unsigned int i = 0; i < this->_n; i++)
			{
				this->_array[i] = T(copy._array[i]);
			}
		};
		~Array(){delete[] this->_array;}

		Array &operator=( Array const &rhs){
			if(this == &rhs)
				return *this;
			this->_n = rhs._n;
			delete this->_array;
			this->_array = new T[rhs._n];
			for(unsigned int i = 0; i < this->_n; i++)
			{
				this->_array[i] = T(rhs._array[i]);
			}
			return *this;
		}

		T &operator[](int i){
			if( i < 0 || i >= static_cast<int>(this->_n))
				throw Array::incaccesibleArray();
			return(this->_array[i]);
		}
		int size(void) const {return(this->_n) ;}

		class incaccesibleArray : public std::exception
		{
			const char *what() const throw (){
				return "Inaccesible array"; 
			}
		};
};