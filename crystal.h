#include "cartesian.h"
#include <iostream>

class Crystal
{
	public:
		Crystal() = default;
		void add_grain(int x, int y);
		void grow_right();
		Cartesian get_cells();

	private:
		Cartesian m_cells;
};

Cartesian Crystal::get_cells()
{
	return m_cells;	
}

void Crystal::grow_right()
{
	int space_size = m_cells.get_cartesian_space().size();
	int min = -1*space_size/2;
	int max = space_size/2;
	for(int i=min; i<max; i++)
	{
		for(int j=min; j<max-1; j++)
		{
			int x = m_cells.get_value(j+1, i);	
	  		if(m_cells.get_value(j+1, i) == 0)	
			{
				m_cells.set_value(j+1, i, 1);
				break;
			}
		}		
	}

}


		
