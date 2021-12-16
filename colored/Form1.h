#pragma once
using namespace std;
#include <fstream>
#include <string>

namespace colored {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::IO;


	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			chart1->Series[0]->Points->Clear();//очистка графика
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripMenuItem^ menuColored;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ randomGraph;
	private: System::Windows::Forms::ToolStripMenuItem^ loadGraph;
	private: System::Windows::Forms::ToolStripMenuItem^ вводToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::NumericUpDown^ edgeChange;

	private: System::Windows::Forms::NumericUpDown^ vertexChange;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuSaveResult;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuExit;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveGraph;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint2 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint3 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint4 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint5 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint6 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint7 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint8 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint9 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint10 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint11 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint12 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint13 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint14 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint15 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint16 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint17 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint18 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint19 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint20 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint21 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint22 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint23 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuColored = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->randomGraph = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadGraph = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вводToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->edgeChange = (gcnew System::Windows::Forms::NumericUpDown());
			this->vertexChange = (gcnew System::Windows::Forms::NumericUpDown());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuSaveResult = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveGraph = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edgeChange))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vertexChange))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			this->menuColored->Font = (gcnew System::Drawing::Font(L"Black Diamond", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuColored->ForeColor = System::Drawing::Color::Goldenrod;
			this->menuColored->Name = L"menuColored";
			this->menuColored->Size = System::Drawing::Size(97, 42);
			this->menuColored->Text = L"Раскраска";
			this->menuColored->Click += gcnew System::EventHandler(this, &Form1::menuColored_Click);
			this->randomGraph->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->randomGraph->Name = L"randomGraph";
			this->randomGraph->Size = System::Drawing::Size(270, 34);
			this->randomGraph->Text = L"Случайный";
			this->randomGraph->Click += gcnew System::EventHandler(this, &Form1::randomGraph_Click);
			this->loadGraph->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->loadGraph->Name = L"loadGraph";
			this->loadGraph->Size = System::Drawing::Size(270, 34);
			this->loadGraph->Text = L"Из файла";
			this->loadGraph->Click += gcnew System::EventHandler(this, &Form1::loadGraph_Click);
			this->вводToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->loadGraph,
					this->randomGraph
			});
			this->вводToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Black Diamond", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->вводToolStripMenuItem->ForeColor = System::Drawing::Color::Goldenrod;
			this->вводToolStripMenuItem->Name = L"вводToolStripMenuItem";
			this->вводToolStripMenuItem->Size = System::Drawing::Size(64, 42);
			this->вводToolStripMenuItem->Text = L"Ввод";
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->edgeChange);
			this->groupBox1->Controls->Add(this->vertexChange);
			this->groupBox1->Location = System::Drawing::Point(18, 55);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(291, 585);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"                                ";
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1, this->Column2,
					this->Column3
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::AppWorkspace;
			this->dataGridView1->Location = System::Drawing::Point(15, 112);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(261, 448);
			this->dataGridView1->TabIndex = 9;
			this->Column1->HeaderText = L"№ п/п";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 45;
			dataGridViewCellStyle1->NullValue = L"0";
			this->Column2->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column2->HeaderText = L"Начало";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 55;
			dataGridViewCellStyle2->NullValue = L"0";
			this->Column3->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column3->HeaderText = L"Конец";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 55;
			this->edgeChange->BackColor = System::Drawing::Color::White;
			this->edgeChange->Location = System::Drawing::Point(188, 69);
			this->edgeChange->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->edgeChange->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000, 0, 0, 0 });
			this->edgeChange->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->edgeChange->Name = L"edgeChange";
			this->edgeChange->ReadOnly = true;
			this->edgeChange->Size = System::Drawing::Size(87, 26);
			this->edgeChange->TabIndex = 8;
			this->edgeChange->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->edgeChange->ValueChanged += gcnew System::EventHandler(this, &Form1::edgeChange_ValueChanged);
			this->vertexChange->BackColor = System::Drawing::Color::White;
			this->vertexChange->Location = System::Drawing::Point(188, 29);
			this->vertexChange->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vertexChange->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->vertexChange->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->vertexChange->Name = L"vertexChange";
			this->vertexChange->ReadOnly = true;
			this->vertexChange->Size = System::Drawing::Size(87, 26);
			this->vertexChange->TabIndex = 6;
			this->vertexChange->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->vertexChange->ValueChanged += gcnew System::EventHandler(this, &Form1::vertexChange_ValueChanged);
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuSaveResult });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(254, 36);
			this->menuSaveResult->Name = L"menuSaveResult";
			this->menuSaveResult->Size = System::Drawing::Size(253, 32);
			this->menuSaveResult->Text = L"Сохранить результат";
			this->menuSaveResult->Click += gcnew System::EventHandler(this, &Form1::menuSaveResult_Click);
			this->listBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(4, 24);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(236, 372);
			this->listBox1->TabIndex = 0;
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Location = System::Drawing::Point(977, 55);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox2->Size = System::Drawing::Size(244, 401);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"                                      ";
			this->openFileDialog1->Filter = L"Файлы списков ребер|*.el";
			this->saveFileDialog1->DefaultExt = L"el";
			this->saveFileDialog1->Filter = L"Файлы списков ребер|*.el";
			this->menuExit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->menuExit->Name = L"menuExit";
			this->menuExit->Size = System::Drawing::Size(270, 34);
			this->menuExit->Text = L"Выход";
			this->menuExit->Click += gcnew System::EventHandler(this, &Form1::menuExit_Click);
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(267, 6);
			this->saveGraph->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->saveGraph->Name = L"saveGraph";
			this->saveGraph->Size = System::Drawing::Size(270, 34);
			this->saveGraph->Text = L"Сохранить...";
			this->saveGraph->Click += gcnew System::EventHandler(this, &Form1::saveGraph_Click);
			this->файлToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->файлToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->saveGraph,
					this->toolStripMenuItem1, this->menuExit
			});
			this->файлToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Black Diamond", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->файлToolStripMenuItem->ForeColor = System::Drawing::Color::Goldenrod;
			this->файлToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Black;
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(70, 42);
			this->файлToolStripMenuItem->Text = L"Файл";
			this->файлToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->файлToolStripMenuItem,
					this->вводToolStripMenuItem, this->menuColored
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1242, 46);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			this->saveFileDialog2->DefaultExt = L"jpg";
			this->saveFileDialog2->Filter = L"Файлы изображений|*.jpg";
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart1->BorderlineColor = System::Drawing::Color::Black;
			this->chart1->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			chartArea1->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->ContextMenuStrip = this->contextMenuStrip1;
			this->chart1->Location = System::Drawing::Point(320, 65);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chart1->Name = L"chart1";
			this->chart1->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(1) { System::Drawing::Color::Gold };
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->IsValueShownAsLabel = true;
			series1->IsVisibleInLegend = false;
			series1->Label = L"#INDEX";
			series1->MarkerBorderColor = System::Drawing::Color::Black;
			series1->MarkerSize = 20;
			series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			series1->Name = L"Series1";
			series1->Points->Add(dataPoint1);
			series1->Points->Add(dataPoint2);
			series1->Points->Add(dataPoint3);
			series1->Points->Add(dataPoint4);
			series1->Points->Add(dataPoint5);
			series1->Points->Add(dataPoint6);
			series1->Points->Add(dataPoint7);
			series1->Points->Add(dataPoint8);
			series1->Points->Add(dataPoint9);
			series1->Points->Add(dataPoint10);
			series1->Points->Add(dataPoint11);
			series1->Points->Add(dataPoint12);
			series1->Points->Add(dataPoint13);
			series1->Points->Add(dataPoint14);
			series1->Points->Add(dataPoint15);
			series1->Points->Add(dataPoint16);
			series1->Points->Add(dataPoint17);
			series1->Points->Add(dataPoint18);
			series1->Points->Add(dataPoint19);
			series1->Points->Add(dataPoint20);
			series1->Points->Add(dataPoint21);
			series1->Points->Add(dataPoint22);
			series1->Points->Add(dataPoint23);
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(644, 571);
			this->chart1->TabIndex = 8;
			this->chart1->Text = L"chart2";
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1242, 649);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Раскраска графа";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edgeChange))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vertexChange))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ sToS(string t)
			//преобразование строки string в String
		{
			String^ t1;
			t1 = gcnew String(t.c_str());
			return t1;
		}

		string STos(System::String^ t)
			//преобразование строки String в string
		{
			System::IntPtr ip;
			ip = Marshal::StringToHGlobalAnsi(t);
			return static_cast<const char*>(ip.ToPointer());
		}


		void calcCoordinats(double* xv, double* yv, int n)
			//формирует массив координат вершин, расположенных по двум концентрическим окружностям
			//xv, yv - координаты вершин
			//n - количество вершин
		{
			int i;//счетчики
			double size = 240;//размер области вывода
			double R1 = 100;//радиус внутренней окружности
			double R2 = 1.2 * R1;//радиус внешней окружности
			double R;//текущий радиус
			double a = 0;//начальный угол
			for (i = 1; i <= n; i++)//считаем координаты
			{
				if (i % 2 == 0)
					R = R1;
				else
					R = R2;
				xv[i] = size / 2.0 + (R * Math::Cos(a));
				yv[i] = size / 2.0 - (R * Math::Sin(a));
				a = a + (double)(2 * Math::PI / n);//изменяем угол
			}
		}
		void createCharts(void)
			//создает графики для отображения ребер и вершин графа
		{
			int i;//счетчик
			for (i = 1; i <= 100; i++)//ребра
			{
				chart1->Series->Add("series" + (i + 1).ToString());
				chart1->Series[i]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
				chart1->Series[i]->BorderWidth = 3;
				chart1->Series[i]->BorderColor = System::Drawing::Color::Black;
				chart1->Series[i]->Color = System::Drawing::Color::Black;
				chart1->Series[i]->Points->Clear();
			}
			chart1->Series->Add("series102");//вершины
			chart1->Series[101]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			chart1->Series[101]->IsValueShownAsLabel = true;
			chart1->Series[101]->IsVisibleInLegend = false;
			chart1->Series[101]->Label = L"#INDEX";
			chart1->Series[101]->MarkerBorderColor = System::Drawing::Color::Black;
			chart1->Series[101]->MarkerSize = 20;
			chart1->Series[101]->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			chart1->Series[101]->Name = L"Series102";
		}
		int Find(int pos, int* Set)
			//поиск минимального номера цвета, в который можно окрасить вершину
			//pos - количество окрашенных вершин
			//Set - массив цветов в которые уже окрашены вершины
		{
			int Min_color, i, p;
			Min_color = 0;
			do
			{
				Min_color++;
				p = 0;
				for (i = 0; i < pos; i++)
					if (Set[i] == Min_color)
					{
						p = 1;
						break;
					}
			} while (p != 0);
			return Min_color;
		}
