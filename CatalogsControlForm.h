#pragma once

namespace HomeLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� CatalogsControlForm
	/// </summary>
	public ref class CatalogsControlForm : public System::Windows::Forms::Form
	{
	public:
		CatalogsControlForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~CatalogsControlForm()
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
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::CheckedListBox^ �������_1;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->�������_1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(36, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 64);
			this->button1->TabIndex = 0;
			this->button1->Text = L"������� �������";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(29, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 93);
			this->button2->TabIndex = 1;
			this->button2->Text = L"������������� �������";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(36, 246);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 80);
			this->button3->TabIndex = 2;
			this->button3->Text = L"������� �������";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(229, 28);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 68);
			this->button4->TabIndex = 3;
			this->button4->Text = L"����������� �������";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(229, 123);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(143, 80);
			this->button5->TabIndex = 4;
			this->button5->Text = L"�������� �����������";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(213, 246);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(159, 80);
			this->button6->TabIndex = 5;
			this->button6->Text = L"������� �����������";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(70, 381);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(240, 67);
			this->button7->TabIndex = 6;
			this->button7->Text = L"�������� �����������";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// �������_1
			// 
			this->�������_1->FormattingEnabled = true;
			this->�������_1->Location = System::Drawing::Point(502, 106);
			this->�������_1->Name = L"�������_1";
			this->�������_1->Size = System::Drawing::Size(315, 234);
			this->�������_1->TabIndex = 7;
			this->�������_1->SelectedIndexChanged += gcnew System::EventHandler(this, &CatalogsControlForm::checkedListBox1_SelectedIndexChanged);
			// 
			// CatalogsControlForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(931, 504);
			this->Controls->Add(this->�������_1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"CatalogsControlForm";
			this->Text = L"CatalogsControlForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
