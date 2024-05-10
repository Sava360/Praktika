#pragma once
#include <cmath>

using namespace System::Windows::Forms::DataVisualization::Charting;

namespace Zadanie4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormZadanie4
	/// </summary>
	public ref class FormZadanie4 : public System::Windows::Forms::Form
	{
	public:
		FormZadanie4(void)
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
		~FormZadanie4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormZadanie4::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(182, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(515, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Посроение графика функции на интервале [xn; xk] ";
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 235);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(685, 202);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(516, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(251, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Заполните пустые поля:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(472, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(198, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Начальное значение xn=";
			this->label3->Click += gcnew System::EventHandler(this, &FormZadanie4::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(485, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(185, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Конечное значение xk=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(516, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Значение шага xh=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(462, 254);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(689, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Leave += gcnew System::EventHandler(this, &FormZadanie4::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(689, 118);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Leave += gcnew System::EventHandler(this, &FormZadanie4::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(689, 156);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Leave += gcnew System::EventHandler(this, &FormZadanie4::textBox3_Leave);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(512, 182);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 47);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Построить график";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormZadanie4::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(703, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 58);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormZadanie4::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(28, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(405, 174);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// FormZadanie4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(824, 449);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"FormZadanie4";
			this->Text = L"Выполнл судент группы 23-КФ Кселев С.Р. задание 4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	double x, xn, xk, xh, y;
	Series^ plot1 = chart1->Series[0];
	//Очистка компонента Chart1
	plot1->Points->Clear();
	//Проверка, что введены данные xn, xk, xh и их преобразование в переменные типа Double
		if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != ""))
		{
			xn = Convert::ToDouble(textBox1->Text);
			xk = Convert::ToDouble(textBox2->Text);
			xh = Convert::ToDouble(textBox3->Text);
			//Проверка правильности ввода данных
			if ((xn >= xk) || (xh > (xk - xn)))
			{
				MessageBox::Show("Данные заполнены неверно", "Ошибка ввода данных",MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation);
			}
			else
			{
				x = xn;
				while (x <= xk)
				{
					if (x <= 0) y = 2 * x + 2;
					else
						if (x > 0 && x < 5) y = sqrt(x + 3);
						else y = pow(cos(x + 2), 2);
					//Нанесение точки с координатами Х и У в компоненте Chart1
					plot1->Points->AddXY(x, y);

					x = x + xh;
				}
			}

		}
		else
		{
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
	t = 0;
	//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число)
	k = 0;
	//двигаем индексатор, если наше число отрицательное 
	if (str[t] == '-')
		t++;
	//число не может начинаться с запятой 
	if (str[t] == ',')
		a = false;
	while (t < l) {
		if (str[t] == ',')//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0)
				a = false;
			k++;
		}

		//если t-ый символ не лежит в диапазоне от '0' до '9'

		else if (str[t] < '0' || str[t]>'9')
			a = false;
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("xn не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю 
		this->textBox1->Focus();
	}

}

private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {

	int l, t, k;
	bool a = true;
	String^ str;
	str = textBox2->Text;
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
	while (t < l) {
		if (str[t] == ',')//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0)
				a = false;
			k++;
		}

		//если t-ый символ не лежит в диапазоне от '0' до '9'

		else if (str[t] < '0' || str[t]>'9')
			a = false;
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("xk не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю 
		this->textBox2->Focus();
	}

}

private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {

	int l, t, k;
	bool a = true;
	String^ str;
	str = textBox3->Text;
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
	while (t < l) {
		if (str[t] == ',')//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0)
				a = false;
			k++;
		}

		//если t-ый символ не лежит в диапазоне от '0' до '9'

		else if (str[t] < '0' || str[t]>'9')
			a = false;
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("xh не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю 
		this->textBox3->Focus();
	}

}
};
}
