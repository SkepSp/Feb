#include <fstream>

long long Finder(int feb)
{
	if (feb <= 0) { return 0; }
	if (feb == 1) { return 1; }
	else { return Finder(feb - 1) + Finder(feb - 2); }
}

int main()
{
	std::ifstream file("input.txt");
	std::ofstream new_file("output.txt");

	long long feb = 0;

	while (file>>feb)
	{
		new_file << Finder(feb);
		new_file << '\n';
	}

	return 0;
} 