private: System::Void edgeChange_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
//изменение числа ребер графа
{
	int n;//число ребер
	int i;//счетчик
	n = Convert::ToInt32(edgeChange->Value);//читаем из строки ввода
	dataGridView1->RowCount = n;//устанавливаем число строк таблицы
	for (i = 1; i <= n; i++)//цикл формирования таблицы ввода
		dataGridView1[0, i - 1]->Value = Convert::ToString(i);//выводим номера
}
private: System::Void vertexChange_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
//изменение количества вершин
{
	int n;//число вершин
	n = Convert::ToInt32(vertexChange->Value);//читаем из строки ввода
	edgeChange->Maximum = (n * (n - 1)) / 2;//максимальное число ребер
	edgeChange->Value = Convert::ToInt32((n * (n - 1)) / 2);
}
private: System::Void menuExit_Click(System::Object^ sender, System::EventArgs^ e)
//выход из программы
{
	Close();
}
private: System::Void randomGraph_Click(System::Object^ sender, System::EventArgs^ e)
//генератор псевдослучайного взвешенного графа
{
	Random^ rnd = gcnew Random;//описываем генератор случайных чисел
	int i, j, k,//счетчики
		s;//показатель полноты графа
	int RR[101];//массив меток сформированных вершин
	int** A;
	int n;//количество вершин
	int m;//количество ребер
	n = Convert::ToInt32(vertexChange->Value);//читаем из строки ввода
	s = 0;//обнулили 
	A = new int* [n + 1];//инициализация массива
	for (i = 0; i <= n; i++)
		A[i] = new int[n + 1];
	for (i = 1; i <= n; i++)
	{
		RR[i] = 0;
		for (j = 1; j <= n; j++)
			A[i][j] = 0;
	}
	for (i = 1; i <= n; i++)//цикл начального заполнения
		if (RR[i] == 0)
		{
			do
			{
				k = rnd->Next(n) + 1;
			} while (k == i);
			A[i][k] = 1;
			A[k][i] = A[i][k];
			RR[k] = 1;
			s = s + 2;
		}
	s = int((n * n - n) * 60.0 / 100.0 - s);//определяем полноту
	while (s > 1)//цикл окончательного формирования матрицы
	{
		i = rnd->Next(n * n);
		k = i % n + 1;
		i = i / n + 1;
		if (i != k && A[i][k] == 0)
		{
			A[i][k] = 1;
			A[k][i] = A[i][k];
			s = s - 2;
		}
	}
	m = 0;//обнулили счетчик ребер
	for (i = 1; i <= n; i++)  //цикл подсчета числа ребер
		for (j = i + 1; j <= n; j++)
			if (A[i][j] != 0)
				m++;
	edgeChange->Value = m;//передаем в строку ввода
	dataGridView1->RowCount = m;
	m = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = i + 1; j <= n; j++)
			if (A[i][j] != 0)//если есть ребро
			{
				dataGridView1[1, m]->Value = Convert::ToString(i);//выводим в ячейки
				dataGridView1[2, m]->Value = Convert::ToString(j);
				m++;//увеличили счетчик
			}
	}
}

