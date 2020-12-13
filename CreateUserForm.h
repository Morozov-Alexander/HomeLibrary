#pragma once

namespace HomeLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ CreateUserForm
	/// </summary>
	public ref class CreateUserForm : public System::Windows::Forms::Form
	{
	public:
		CreateUserForm(void)
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
		~CreateUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::CheckedListBox^ Alex;

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
			this->Alex = (gcnew System::Windows::Forms::CheckedListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(251, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(265, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"”далить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Alex
			// 
			this->Alex->FormattingEnabled = true;
			this->Alex->Location = System::Drawing::Point(221, 163);
			this->Alex->Name = L"Alex";
			this->Alex->Size = System::Drawing::Size(316, 165);
			this->Alex->TabIndex = 1;
			// 
			// CreateUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(783, 598);
			this->Controls->Add(this->Alex);
			this->Controls->Add(this->button1);
			this->Name = L"CreateUserForm";
			this->Text = L"CreateUserForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
