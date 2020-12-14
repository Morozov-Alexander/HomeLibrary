#pragma once
#include "Role.h"
#include "LibraryManagement.h"
namespace HomeLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CreateUserForm
	/// </summary>
	public ref class CreateUserForm : public System::Windows::Forms::Form
	{

	public:
		LibraryManagement^ lib_manager;
		CreateUserForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CreateUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(177, 394);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(345, 137);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Создать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateUserForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(160, 145);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(390, 26);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(160, 177);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(390, 26);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(160, 236);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(390, 26);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(160, 295);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(390, 26);
			this->textBox4->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Имя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(67, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Логин";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(67, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Пароль";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(67, 295);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Роль";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(601, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Пользователи:\r\n";
			this->label5->Click += gcnew System::EventHandler(this, &CreateUserForm::label5_Click);
			// 
			// CreateUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(783, 598);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"CreateUserForm";
			this->Text = L"CreateUserForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ name = this->textBox1->Text;
		System::String^ login = this->textBox2->Text;
		int password = Convert::ToInt32(this->textBox3->Text);
		Role role = Role(Convert::ToInt32(this->textBox4->Text));
		lib_manager->fm->createFamilyMember(name, password, role, login);
		for (int i = 0; i < lib_manager->fm->users->users.size(); i++)
			label5->Text += lib_manager->fm->users->users[i]->getName() + "\n";

	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
