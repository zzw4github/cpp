// stock00.h -- Stock class interface
// version 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock // claass declaration
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val;}
public:
	Stock();
	// constructor prototype with some default arguments
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	void acquire(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double priice);
	void show();
	~Stock();
}; //note semicolon at the end

#endif
