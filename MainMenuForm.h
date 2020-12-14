#pragma once
#include "CatalogsControlForm.h"
#include "UserManagerForm.h"
namespace HomeLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainMenuForm
	/// </summary>
	public ref class MainMenuForm : public System::Windows::Forms::Form
	{
	public:
		HomeLibrary::UserManagerForm^ um;
		MainMenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(87, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(330, 190);
			this->button1->TabIndex = 0;
			this->button1->Text = L"”правление пользовател€ми";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainMenuForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(517, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(330, 190);
			this->button2->TabIndex = 1;
			this->button2->Text = L"”правление каталогами";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainMenuForm::button2_Click);
			// 
			// MainMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 638);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MainMenuForm";
			this->Text = L"MainMenuForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		um->Show();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		HomeLibrary::CatalogsControlForm^ um = gcnew HomeLibrary::CatalogsControlForm;
		um->Show();

	}
	};
}
