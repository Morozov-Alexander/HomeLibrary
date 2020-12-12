#pragma once
ref class Rating
{
private:
	int rate;
	System::String^ date;
public:
	void setRate(int);
	void setDate(System::String^);

	int getRate();
	System::String^ getDate();

	int editRate(int);
};

