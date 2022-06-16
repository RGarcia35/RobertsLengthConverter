#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox2;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 6);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(5, 2, 5, 2);
			this->label1->Size = System::Drawing::Size(261, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Length Conversion";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 200);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(5, 2, 5, 2);
			this->label2->Size = System::Drawing::Size(261, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Result";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Cursor = System::Windows::Forms::Cursors::Default;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(10, 237);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(5, 2, 5, 2);
			this->label3->Size = System::Drawing::Size(265, 115);
			this->label3->TabIndex = 3;
			this->label3->Text = L"0";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(30, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Convert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(30, 105);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 22);
			this->textBox1->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Inches (in)", L"Millimeters (mm)", L"Centimeters (cm)",
					L"Meters (m)", L"Kilometers (km)"
			});
			this->comboBox1->Location = System::Drawing::Point(30, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(110, 21);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(71, 46);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"From";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(203, 46);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"To";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(159, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(189, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Units";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Inches (in)", L"Millimeters (mm)", L"Centimeters (cm)",
					L"Meters (m)", L"Kilometers (km)"
			});
			this->comboBox2->Location = System::Drawing::Point(159, 65);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(110, 21);
			this->comboBox2->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(289, 386);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Length Converter";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//inches to metric
		private: double convertToInches(String^ distance, double userInput) {
			if (distance == "Inches (in)") {
				return userInput;
			}
			else if (distance == "Millimeters (mm)") {
				return userInput / 25.4;
			}
			else if (distance == "Centimeters (cm)") {
				return userInput / 2.54;
			}
			else if (distance == "Meters (m)") {
				return userInput / .0254;
			}
			else if (distance == "Kilometers (km)") {
				return userInput / 0.0000254;
			}
			else {
				return 0;
			}
			
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			
			//String input = System::Convert::ToString(comboBox1->SelectedItem);
			double output;
			double input;
			
			try {
				input = System::Convert::ToDouble(textBox1->Text);
			}
			catch(System::Exception^ FormatException) {
				input = 0;
				label3->Text = "ERROR";
				return;
			}

			input = convertToInches(comboBox1->Text, input);

			if (comboBox2->Text == "Inches (in)") {
				output = input;
				label3->Text = output.ToString("n4") + " Inches";
			}
			else if (comboBox2->Text == "Millimeters (mm)") {
				output = input * 25.4;
				label3->Text = output.ToString("n4") + " Millimeters";
			}
			else if (comboBox2->Text == "Centimeters (cm)") {
				output = input * 2.54;
				label3->Text = output.ToString("n4") + " Centimeters";
			}
			else if (comboBox2->Text == "Meters (m)") {
				output = input * .0254;
				label3->Text = output.ToString("n4") + " Meters";
			}
			else if (comboBox2->Text == "Kilometers (km)") {
				output = input * 0.0000254;
				label3->Text = output.ToString("n4") + " Kilometers";
			}
			else {
				output = 0;
				label3->Text = output.ToString("n4");
			}
		}
		
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		
		private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			label6->Text = comboBox1->Text;
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			//reset
			label6->Text = "Units";
			textBox1->Text = "";
			label3->Text = "";
		}
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	};
}
