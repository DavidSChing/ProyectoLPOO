#pragma once
#include "frmNuevaEstacionPesaje.h"
#include "frmEditarEstacionPesaje.h"
#include "frmVerEstacionPesaje.h"

namespace EstacionPesajeView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace EstacionPesajeController;
	using namespace System::Collections::Generic;
	using namespace EstacionPesajeModel;

	/// <summary>
	/// Resumen de frmMantenimientoEstacionPesaje
	/// </summary>
	public ref class frmMantenimientoEstacionPesaje : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoEstacionPesaje(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmMantenimientoEstacionPesaje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button5;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(79, 51);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(641, 127);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de B�squeda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(317, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(152, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(125, 28);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ubicacion";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(55, 212);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(665, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"C�digo";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Ubicacion";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Latitud";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Longitud";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(131, 407);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 33);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(277, 407);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 33);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(438, 407);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 33);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(588, 407);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 33);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Ver";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::button5_Click);
			// 
			// frmMantenimientoEstacionPesaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 474);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantenimientoEstacionPesaje";
			this->Text = L"frmMantenimientoEstacionPesaje";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoEstacionPesaje::frmMantenimientoEstacionPesaje_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmMantenimientoEstacionPesaje_Load(System::Object^ sender, System::EventArgs^ e) {
		EstacionController^ objEstacionController = gcnew EstacionController();//mostrar en el ComboBox las ubicaciones de manera din�mica
		List<String^>^ listaUbicacion = objEstacionController->obtenerUbicacion();
		this->comboBox1->Items->Clear();
		for (int i = 0; i < listaUbicacion->Count; i++) {
			this->comboBox1->Items->Add(listaUbicacion[i]);
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
 		String^ ubicacion = this->comboBox1->Text; /*De esta forma obtengo el tecto que selecciono en el comboBox*/
		EstacionController^ objEstacionController = gcnew EstacionController();
		List<EstacionPesaje^>^ listaEstacionPesaje = objEstacionController->buscarEstacionPesaje(ubicacion);
		mostrarGrilla(listaEstacionPesaje);
	}

	private: void mostrarGrilla(List<EstacionPesaje^>^ listaEstacionPesaje) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaEstacionPesaje->Count; i++) {
			EstacionPesaje^ objEstacion = listaEstacionPesaje[i];
			/*Esta filaGrilla representa una fila del data grid de la pantalla*/
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = Convert::ToString(objEstacion->getCodigo());
			filaGrilla[1] = objEstacion->getUbicacion();
			filaGrilla[2] = Convert::ToString(objEstacion->getLatitud());
			filaGrilla[3] = Convert::ToString(objEstacion->getLongitud());

			this->dataGridView1->Rows->Add(filaGrilla);

		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		EstacionController^ objeto;
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		objeto->eliminarEstacionFisico(codigoEliminar);
		MessageBox::Show("La Estacion ha sido eliminado con �xito");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNuevaEstacionPesaje^ ventanaNuevaEstacionPesaje = gcnew frmNuevaEstacionPesaje();
		ventanaNuevaEstacionPesaje->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		EstacionController^ objEstacionController = gcnew EstacionController();
		EstacionPesaje^ objEstacionPesaje = objEstacionController->buscarEstacionxCodigo(codigoEditar);
		frmEditarEstacionPesaje^ ventanaEditarEstacionPesaje = gcnew frmEditarEstacionPesaje(objEstacionPesaje); /*Para eliminar este error, revisar la linea 26-32 de frmEditarEstacionPesaje.h*/
		ventanaEditarEstacionPesaje->ShowDialog();
		/*Se pone objEstacionPesaje detro de frmEditar ya que se quiere que
		los datos de ese objeto aparezcan en la ventana desde el inicio*/
	}	
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		int codigoVer = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		EstacionController^ objEstacionController = gcnew EstacionController();
		EstacionPesaje^ objEstacionPesaje = objEstacionController->buscarEstacionxCodigo(codigoVer);
		frmVerEstacionPesaje^ ventanaVerEstacionPesaje = gcnew frmVerEstacionPesaje(objEstacionPesaje); /*Para eliminar este error, revisar la linea 26-32 de frmEditarEstacionPesaje.h*/
		ventanaVerEstacionPesaje->ShowDialog();
	}
};
}
