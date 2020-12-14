#pragma once
#include"LibraryManagement.h"

namespace HomeLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для DeleteFamilyMemberForm
	/// </summary>
	public ref class DeleteFamilyMemberForm : public System::Windows::Forms::Form
	{
	public:
		LibraryManagement^ lib_manager;

		DeleteFamilyMemberForm(void)
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
		~DeleteFamilyMemberForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(105, 423);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(597, 241);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Удалить пользователя";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DeleteFamilyMemberForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(188, 268);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Пользователь";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(349, 265);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(378, 26);
			this->textBox1->TabIndex = 2;
			// 
			// DeleteFamilyMemberForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1160, 727);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"DeleteFamilyMemberForm";
			this->Text = L"DeleteFamilyMemberForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ del_user = textBox1->Text;
		lib_manager->fm->deleteFamilyMember(del_user);
	}
	};
}
