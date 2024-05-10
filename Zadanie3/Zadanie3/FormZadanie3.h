#pragma once
#include <math.h>

namespace Zadanie3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormZadanie3
	/// </summary>
	public ref class FormZadanie3 : public System::Windows::Forms::Form
	{
	public:
		FormZadanie3(void)
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
		~FormZadanie3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormZadanie3::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(28, 372);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(410, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Показать таблицу и экстремумы функции";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormZadanie3::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(465, 372);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(256, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormZadanie3::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(288, 183);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Leave += gcnew System::EventHandler(this, &FormZadanie3::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(288, 232);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Leave += gcnew System::EventHandler(this, &FormZadanie3::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(288, 279);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &FormZadanie3::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(288, 324);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 5;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &FormZadanie3::textBox4_TextChanged);
			this->textBox4->Leave += gcnew System::EventHandler(this, &FormZadanie3::textBox4_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(36, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Введите значение xn=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(36, 232);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Введите значение xk=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(36, 279);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Введите шаг xh=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(36, 325);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Введите значение a=";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(39, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(349, 121);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(462, 279);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(153, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Макс. знач. функции :";
			this->label5->Click += gcnew System::EventHandler(this, &FormZadanie3::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(462, 325);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Мин. знач. функции :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(465, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(256, 220);
			this->dataGridView1->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(621, 276);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(621, 322);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 15;
			// 
			// FormZadanie3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(755, 432);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"FormZadanie3";
			this->Text = L"Выполнил студент группы 23-КФ Киселев С.Р. задание 3";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	double xn, xk, xh, x, y, a, ymax, ymin, yt;
	int n, i;
	//Проверка ввода данных в компоненты textBox
	if ((textBox1->Text != "") && (textBox2->Text != "") &&
		(textBox3->Text != "") && (textBox4->Text != ""))
	{
		//Преобразование введенных данных в тип double
		xn = Convert::ToDouble(textBox1->Text);
		xk = Convert::ToDouble(textBox2->Text);
		xh = Convert::ToDouble(textBox3->Text);
		a = Convert::ToDouble(textBox4->Text);
		//Очистка столбцов таблицы
		dataGridView1->Columns->Clear();
		//Создание двух столбцов в таблице
		dataGridView1->ColumnCount = 2;
		//Создание в таблице строк
		dataGridView1->Rows->Add(ceil((xk - xn) / xh));
		//Занесение в верхнюю строку таблицы в первую ячейку текст «Х», во вторую текст «У»
			dataGridView1->Columns[0]->Name = " X";
		dataGridView1->Columns[1]->Name = " Y";
		i = 0;
		x = xn;
		ymax = -1.8e307; ymin = 1.8e307;
		while (x <= xk)
		{
			if (x <= 0) { y = pow(x*x+x+1,1/5); }
			else
				if (x <= a) { y = pow(log(fabs(sqrt(x+5))), 3); }
				else
				{
					y = sin(x*x)+pow(x,0.25);
				}
			//Занесение в первый столбец значений аргумента Х
			dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
			//Переменной yt присваивает округленное до двух знаков после запятой значение у
				yt = ceil(y * 100) / 100;
			//Вывод во втором столбце таблицы значение функции У
			dataGridView1->Rows[i]->Cells[1]->Value
				= Convert::ToString(yt);
			//находит максимальное и минимальное значение и округляет до двух знаков после запятой
				if (y > ymax) ymax = ceil(y * 100) / 100; 
				if (y < ymin) ymin = ceil(y * 100) / 100;
			x = x + xh;
			i++;
		}
		//выводит в компоненты textbox максимальное и минимальное значение функции
			textBox5->Text = Convert::ToString(ymax);
		textBox6->Text = Convert::ToString(ymin);
	}
	else {
		MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k;
	bool a = true; 
	String^ str;
	str = textBox1->Text;
	l = str->Length;
	//индекс символа, с которым работаем
	t=0;
	//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число) 
	k = 0;
	//двигаем индексатор, если наше число отрицательное 
	if(str[t]=='-') 
		t++;
	//число не может начинаться с запятой 
	if(str[t]==',') 
		a=false; 
	while(t<l)
{ if (str[t] == ',')//если запятая стоит последним символом или запятая уже была найдена
	{
		if (t == l - 1 || k > 0) a = false;
			k++;

	}

//если t-ый символ не лежит в диапазоне от '0' до '9' 
	else if(str[t]<'0' || str[t] > '9') 
		a = false;

	t++;
}
if (a == false)
{
	MessageBox::Show("параметр А не является числом", "Ошибка ввода данных",MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	//возврат фокуса текстовому полю 
	this->textBox1->Focus();
}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k;
	bool a = true;
	String^ str;
	str = textBox1->Text;
	l = str->Length;
	//индекс символа, с которым работаем
	t = 0;
	//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число) 
	k = 0;
	//двигаем индексатор, если наше число отрицательное 
	if (str[t] == '-')
		t++;
	//число не может начинаться с запятой 
	if (str[t] == ',')
		a = false;
	while (t < l)
	{
		if (str[t] == ',')//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0) a = false;
			k++;

		}

		//если t-ый символ не лежит в диапазоне от '0' до '9' 
		else if (str[t] < '0' || str[t] > '9')
			a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю 
		this->textBox1->Focus();
	}
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k;
	bool a = true;
	String^ str;
	str = textBox1->Text;
	l = str->Length;
	//индекс символа, с которым работаем
	t = 0;
	//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число) 
	k = 0;
	//двигаем индексатор, если наше число отрицательное 
	if (str[t] == '-')
		t++;
	//число не может начинаться с запятой 
	if (str[t] == ',')
		a = false;
	while (t < l)
	{
		if (str[t] == ',')//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0) a = false;
			k++;

		}

		//если t-ый символ не лежит в диапазоне от '0' до '9' 
		else if (str[t] < '0' || str[t] > '9')
			a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю 
		this->textBox1->Focus();
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k;
	bool a = true;
	String^ str;
	str = textBox1->Text;
	l = str->Length;
	//индекс символа, с которым работаем
	t = 0;
	//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число) 
	k = 0;
	//двигаем индексатор, если наше число отрицательное 
	if (str[t] == '-')
		t++;
	//число не может начинаться с запятой 
	if (str[t] == ',')
		a = false;
	while (t < l)
	{
		if (str[t] == ',')//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0) a = false;
			k++;

		}

		//если t-ый символ не лежит в диапазоне от '0' до '9' 
		else if (str[t] < '0' || str[t] > '9')
			a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю 
		this->textBox1->Focus();
	}
}
};
}
