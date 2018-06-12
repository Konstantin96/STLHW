#include "Clients.h"
#include <time.h>
#include <set>
#include <algorithm>
#include <math.h>

class less05
{
public:
	bool operator ()(double d) {
		return (sin(d) > 0.5);
	}
};

string& toLowerString(string &s);
void print(double d);

int main() {
	int nz;
	do
	{
		nz == 0;
		cout << "Enter task(0-close programm):"; cin >> nz;
		int count = 0;
		//1
		if (nz == ++count) {
			map<char, int> words;
			char word;

			ifstream in_file("in.txt");
			if (!in_file) {
				cerr << "Error open file!\n";
			}
			else {
				while (!in_file.eof()) {
					in_file >> word;
					words[word]++;
				}
			}
			for (auto it = words.begin(); it != words.end(); it++)
			{
				cout << it->first << "\t" << it->second << endl;
			}

		}
		//2
		else if (nz == ++count) {
			priority_queue<int>pq1;
			pq1.push(5);
			pq1.push(2);
			pq1.push(3);
			pq1.push(8);
			pq1.push(7);
			pq1.push(6);
			pq1.push(4);
			pq1.push(9);
			pq1.push(1);
			while (!pq1.empty())
			{
				cout << pq1.top() << endl;
				pq1.pop();
			}
		}
		//3
		else if (nz == ++count) {
			priority_queue<Client>auk;
			srand(time(NULL));

			double k = 100.5 / 3.4 + rand() % 900 / 100.5 / 3.4 + rand() % 900;
			double s = 100.5 / 3.4 + rand() % 900 / 100.5 / 3.4 + rand() % 900;
			double l = 100.5 / 3.4 + rand() % 900 / 100.5 / 3.4 + rand() % 900;
			auk.push(Client("Oleg", k));
			auk.push(Client("Sasha", s));
			auk.push(Client("Dima", l));
			cout << "Win :" << auk.top() << endl;
		}
		//4
		else if (nz == ++count) {
			ifstream in_file;
			string file_name;
			string word;
			deque<string> words;
			set<string>ordered_words;
			cout << "Enter file name\n";
			cin >> file_name;
			in_file.open(file_name);
			if (!in_file) {
				cerr << "file open error\n";
			}
			else {
				while (!in_file.eof()) {
					in_file >> word;
					words.push_back(word);
				}
			}
			for (auto it = words.begin(); it != words.end(); it++)
			{
				ordered_words.insert(toLowerString(*it));
			}
			for (auto it = ordered_words.begin(); it != ordered_words.end(); it++)
			{
				cout << *it << endl;
			}
		}
		//5
		else if (nz == ++count) {
			vector<double> vd;
			vd.push_back(5);
			vd.push_back(5.2);
			vd.push_back(1.6);
			vd.push_back(2.3);
			auto itr = vd.erase(remove_if(vd.begin(), vd.end(), less05()), vd.end());
			for_each(vd.begin(), vd.end(), print);
		}
		else {
			cout << "Error!!!\n";
			cout << "Vsego zadaniy - " << count << endl;
		}

		system("pause");
		system("cls");
	} while (nz != 0);
	return 0;
}

string& toLowerString(string &s) {
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
	return s;
}


void print(double d) {
	cout << d << endl;
}
