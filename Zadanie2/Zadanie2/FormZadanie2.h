#pragma once
#include <cmath>
#include <string.h>

namespace Zadanie2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� FormZadanie2
	/// </summary>
	public ref class FormZadanie2 : public System::Windows::Forms::Form
	{
	public:
		FormZadanie2(void)
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
		~FormZadanie2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormZadanie2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(36, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormZadanie2::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(249, 294);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormZadanie2::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(103, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"���������� �������� �������";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(231, 173);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormZadanie2::textBox1_TextChanged);
			this->textBox1->Enter += gcnew System::EventHandler(this, &FormZadanie2::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &FormZadanie2::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(231, 213);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Enter += gcnew System::EventHandler(this, &FormZadanie2::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &FormZadanie2::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(231, 251);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(135, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &FormZadanie2::textBox3_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(34, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"������� �������� a:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(34, 211);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"������� �������� x:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(32, 249);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(177, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"�������� ������� y =";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(24, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(372, 115);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// FormZadanie2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 365);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"FormZadanie2";
			this->Text = L"�������� ������� ������ 23-�� ������� �.�. ������� 2";
			this->Load += gcnew System::EventHandler(this, &FormZadanie2::FormZadanie2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FormZadanie2_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	double y, x, a;
	//��������, ��� ������ ��� � � � �������
	if ((textBox1->Text != "") && (textBox2->Text != ""))
	{
		//�������������� �� ������ � ������� ����� � � � 
		a =Convert::ToDouble(textBox1->Text);
		x = Convert::ToDouble(textBox2->Text);
		if (x <= 0)
			y = pow(abs(x),2*x+1);
		else if (x > 0 && x <= a) {

			y = sin(pow(x,2));

		} else {

				y = pow(log(x),2)+sqrt(x);

			};
		//����� � ���������� �extBox3 ���������������� � ����� �������� �
		textBox3->Text = Convert::ToString(y);
	}
	else //����� ���� � ����������, ���� �� ������� ������ � ���������� �extBox1 � �extBox2
	{
		MessageBox::Show("������� ���������� ������ � � �", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//������ �������, � ������� �������� 
	t=0;
	//����������� ������� � ������ (���� �������� �������� 0, 2384, 1254, 1251 � ��� �� �����)
	k = 0;
	//������� ����������, ���� ���� ����� ������������� 
	if(str[t]=='-')
		t++;
	//����� �� ����� ���������� � �������
	 if(str[t]==',') 
		 a=false; 
	 while(t<l){
		 if (str[t] == ',')//���� ������� ����� ��������� �������� ��� ������� ��� ���� �������
		{
			if (t == l - 1 || k > 0)
				a = false;
			k++;

		}

//���� t-�� ������ �� ����� � ��������� �� '0' �� '9' 
else if(str[t]<'0' || str[t] > '9')
a = false;

t++;
}
if (a == false)
{
	MessageBox::Show("�������� � �� �������� ������", "������ ����� ������",MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	//������� ������ ���������� ���� 
	this->textBox1->Focus();
}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	//������ �������, � ������� ��������
	t=0;
	//����������� ������� � ������ (���� �������� �������� 0, 2384, 1254, 1251 � ��� �� �����)
	 k = 0;
	//������� ����������, ���� ���� ����� ������������� 
	if(str[t]=='-') 
		t++;
	//����� �� ����� ���������� � ������� 
	if(str[t]==',')
		a=false; 
	while(t<l) {
		if (str[t] == ',')//���� ������� ����� ��������� �������� ��� ������� ��� ���� �������
		{
			if (t == l - 1 || k > 0) 
				a = false;
			k++;
		}

//���� t-�� ������ �� ����� � ��������� �� '0' �� '9'

		else if (str[t] < '0' || str[t]>'9')
			a = false;
		t++;
	}
if (a == false)
{
	MessageBox::Show("�������� � �� �������� ������", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	//������� ������ ���������� ���� 
	this->textBox2->Focus();
}
}
private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
};
}
