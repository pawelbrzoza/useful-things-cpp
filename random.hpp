#include <random>

int getRandomNum(const int& from, const int& to)
{
	std::random_device rd;
	std::default_random_engine rnd(rd());
	std::uniform_int_distribution<int> dist(from, to);
	return dist(rnd);
}