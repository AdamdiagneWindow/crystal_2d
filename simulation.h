#include "crystal.h"
#include <iostream>

class Simulation
{
	public:
		Simulation() = default;
		Simulation(int n): m_steps(n){}
		void run();
		void render_crystal_state(Crystal crystal);

	private:
		int m_steps;
		Crystal m_crystal = Crystal();

};

void Simulation::run()
{
	std::cout << "starting simulation" << std::endl;
	for(int i=0; i<m_steps; i++)
	{
		std::cout << "step: ";
		std::cout << i << std::endl;
		m_crystal.grow_right();
		render_crystal_state(m_crystal);
	}	

}

void Simulation::render_crystal_state(Crystal crystal)
{
	int space_size = m_crystal.get_cells().get_cartesian_space().size();
	int min = -1*space_size/2;
	int max = space_size/2;
	for(int i=min; i<max; i++)
	{
		for(int j=min; j<max; j++)
		{
			if(m_crystal.get_cells().get_value(j,i) == 1)
				std::cout << "*";
		}
		std::cout << std::endl;
	}
			
}
