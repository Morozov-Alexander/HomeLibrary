#pragma once
#include "FamilyManagement.h"
#include "LibraryManagement.h"
#include "CreateUserForm.h"

namespace HomeLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для UserManagerForm
	/// </summary>
	public ref class UserManagerForm : public System::Windows::Forms::Form
	{
	public:
		LibraryManagement^ lib_manager;
		CreateUserForm^ create_user;
		UserManagerForm(void)
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
		~UserManagerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(417, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(352, 127);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Удалить члена семьи";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserManagerForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(417, 186);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(352, 127);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Добавить члена семьи";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UserManagerForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(417, 335);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(352, 127);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Редактировать члена семьи";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(417, 482);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(352, 127);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Передать права главы";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(417, 641);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(352, 127);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Добавить ограничения";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// UserManagerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1350, 780);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"UserManagerForm";
			this->Text = L"UserManagerForm";
			this->Load += gcnew System::EventHandler(this, &UserManagerForm::UserManagerForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UserManagerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		create_user->Show();
	}
};
}
