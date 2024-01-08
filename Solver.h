#pragma once

namespace L4 {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Summary for Solver
  /// </summary>
  public ref class Solver : public System::Windows::Forms::Form
  {
  public:
    Solver(void)
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
    ~Solver()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::Label^ Static1Lbl;
  private: System::Windows::Forms::Label^ Static2Lbl;
  private: System::Windows::Forms::TextBox^ ATextBox;
  private: System::Windows::Forms::TextBox^ BTextBox;
  private: System::Windows::Forms::Label^ Static3Lbl;


  private: System::Windows::Forms::TextBox^ CTextBox;
  private: System::Windows::Forms::Label^ Static4Lbl;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Label^ Out1Lbl;
  private: System::Windows::Forms::Label^ Out2Lbl;
  private: System::Windows::Forms::Label^ CommentLbl;
  private: System::Windows::Forms::Button^ ResetBtn;
  private: System::Windows::Forms::Button^ CloseBtn;
  private: System::Windows::Forms::Button^ SolveBtn;











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
      this->Static1Lbl = (gcnew System::Windows::Forms::Label());
      this->Static2Lbl = (gcnew System::Windows::Forms::Label());
      this->ATextBox = (gcnew System::Windows::Forms::TextBox());
      this->BTextBox = (gcnew System::Windows::Forms::TextBox());
      this->Static3Lbl = (gcnew System::Windows::Forms::Label());
      this->CTextBox = (gcnew System::Windows::Forms::TextBox());
      this->Static4Lbl = (gcnew System::Windows::Forms::Label());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->Out1Lbl = (gcnew System::Windows::Forms::Label());
      this->Out2Lbl = (gcnew System::Windows::Forms::Label());
      this->CommentLbl = (gcnew System::Windows::Forms::Label());
      this->ResetBtn = (gcnew System::Windows::Forms::Button());
      this->CloseBtn = (gcnew System::Windows::Forms::Button());
      this->SolveBtn = (gcnew System::Windows::Forms::Button());
      this->SuspendLayout();
      // 
      // Static1Lbl
      // 
      this->Static1Lbl->AutoSize = true;
      this->Static1Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->Static1Lbl->Location = System::Drawing::Point(64, 0);
      this->Static1Lbl->Name = L"Static1Lbl";
      this->Static1Lbl->Size = System::Drawing::Size(234, 64);
      this->Static1Lbl->TabIndex = 0;
      this->Static1Lbl->Text = L"Коэффициенты\r\nуравнения";
      this->Static1Lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
      // 
      // Static2Lbl
      // 
      this->Static2Lbl->AutoSize = true;
      this->Static2Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->Static2Lbl->Location = System::Drawing::Point(0, 69);
      this->Static2Lbl->Name = L"Static2Lbl";
      this->Static2Lbl->Size = System::Drawing::Size(56, 32);
      this->Static2Lbl->TabIndex = 1;
      this->Static2Lbl->Text = L"a =";
      // 
      // ATextBox
      // 
      this->ATextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->ATextBox->Location = System::Drawing::Point(61, 66);
      this->ATextBox->Margin = System::Windows::Forms::Padding(2);
      this->ATextBox->Name = L"ATextBox";
      this->ATextBox->Size = System::Drawing::Size(173, 39);
      this->ATextBox->TabIndex = 2;
      this->ATextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
      this->ATextBox->TextChanged += gcnew System::EventHandler(this, &Solver::TextChanged);
      this->ATextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Solver::KeyPress);
      // 
      // BTextBox
      // 
      this->BTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->BTextBox->Location = System::Drawing::Point(61, 124);
      this->BTextBox->Margin = System::Windows::Forms::Padding(2);
      this->BTextBox->Name = L"BTextBox";
      this->BTextBox->Size = System::Drawing::Size(173, 39);
      this->BTextBox->TabIndex = 4;
      this->BTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
      this->BTextBox->TextChanged += gcnew System::EventHandler(this, &Solver::TextChanged);
      this->BTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Solver::KeyPress);
      // 
      // Static3Lbl
      // 
      this->Static3Lbl->AutoSize = true;
      this->Static3Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->Static3Lbl->Location = System::Drawing::Point(0, 127);
      this->Static3Lbl->Name = L"Static3Lbl";
      this->Static3Lbl->Size = System::Drawing::Size(56, 32);
      this->Static3Lbl->TabIndex = 3;
      this->Static3Lbl->Text = L"b =";
      // 
      // CTextBox
      // 
      this->CTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->CTextBox->Location = System::Drawing::Point(61, 182);
      this->CTextBox->Margin = System::Windows::Forms::Padding(2);
      this->CTextBox->Name = L"CTextBox";
      this->CTextBox->Size = System::Drawing::Size(173, 39);
      this->CTextBox->TabIndex = 6;
      this->CTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
      this->CTextBox->TextChanged += gcnew System::EventHandler(this, &Solver::TextChanged);
      this->CTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Solver::KeyPress);
      // 
      // Static4Lbl
      // 
      this->Static4Lbl->AutoSize = true;
      this->Static4Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->Static4Lbl->Location = System::Drawing::Point(0, 185);
      this->Static4Lbl->Name = L"Static4Lbl";
      this->Static4Lbl->Size = System::Drawing::Size(54, 32);
      this->Static4Lbl->TabIndex = 5;
      this->Static4Lbl->Text = L"c =";
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->label1->Location = System::Drawing::Point(400, 16);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(259, 32);
      this->label1->TabIndex = 7;
      this->label1->Text = L"Корни уравнения";
      this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
      // 
      // Out1Lbl
      // 
      this->Out1Lbl->AutoSize = true;
      this->Out1Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->Out1Lbl->Location = System::Drawing::Point(281, 69);
      this->Out1Lbl->Name = L"Out1Lbl";
      this->Out1Lbl->Size = System::Drawing::Size(0, 32);
      this->Out1Lbl->TabIndex = 8;
      this->Out1Lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
      // 
      // Out2Lbl
      // 
      this->Out2Lbl->AutoSize = true;
      this->Out2Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->Out2Lbl->Location = System::Drawing::Point(515, 69);
      this->Out2Lbl->Name = L"Out2Lbl";
      this->Out2Lbl->Size = System::Drawing::Size(0, 32);
      this->Out2Lbl->TabIndex = 9;
      this->Out2Lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
      // 
      // CommentLbl
      // 
      this->CommentLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->CommentLbl->Location = System::Drawing::Point(281, 112);
      this->CommentLbl->Name = L"CommentLbl";
      this->CommentLbl->Size = System::Drawing::Size(434, 109);
      this->CommentLbl->TabIndex = 10;
      // 
      // ResetBtn
      // 
      this->ResetBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->ResetBtn->Location = System::Drawing::Point(12, 243);
      this->ResetBtn->Name = L"ResetBtn";
      this->ResetBtn->Size = System::Drawing::Size(165, 50);
      this->ResetBtn->TabIndex = 11;
      this->ResetBtn->Text = L"Сброс";
      this->ResetBtn->UseVisualStyleBackColor = true;
      this->ResetBtn->Click += gcnew System::EventHandler(this, &Solver::ResetBtn_Click);
      // 
      // CloseBtn
      // 
      this->CloseBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->CloseBtn->Location = System::Drawing::Point(550, 243);
      this->CloseBtn->Name = L"CloseBtn";
      this->CloseBtn->Size = System::Drawing::Size(165, 50);
      this->CloseBtn->TabIndex = 12;
      this->CloseBtn->TabStop = false;
      this->CloseBtn->Text = L"Закрыть";
      this->CloseBtn->UseVisualStyleBackColor = true;
      this->CloseBtn->Click += gcnew System::EventHandler(this, &Solver::CloseBtn_Click);
      // 
      // SolveBtn
      // 
      this->SolveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->SolveBtn->Location = System::Drawing::Point(287, 243);
      this->SolveBtn->Name = L"SolveBtn";
      this->SolveBtn->Size = System::Drawing::Size(165, 50);
      this->SolveBtn->TabIndex = 13;
      this->SolveBtn->Text = L"Решить";
      this->SolveBtn->UseVisualStyleBackColor = true;
      this->SolveBtn->Click += gcnew System::EventHandler(this, &Solver::SolveBtn_Click);
      // 
      // Solver
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(727, 305);
      this->Controls->Add(this->SolveBtn);
      this->Controls->Add(this->CloseBtn);
      this->Controls->Add(this->ResetBtn);
      this->Controls->Add(this->CommentLbl);
      this->Controls->Add(this->Out2Lbl);
      this->Controls->Add(this->Out1Lbl);
      this->Controls->Add(this->label1);
      this->Controls->Add(this->CTextBox);
      this->Controls->Add(this->Static4Lbl);
      this->Controls->Add(this->BTextBox);
      this->Controls->Add(this->Static3Lbl);
      this->Controls->Add(this->ATextBox);
      this->Controls->Add(this->Static2Lbl);
      this->Controls->Add(this->Static1Lbl);
      this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
      this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
      this->MaximizeBox = false;
      this->Name = L"Solver";
      this->ShowIcon = false;
      this->Text = L"Решение квадратного уравнения";
      this->ResumeLayout(false);
      this->PerformLayout();

    }
