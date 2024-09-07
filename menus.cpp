#include <iostream>

using namespace std;

int menu1()
{
    int op;
    cout << "1 - Cadastrar Funcionario." << endl;
    cout << "0 - Sair." << endl;
    cin >> op;
    cin.ignore();
    return op;
}
int menu2()
{
    int op;
    cout << "1 - Cadastrar Funcionario." << endl;
    cout << "2 - Cadastrar Familiar." << endl;
    cout << "3 - Listar dados" << endl;
    cout << "4 - Alterar ou excluir dados." << endl;
    cout << "0 - Sair." << endl;
    cin >> op;
    cin.ignore();
    return op;
}
int menu3_1()
{
    int op;
    cout << "1 - Listar funcionario(s)." << endl;
    cout << "0 - Voltar ao menu principal." << endl;
    cin >> op;
    cin.ignore();
    return op;
}

int menu3_2()
{
    int op;
    cout << "1 - Listar funcionario(s)." << endl;
    cout << "2 - Listar familiar." << endl;
    cout << "0 - Voltar ao menu principal." << endl;
    cin >> op;
    cin.ignore();
    return op;
}

int menu3_2_1()
{
    int op;
    cout << "1 - Listar todos." << endl;
    cout << "2 - Listar por funcionario." << endl;
    cout << "0 - Voltar ao menu principal." << endl;
    cin >> op;
    cin.ignore();
    return op;
}
int menu4_1()
{
    int op;
    cout << "1 - Alterar dados funcionario." << endl;
    cout << "2 - Excluir dados funcionario." << endl;
    cout << "0 - Voltar ao menu principal." << endl;
    cin >> op;
    cin.ignore();
    return op;
}

int menu4_2()
{
    int op;
    cout << "1 - Alterar dados funcionario." << endl;
    cout << "2 - Excluir dados funcionario." << endl;
    cout << "3 - Alterar dados familiar." << endl;
    cout << "4 - Excluir dados familiar." << endl;
    cout << "0 - Voltar ao menu principal." << endl;
    cin >> op;
    cin.ignore();
    return op;
}
int menu4_2_3()
        {
            int op;
            cout << "Qual dado alterar?" << endl;
            cout << "1 - Nome" << endl;
            cout << "2 - Cpf" << endl;
            cout << "3 - Telefone " << endl;
            cout << "4 - E-mail" << endl;
            cout << "0 - Voltar ao menu principal." << endl;
            cin >> op;
            cin.ignore();
            return op;
        }
        int menu4_2_4()
        {
            int op;
            cout << "Qual dado alterar?" << endl;
            cout << "1 - Nome" << endl;
            cout << "2 - CPF" << endl;
            cout << "3 - CPF do funcionario" << endl;
            cout << "4 - Data de Nascimento" << endl;
            cout << "0 - Voltar ao menu principal." << endl;
            cin >> op;
            return op;
        }