#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
using namespace MaterialSkin;
using namespace MaterialSkin::Controls;

namespace Airport 
{
	public ref class AirplanesForm : public System::Windows::Forms::Form
	{
	public:
		AirplanesForm();
		~AirplanesForm();
	private:
		void InitializeComponent(void);
		void LoadAirplanes();

		MaterialSingleLineTextField^ txtModel;
		MaterialSingleLineTextField^ txtYear;
		MaterialFlatButton^ btnSearch;
		DataGridView^ dataGridViewAirplanes;
		SqlConnection^ sqlConnection;
		System::ComponentModel::IContainer^ components;
	};
}