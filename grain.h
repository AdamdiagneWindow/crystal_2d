#ifndef GRAIN
#define GRAIN 
class Grain
{
	public:
		Grain() = default;
		Grain(int x, int y): x_pos(x), y_pos(y){}
	private:
		int x_pos = 0;
		int y_pos = 0;
};

#endif