private: System::Void menuColored_Click(System::Object^ sender, System::EventArgs^ e)
//раскраска графа
{
	int i, j;//счетчики
	int** A;//матрица смежности графа
	double* xv, * yv;//координаты вершин
	int n;//количество вершин
	int m;//количество ребер
	int v1,//вершина начала ребра
		v2;//вершина конца ребра
	string colors[] = { "White", "Blue", "Green", "Yellow", "Red", "Aqua", "Tan", "Gold", "Fuchsia", "Gray",
		"Lime", "Brown", "Violet", "Purple", "Pink", "Coral", "Ivory" };//массив цветов
	//"Белый", "Синий", "Зеленый", "Желтый", "Красный", "Бирюзовый", "Бежевый", "Золотой", "Фуксия", "Серый",
	//"Лайм", "Коричневый", "Фиалка", "Фиолетовый", "Розовый", "Коралл", "Слоновая Кость"
	int* Colors; //массив цветов вершин
	int* FIFO; //структура данных очередь
	int* Set; //массив цветов в которые уже окрашены вершины
	int cr;//количество цветов для раскраски
	int Start,//номер начальной вершины
		k, ////указатель на конец очереди
		p, //указатель на начало очереди
		cur, //номер очередной вершины
		pos;//счетчик цветов в которые окрашены вершины
	n = Convert::ToInt32(vertexChange->Value);//читаем из строки ввода
	m = Convert::ToInt32(edgeChange->Value);//читаем из строки ввода
	xv = new double[n + 1];//генерация экранных координат
	yv = new double[n + 1];
	A = new int* [n];//инициализация массива
	for (i = 0; i < n; i++)
		A[i] = new int[n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			A[i][j] = 0;
	chart1->Series[0]->Points->Clear();//очистка графика
	for (i = 1; i <= 101; i++)
		chart1->Series[i]->Points->Clear();
	calcCoordinats(xv, yv, n);
	for (i = 0; i < m; i++)
	{
		if (!Int32::TryParse(dataGridView1[1, i]->Value->ToString(), v1) ||//попытка преобразования строки в число
			!Int32::TryParse(dataGridView1[2, i]->Value->ToString(), v2))
		{//ошибка при преобразовании - в строке не целое число
			MessageBox::Show("Ошибка в строке " + (i + 1).ToString(), "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			for (j = 1; j <= 101; j++)
				chart1->Series[j]->Points->Clear();
			return;
		}
		A[v1 - 1][v2 - 1] = 1;
		A[v2 - 1][v1 - 1] = 1;
		chart1->Series[i + 1]->Points->AddXY(xv[v1], yv[v1]);
		chart1->Series[i + 1]->Points->AddXY(xv[v2], yv[v2]);
	}
	Colors = new int[n]; //выделение памяти
	FIFO = new int[n];
	Set = new int[n];
	for (i = 0; i < n; i++) //обнуление массивов
	{
		Colors[i] = 0;
		FIFO[i] = 0;
		Set[i] = 0;
	}
	Start = 0; //выбираем начальную вершину
	Colors[Start] = 1; //раскрашиваем ее в цвет 1
	p = 0;
	k = 1;
	FIFO[p] = Start;
	while (p != k)
	{
		cur = FIFO[p];
		p++;
		for (i = 0; i < n; i++)
			if (A[cur][i] == 1 && Colors[i] == 0)
			{
				FIFO[k] = i;
				k++;
				pos = 0;
				for (j = 0; j < n; j++)
					if (A[FIFO[k - 1]][j] == 1 && Colors[j] != 0)
					{
						Set[pos] = Colors[j];
						pos++;
					}
				Colors[i] = Find(pos, Set);
			}
	}
	listBox1->Items->Clear();
	cr = 0;
	for (i = 0; i < n; i++)
		if (Colors[i] > cr)
			cr = Colors[i];
	for (i = 0; i < n; i++)
		if (Colors[i] == 0)
			Colors[i] = 1;
	for (i = 1; i <= n; i++)//вывод решения
	{
		listBox1->Items->Add("V" + i.ToString() + ": " + sToS(colors[Colors[i - 1]]));
		chart1->Series[101]->Points->AddXY(xv[i], yv[i]);//вывод на график
		chart1->Series[101]->Points[i - 1]->Label = i.ToString();
		chart1->Series[101]->Points[i - 1]->Color = Color::FromName(sToS(colors[Colors[i - 1]]));
	}
	listBox1->Items->Add("Всего требуется цветов: " + cr.ToString());
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
//инициализация программы
{
	createCharts();
	vertexChange->Value = 5;
	randomGraph_Click(sender, e);
}
private: System::Void saveGraph_Click(System::Object^ sender, System::EventArgs^ e) 
//сохранить граф в файле
{
	//вывод диалога выбора файла
	if (saveFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK)//если файл не выбран
		return;
	if (saveFileDialog1->FileName == "")
		return;//если имя не задано, выход
	int n;//количество вершин
	int m;//количество ребер
	int v1,//вершина начала ребра
		v2;//вершина конца ребра
	n = Convert::ToInt32(vertexChange->Value);//читаем из строки ввода
	m = Convert::ToInt32(edgeChange->Value);//читаем из строки ввода
	//открываем файл для чтения
	ofstream f(STos(saveFileDialog1->FileName));
	int i;//параметр цикла
	f << n << endl;
	f << m << endl;
	for (i = 0; i < m; i++)//запись
	{
		if (!Int32::TryParse(dataGridView1[1, i]->Value->ToString(), v1) ||//попытка преобразования строки в число
			!Int32::TryParse(dataGridView1[2, i]->Value->ToString(), v2))
		{//ошибка при преобразовании - в строке не целое число
			MessageBox::Show("Ошибка в строке " + (i + 1).ToString(), "Ошибка");
			f.close();
			return;
		}
		f << v1 << " " << v2 << endl;
	}
	f.close();
	MessageBox::Show("Список ребер сохранен в файле.", "Информация",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void loadGraph_Click(System::Object^ sender, System::EventArgs^ e)
//загрузить граф из файла
{
	//вывод диалога выбора файла
	if (openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK)//если файл не выбран
		return;
	if (openFileDialog1->FileName == "")
		return;//если имя не задано, выход
	if (!File::Exists(openFileDialog1->FileName))
	{
		MessageBox::Show("Файл не найден или к нему нет доступа!", "Ошибка");
		return;
	}
	//открываем файл для чтения
	ifstream f(STos(openFileDialog1->FileName));
	int i;//параметр цикла
	int n;//количество вершин
	int m;//количество ребер
	int v1,//вершина начала ребра
		v2;//вершина конца ребра
	f >> n;
	f >> m;
	vertexChange->Value = n;//передаем в строку ввода
	edgeChange->Value = m;
	dataGridView1->RowCount = m;
	for (i = 0; i < m; i++)//
	{
		f >> v1 >> v2;
		dataGridView1[1, i]->Value = Convert::ToString(v1);//выводим в ячейки
		dataGridView1[2, i]->Value = Convert::ToString(v2);
	}
	f.close();
	MessageBox::Show("Граф загружен.", "Информация",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void menuSaveResult_Click(System::Object^ sender, System::EventArgs^ e)
//сохранить результат раскраски
{
	if (saveFileDialog2->ShowDialog() != System::Windows::Forms::DialogResult::OK)//отмена сохранения
		return;
	//chart1->SaveImage(saveFileDialog2->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);
	chart1->SaveImage(saveFileDialog2->FileName, Imaging::ImageFormat::Jpeg);
	ofstream f(STos(saveFileDialog2->FileName + ".txt"));
	int i;//параметр цикла
	for (i = 0; i < listBox1->Items->Count; i++)//запись
		f << STos(listBox1->Items[i]->ToString()) << endl;
	f.close();
	MessageBox::Show("Результат сохранен в файле.", "Информация",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
};
