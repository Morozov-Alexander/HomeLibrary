#pragma once
ref class Comment
{
private: 
	System::String^ record;
	System::String^ date;

public:
	void setRecord(System::String^);
	void setDate(System::String^);

	System::String^ getRecord();
	System::String^ getDate();

	System::String^ editRecord(System::String^);



};

