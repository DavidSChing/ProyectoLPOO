#pragma once

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace EstacionPesajeController;
	using namespace EstacionPesajeModel;

	/// <summary>
	/// Resumen de frmEditarEstacionPesaje
	/// </summary>
	public ref class frmEditarEstacionPesaje : public System::Windows::Forms::Form
	{
	public:
		frmEditarEstacionPesaje(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmEditarEstacionPesaje(EstacionPesaje^ objEstacionPesaje) //Este constructor que recibe este parámetro, sirve para que este parámetro le de valor a un atributo
		{ /*revisar linea 62, se agregó un atributo correspondiente a este parámetro*/
			InitializeComponent();
			this->objEstacionPesaje = objEstacionPesaje;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarEstacionPesaje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: EstacionPesaje^ objEstacionPesaje; /*Este atributo lo agregamos porque necesitamos manejar la informacion de las EstacionesPesaje*/
		   /*No olvidar agregar los namespaces controller y model !!!!!!!*/
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(495, 416);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 31);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarEstacionPesaje::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(256, 416);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarEstacionPesaje::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(29, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(752, 341);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de la Estacion";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(227, 245);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(365, 26);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(227, 179);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(365, 26);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(227, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(365, 26);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(227, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(365, 26);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmEditarEstacionPesaje::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Longitud:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Latitud:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ubicacion:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo:";
			// 
			// frmEditarEstacionPesaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(936, 505);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEditarEstacionPesaje";
			this->Text = L"Editar Estacion Pesaje";
			this->Load += gcnew System::EventHandler(this, &frmEditarEstacionPesaje::frmEditarEstacionPesaje_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigoEstacionPesaje = Convert::ToInt32(this->textBox1->Text);
		String^ ubicacion = this->textBox2->Text;
		double latitud = Convert::ToDouble(this->textBox3->Text);
		double longitud = Convert::ToDouble(this->textBox4->Text);
		/*Esto se haría en caso tenga un cuadro de fecha
		  String^ fechaInicio = this->DateTimePicker1->Text;*/
		EstacionPesaje^ objEstacionPesaje = gcnew EstacionPesaje(codigoEstacionPesaje, ubicacion, latitud, longitud);
		/*El codigo de arriba lo reciclé del boton grabar de frmMantenimiento linea 205-212*/
		//Se procede a crear un metodo en EstacionPesajeController.h para que reciba la estacion objEstacionPesaje y lo actualice
		EstacionController^ objEstacionController = gcnew EstacionController();
		objEstacionController->actualizarEstacionPesaje(objEstacionPesaje);
		MessageBox::Show("La estacion se ha actualizado con éxito");
		this->Close();
	}
	
	private: System::Void frmEditarEstacionPesaje_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = Convert::ToString(this->objEstacionPesaje->getCodigo());
		this->textBox2->Text = this->objEstacionPesaje->getUbicacion();
		this->textBox3->Text = Convert::ToString(this->objEstacionPesaje->getLatitud());
		this->textBox4->Text = Convert::ToString(this->objEstacionPesaje->getLongitud());
	}/*Se cambia a string porque es un texto y codigo es un int, analogamente con latitud y longitud*/
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
