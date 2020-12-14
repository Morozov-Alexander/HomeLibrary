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
	/// Сводка для ChangeRoleForm
	/// </summary>
	public ref class ChangeRoleForm : public System::Windows::Forms::Form
	{
	public:
		LibraryManagement^ lib_manager;

		ChangeRoleForm(void)
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
		~ChangeRoleForm()
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
			this->button1->Location = System::Drawing::Point(220, 497);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(418, 153);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Передать права главы";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChangeRoleForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(178, 215);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Новый глава";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(310, 212);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(395, 26);
			this->textBox1->TabIndex = 2;
			// 
			// ChangeRoleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1227, 696);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"ChangeRoleForm";
			this->Text = L"ChangeRoleForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ new_head_user = textBox1->Text;
		lib_manager->fm->transferRights(new_head_user);
	}
	};
}
