#include <fstream>

int main()
{
	std::ifstream file("input.txt");
	std::ofstream new_file("output.txt");

	long long feb = 0;
	while (file >> feb)
	{
		long long pref_feb = 0;
		long long next_feb = 1;
		long long new_feb = 1;

		for (int i = 1; i < feb; i++)
		{
			new_feb = pref_feb + next_feb;
			pref_feb = next_feb;
			next_feb = new_feb;
		}

		new_file << new_feb;
		new_file << '\n';
	}

	return 0;
}