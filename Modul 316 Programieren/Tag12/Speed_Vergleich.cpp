// ***************************************************
// Projekt:      Speed_Vergleich
// Author:       Gresa Hisa
// Datum:        25.11.2026
// Programmname: Speed_Vergleich.cpp
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <chrono>
#include <array>

using namespace std;
using namespace std::chrono;

struct Data {
	array<int, 256> values{};

	Data() {
		for (int i = 0; i < 256; ++i)
			values[i] = i;
	}
};

long long process_by_value(Data d) {
	long long sum = 0;
	for (int i = 0; i < 100000; ++i) {
		sum += d.values[i % 256];
		d.values[i % 256] += 1;
	}
	return sum;
}

long long process_by_reference(Data& d) {
	long long sum = 0;
	for (int i = 0; i < 100000; ++i) {
		sum += d.values[i % 256];
		d.values[i % 256] += 1;
	}
	return sum;
}

long long process_by_pointer(Data* d) {
	long long sum = 0;
	for (int i = 0; i < 100000; ++i) {
		sum += d->values[i % 256];
		d->values[i % 256] += 1;
	}
	return sum;
}

int main() {
	Data data;

	cout << "Vergleich by value / by reference / by pointer\n";
	cout << "----------------------------------------------\n";

	for (int run = 1; run <= 3; ++run) {
		cout << "\nLauf " << run << ":\n";

		Data copy1 = data;
		Data copy2 = data;
		Data copy3 = data;

		// By Value
		{
			auto start = steady_clock::now();
			long long total = 0;
			for (int i = 0; i < 10000; ++i)
				total += process_by_value(copy1);
			auto end = steady_clock::now();
			cout << "By Value     : " << duration_cast<microseconds>(end - start).count()
			     << " us  (sum = " << total << ")\n";
		}

		// By Reference
		{
			auto start = steady_clock::now();
			long long total = 0;
			for (int i = 0; i < 10000; ++i)
				total += process_by_reference(copy2);
			auto end = steady_clock::now();
			cout << "By Reference : " << duration_cast<microseconds>(end - start).count()
			     << " us  (sum = " << total << ")\n";
		}

		// By Pointer
		{
			auto start = steady_clock::now();
			long long total = 0;
			for (int i = 0; i < 10000; ++i)
				total += process_by_pointer(&copy3);
			auto end = steady_clock::now();
			cout << "By Pointer   : " << duration_cast<microseconds>(end - start).count()
			     << " us  (sum = " << total << ")\n";
		}
	}
	system("PAUSE");
	return 0;
}
