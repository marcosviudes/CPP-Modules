#include <cstdint>
#include <iostream>

typedef struct s_sata
{
	int			dato;
}				Data;

uintptr_t serialize(Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data data;
	Data *dest;
	uintptr_t serial;

	data.dato = 42;
	std::cout << &data << " > dato: " << data.dato << std::endl;
	serial = serialize(&data);
	std::cout << serial << std::endl;
	dest = deserialize(serial);
	std::cout << &dest << " -> " << dest << " > dato: " << dest->dato << std::endl;

	return 0;
}
