#include "./include/Serializer.hpp"

int	main(int ac, char **av)
{
	Data data;
	data.d = 42;

	uintptr_t	serialized = Serializer::serialize(&data);
	Data*	deserialized = Serializer::deserialize(serialized);

	if (deserialized == &data)
	{
        std::cout << "Serialization and deserialization done successfully" << std::endl;
    } 
	else 
	{
        std::cout << "Serialization and deserialization failed" << std::endl;
    }
}