#pragma endregion
    System::Void ResetOut()
    {
      // Сброс всех выводов
      Out1Lbl->Text = "";
      Out2Lbl->Text = "";
      CommentLbl->Text = "";
    }

    System::Void ResetBtn_Click(System::Object^ sender, System::EventArgs^ e)
    {
      // Сброс всех полей ввода
      ATextBox->Text = "";
      BTextBox->Text = "";
      CTextBox->Text = "";
      // Сброс всех выводов
      ResetOut();
    }
    System::Void CloseBtn_Click(System::Object^ sender, System::EventArgs^ e)
    {
      // Выход из приложения
      Application::Exit();
    }

    System::Void SolveBtn_Click(System::Object^ sender, System::EventArgs^ e)
    {
      Double a, b, c;
      // Проверка конвертации коэффициентов
      try {
        // Конвертация коэффициентов
        a = System::Convert::ToDouble(ATextBox->Text);
        b = System::Convert::ToDouble(BTextBox->Text);
        c = System::Convert::ToDouble(CTextBox->Text);
      }
      catch (System::FormatException^ e) {
        CommentLbl->Text = L"Введите все три коэффициента.";
        return;
      }

      Double x1, x2;

      // Проверка наличия всех коэффициентов
      if ((ATextBox->Text == L"") || (BTextBox->Text == L"") || (CTextBox->Text == L""))
      {
        CommentLbl->Text = L"Введите все три коэффициента.";
        return;
      }

      // Обработка выражений без переменных
      if (a == 0 && b == 0)
      {
        // Верный случай
        if (c == 0)
        {
          CommentLbl->Text = L"Равенство 0 = 0 верно.";
        }
        else // Неверный случай
        {
          CommentLbl->Text = L"Равенство " + c + L" = 0 неверно.";
        }
        return;
      }
      // Случай полного квадратного уравнения
      if (a != 0)
      {
        // Вычисление дискриминанта
        int d = b * b - 4 * a * c;
        if (d > 0) // Два корны
        {
          x1 = (-b + Math::Sqrt(d)) / (2 * a);
          x2 = (-b - Math::Sqrt(d)) / (2 * a);
          Out1Lbl->Text = L"x1 = " + Math::Round(x1, 6).ToString()->Replace(L".", L",");
          Out2Lbl->Text = L"x2 = " + Math::Round(x2, 6).ToString()->Replace(L".", L",");
          CommentLbl->Text = L"Дискриминант > 0. Уравнение имеет два корня.";
        }
        else if (d == 0) // Один корень
        {
          x1 = (-b) / (2 * a);
          x2 = x1;
          Out1Lbl->Text = L"x1 = " + Math::Round(x1, 6).ToString()->Replace(L".", L",");
          Out2Lbl->Text = L"x2 = " + Math::Round(x2, 6).ToString()->Replace(L".", L",");
          CommentLbl->Text = L"Дискриминант = 0. Уравнение имеет два одинаковых корня.";
        }
        else // Нет корней
        {
          CommentLbl->Text = L"Дискриминант < 0. Уравнение не имеет действительных корней.";
        }
      }
      else // Случай линейного уравнения
      {
        x1 = (-c) / b;
        Out1Lbl->Text = L"x1 = " + Math::Round(x1, 6).ToString()->Replace(L".", L",");
        CommentLbl->Text = L"Линейное уравнение – имеет один корень.";
      }
    }

    System::Void KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
    {
      System::Windows::Forms::TextBox^ TextBox = safe_cast<System::Windows::Forms::TextBox^>(sender);
      if (e->KeyChar == '.' || e->KeyChar == ',')
      {
        // Замена точки на запятую
        e->KeyChar = ',';
        // Запрет вводить больше одной запятой
        if (TextBox->Text->IndexOf(',') != -1)
        {
          e->Handled = true;
          return;
        }

        // Если впереди нет нуля поставить
        if (TextBox->Text->Length == 0 || (TextBox->Text->Length == 1 && (TextBox->Text->StartsWith(L"-") || TextBox->Text->StartsWith(L"+"))))
        {
          e->Handled = true;
          TextBox->Text = TextBox->Text + L"0,";
          TextBox->SelectionStart = TextBox->Text->Length;
        }
      }
      // Даём возможность ввода только чисел, клавиш контроля 
      // и ',', '-', '+'
      if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != ',' &&
        e->KeyChar != '-' && e->KeyChar != '+')
      {
        e->Handled = true;
        return;
      }

      if (e->KeyChar == '-')
      {
        // Запрет вводить больше одного знака "-"
        if (TextBox->Text->IndexOf('-') != -1)
        {
          e->Handled = true;
          return;
        }
        TextBox->Text = "-" + TextBox->Text;
        e->Handled = true;
        TextBox->SelectionStart = TextBox->Text->Length;
        return;
      }

      if (e->KeyChar == '+')
      {
        // Запрет вводить больше одного знака "+"
        if (TextBox->Text->IndexOf('+') != -1)
        {
          e->Handled = true;
          return;
        }
        TextBox->Text = "+" + TextBox->Text;
        e->Handled = true;
        TextBox->SelectionStart = TextBox->Text->Length;
        return;
      }
    }

    // При изменении текста в полях ввода нужно очистить вывод
    System::Void TextChanged(System::Object^ sender, System::EventArgs^ e)
    {
      ResetOut();
    }
  };
}
