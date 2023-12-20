/* Definiamo la classe Shape come base della nostra gerarchia di forme nel 
namespace Geometry, che abbiamo già usato per la definizione della classe 
Point2D nelle lezioni precedenti: */


// shape.hpp
#ifndef SHAPE_HPP
# define SHAPE_HPP

#include <string>

namespace Geometry
{
	class Shape;
}

class Geometry::Shape
{
	private:
		;
	public:
		Shape(std::string lab);
		~Shape();

		void 		setLabel(std::string lab);
		std::string getLabel() const;
	protected:
		std::string label;
};
#endi

#include "shape.hpp"

namespace Geometry 
{
	Shape::Shape(std::string lab)
	{
		label = lab;
	}
	void Shape::setLabel(std::string lab)
	{
		label = lab;
	}
	std::string Shape::getLabel() const
	{
		return label;
	}
}


/* Per lo scopo di questa lezione, è sufficiente dotare la classe Shape di un solo membro di tipo stringa utile per
assegnare un'etichetta alla forma e dei relativi metodi accessori. Nel listato successivo, la dichiarazione della 
classe derivata Polygon è seguita dal carattere :, da un qualificatore di accesso, in questo caso public ed infine 
dal nome della classe base, Shape.*/


// polygon.hpp
#ifndef POLYGON_HPP
# define POLYGON_HPP

#include "shape.hpp"

namespace Geometry
{
	class Polygon;
}

class Geometry::Polygon : public Shape	// Eredita la componente pubblica della classe madre Shape.
{
	private:
		;
	
	public:
		Polygon(std::string lab="");
		int getVertexCount() const;
	
	protected:
		int vertexCount;
};

#endif



// polygon.cpp
#include "polygon.hpp"

namespace Geometry 
{
	Polygon::Polygon(std::string lab): Shape(lab)	// Invocazione del costruttore della classe base
	{
		vertexCount = 0;
	}

	int Polygon::getVertexCount() const
	{
		return (vertex Count);
	}	
}