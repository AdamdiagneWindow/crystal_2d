#include <vector>

class Cartesian
{
	public:
		Cartesian();
		void set_value(int x, int y, int val);
		int get_value(int x, int y);
		std::vector<std::vector<int>> get_cartesian_space();
		

	private:
		int size = 10;
		std::vector<std::vector<int>>  m_cartesian_space;

};

Cartesian::Cartesian()
{
	m_cartesian_space.resize(size, std::vector<int>(size));
}

void Cartesian::set_value(int x, int y, int val)
{
	m_cartesian_space[x+size/2][-1*y+size/2] = val;
}

int Cartesian::get_value(int x, int y)
{
	return m_cartesian_space[x+size/2][-1*y+size/2];
}

std::vector<std::vector<int>> Cartesian::get_cartesian_space()
{
	return m_cartesian_space;
}
