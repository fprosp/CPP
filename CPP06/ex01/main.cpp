#include "./include/Serializer.hpp"

int	main(int argc, char **argv)
{
	Data data;
	data.d = 42;
	uintptr_t	serialized;
	Data		*deserialized;

	std::cout << data.d << std::endl ;
	std::cout << serialized << std::endl;
	std::cout << deserialized << std::endl << std::endl;

	serialized = Serializer::serialize(&data);
	std::cout << serialized << std::endl;
	
	deserialized  = Serializer::deserialize(serialized);
	std::cout << deserialized << std::endl << std::endl;
	
	std::cout << deserialized << "\n" <<&data << std::endl;
	if (deserialized == &data)
        std::cout << "Serialization and deserialization done successfully" << std::endl;
	else 
        std::cout << "Serialization and deserialization failed" << std::endl;
	return (0);
}
