// Author @Clark Jason Ngo
#pragma once
#include <iostream>
class Publisher
{
    char pub[12];
    double turnover;

	protected:
		void register();

	public:
		Publisher();
		void enter();
		void display();
};

class Branch
{
    char city[20];

    protected:
        float employees;

    public:
        Branch();
        void haveit();
        void giveit();
};

class Author : private Branch, public Publisher
{
    int acode;
    char aname[20];
    float amount;

	public:
		Author();
		void start();
		void show();
};
