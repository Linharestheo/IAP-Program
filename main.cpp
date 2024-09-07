#include <iostream>
#include "menus.cpp"
#include <cstdlib>
using namespace std;

struct DadosPessoais
{
    string nome;
    long long cpf;
    long long telefone;
    string email;
};
struct Familiar
{
    string nome1;
    long long cpfusuario, cpffamiliar, nascimento;
};

const int MAX_FUNCIONARIOS = 100;
const int MAX_FAMILIARES = 500;

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
int main()
{
    int op;
    int qtdfamiliar = 0, qtdfuncionario = 0;
    DadosPessoais pessoas[MAX_FUNCIONARIOS];
    Familiar familiares[MAX_FAMILIARES];
    long long cpfAlterar;

    do
    {
        if (qtdfuncionario == 0)
        {
            op = menu1();
            if (op == 0)
            {
                return 0;
            }
            else if (op == 1)
            {
                cout << "Digite o nome: ";
                getline(cin, pessoas[qtdfuncionario].nome);
                cout << "Digite o CPF (Somente numeros): ";
                cin >> pessoas[qtdfuncionario].cpf;
                cout << "Digite o telefone (Somente numeros): ";
                cin >> pessoas[qtdfuncionario].telefone;
                cout << "Digite o email: ";
                cin >> pessoas[qtdfuncionario].email;
                qtdfuncionario++;
            }
            else
            {
                cout << "*Opcao invalida*" << endl;
                continue;
            }
        }
        else
        {
            op = menu2();
            if (op == 0)
            {
                break;
            }
            else if (op == 1)
            {
                cout << "Digite o nome: ";
                getline(cin, pessoas[qtdfuncionario].nome);
                cout << "Digite o CPF (Somente numeros): ";
                cin >> pessoas[qtdfuncionario].cpf;
                cout << "Digite o telefone (Somente numeros): ";
                cin >> pessoas[qtdfuncionario].telefone;
                cout << "Digite o email: ";
                cin >> pessoas[qtdfuncionario].email;
                qtdfuncionario++;
            }
            else if (op == 2)
            {

                cout << "Nome do familiar: ";
                getline(cin, familiares[qtdfamiliar].nome1);

                cout << "Cpf do familiar (Somente numeros): ";
                cin >> familiares[qtdfamiliar].cpffamiliar;

                cout << "Cpf do Funcionario (Somente numeros): ";
                cin >> familiares[qtdfamiliar].cpfusuario;

                cout << "Data de nascimento do familiar (Somente numeros): ";
                cin >> familiares[qtdfamiliar].nascimento;
                qtdfamiliar++;
            }
            else if (op == 3)
            {
                if (qtdfamiliar == 0)
                {
                    op = menu3_1();
                    if (op == 0)
                    {
                        continue;
                    }
                    else if (op == 1)
                    {
                        cout << endl;
                        cout << "---- DADOS PESSOAIS FUNCIONARIOS ----" << endl;
                        cout << endl;
                        for (int i = 0; i < qtdfuncionario; i++)
                        {
                            cout << "Nome: " << pessoas[i].nome << endl;
                            cout << "CPF: " << pessoas[i].cpf << endl;
                            cout << "Telefone: " << pessoas[i].telefone << endl;
                            cout << "Email: " << pessoas[i].email << endl;
                            cout << endl;
                        }
                        cout << "-------------------------------------" << endl;
                        system("pause");
                    }
                    else
                    {
                        cout << "*Opcao invalida*" << endl;
                        continue;
                    }
                }
                else
                {
                    op = menu3_2();
                    if (op == 0)
                    {
                        continue;
                    }
                    if (op == 1)
                    {
                        cout << endl;
                        cout << "---- DADOS PESSOAIS FUNCIONARIOS ----" << endl;
                        cout << endl;
                        for (int i = 0; i < qtdfuncionario; i++)
                        {
                            cout << "Nome: " << pessoas[i].nome << endl;
                            cout << "CPF: " << pessoas[i].cpf << endl;
                            cout << "Telefone: " << pessoas[i].telefone << endl;
                            cout << "Email: " << pessoas[i].email << endl;
                            cout << endl;
                        }
                        cout << "-------------------------------------" << endl;
                        system("pause");
                    }

                    if (op == 2)
                    {
                        op = menu3_2_1();
                        if (op == 0)
                        {
                            continue;
                        }
                        if (op == 1)
                        {
                            cout << endl;
                            cout << "---- DADOS PESSOAIS FAMILIARES ----" << endl;
                            cout << endl;
                            for (int i = 0; i < qtdfamiliar; i++)
                            {
                                cout << "Nome: " << familiares[i].nome1 << endl;
                                cout << "CPF do familiar: " << familiares[i].cpffamiliar << endl;
                                cout << "CPF do usuario: " << familiares[i].cpfusuario << endl;
                                cout << "Data de nascimento: " << familiares[i].nascimento << endl;
                                cout << endl;
                            }
                            cout << "-----------------------------------" << endl;
                            system("pause");
                        }
                        else if (op == 2)
                        {
                            cout << endl;
                            cout << "Digite o CPF do funcionario (Somente numeros): ";
                            cin >> cpfAlterar;
                            cout << "---- DADOS PESSOAIS FAMILIARES ----" << endl;
                            cout << endl;
                            for (int i = 0; i < qtdfamiliar; i++)
                            {
                                if (cpfAlterar == familiares[i].cpfusuario)
                                {
                                    cout << "Nome: " << familiares[i].nome1 << endl;
                                    cout << "CPF: " << familiares[i].cpffamiliar << endl;
                                    cout << "CPF funcionario: " << familiares[i].cpfusuario << endl;
                                    cout << "Data de nascimento: " << familiares[i].nascimento << endl;
                                    cout << endl;
                                }
                            }
                            cout << "-----------------------------------" << endl;
                            system("pause");
                        }
                        else
                        {
                            cout << "*Opcao invalida*" << endl;
                            continue;
                        }
                    }
                }
            }

            else if (op == 4)
            {
                if (qtdfamiliar == 0)
                {
                    op = menu4_1();
                    if (op == 0)
                    {
                        continue;
                    }
                    if (op == 1)
                    {
                        cout << endl;
                        cout << "Digite o CPF do funcionario que deseja alterar (Somente numeros): ";
                        cin >> cpfAlterar;

                        op = menu4_2_3();
                        if (op == 1)
                        {
                            for (int i = 0; i < qtdfuncionario; i++)
                            {
                                if (cpfAlterar == pessoas[i].cpf)
                                {
                                    cout << "Digite o novo nome: ";
                                    getline(cin, pessoas[i].nome);
                                    break;
                                }
                            }
                        }
                        else if (op == 2)
                        {
                            for (int i = 0; i < qtdfuncionario; i++)
                            {
                                if (cpfAlterar == pessoas[i].cpf)
                                {
                                    cout << "Digite o novo CPF (Somente numeros): ";
                                    cin >> pessoas[i].cpf;
                                    break;
                                }
                            }
                        }
                        else if (op == 3)
                        {
                            for (int i = 0; i < qtdfuncionario; i++)
                            {
                                if (cpfAlterar == pessoas[i].cpf)
                                {
                                    cout << "Digite o novo telefone (Somente numeros): ";
                                    cin >> pessoas[i].telefone;
                                    break;
                                }
                            }
                        }
                        else if (op == 4)
                        {
                            for (int i = 0; i < qtdfuncionario; i++)
                            {
                                if (cpfAlterar == pessoas[i].cpf)
                                {
                                    cout << "Digite o novo email: ";
                                    cin >> pessoas[i].email;
                                    break;
                                }
                            }
                        }
                        else
                        {
                            cout << "*Opcao invalida*" << endl;
                            continue;
                        }
                    }

                    else if (op == 2)
                    {
                        cout << "Digite o CPF do funcionario que deseja excluir (Somente numeros): ";
                        cin >> cpfAlterar;

                        for (int i = 0; i < qtdfuncionario; i++)
                        {
                            if (cpfAlterar == pessoas[i].cpf)
                            {
                                pessoas[i].nome = " ";
                                pessoas[i].cpf = 0;
                                pessoas[i].telefone = 0;
                                pessoas[i].email = " ";
                                for (; i < qtdfuncionario; i++)
                                {
                                    pessoas[i].nome = pessoas[i + 1].nome;
                                    pessoas[i].cpf = pessoas[i + 1].cpf;
                                    pessoas[i].telefone = pessoas[i + 1].telefone;
                                    pessoas[i].email = pessoas[i + 1].email;
                                }
                                qtdfuncionario--;
                            }
                        }
                        for (int i = 0; i <= qtdfamiliar; i++)
                        {
                            if (cpfAlterar == familiares[i].cpfusuario)
                            {
                                familiares[i].nome1 = " ";
                                familiares[i].cpffamiliar = 0;
                                familiares[i].cpfusuario = 0;
                                familiares[i].nascimento = 0;
                                for (int a = i; a < qtdfamiliar; a++)
                                {
                                    familiares[a].nome1 = familiares[a + 1].nome1;
                                    familiares[a].cpffamiliar = familiares[a + 1].cpffamiliar;
                                    familiares[a].cpfusuario = familiares[a + 1].cpfusuario;
                                    familiares[a].nascimento = familiares[a + 1].nascimento;
                                }
                                i--;
                                qtdfamiliar--;
                            }
                        }
                    }
                }
                else
                {
                    op = menu4_2();
                    if (op == 0)
                    {
                        continue;
                    }
                    else if (op == 1)
                    {
                        cout << endl;
                        cout << "Digite o CPF do funcionario que deseja alterar (Somente numeros): ";
                        cin >> cpfAlterar;

                        op = menu4_2_3();
                        if (op == 1)
                        {
                            for (int i = 0; i < qtdfuncionario; i++)
                            {
                                if (cpfAlterar == pessoas[i].cpf)
                                {
                                    cout << "Digite o novo nome: ";
                                    getline(cin, pessoas[i].nome);
                                    break;
                                }
                            }
                        }
                        else if (op == 2)
                        {
                            for (int i = 0; i < qtdfuncionario; i++)
                            {
                                if (cpfAlterar == pessoas[i].cpf)
                                {
                                    cout << "Digite o novo CPF (Somente numeros): ";
                                    cin >> pessoas[i].cpf;
                                    break;
                                }
                            }
                        }
                        else if (op == 3)
                        {
                            for (int i = 0; i < qtdfuncionario; i++)
                            {
                                if (cpfAlterar == pessoas[i].cpf)
                                {
                                    cout << "Digite o novo telefone (Somente numeros): ";
                                    cin >> pessoas[i].telefone;
                                    break;
                                }
                            }
                        }
                        else if (op == 4)
                        {
                            for (int i = 0; i < qtdfuncionario; i++)
                            {
                                if (cpfAlterar == pessoas[i].cpf)
                                {
                                    cout << "Digite o novo email: ";
                                    cin >> pessoas[i].email;
                                    break;
                                }
                            }
                        }
                        else
                        {
                            cout << "*Opcao invalida*" << endl;
                            continue;
                        }
                    }

                    else if (op == 2)
                    {
                        cout << "Digite o CPF do funcionario que deseja excluir (Somente numeros): ";
                        cin >> cpfAlterar;

                        for (int i = 0; i < qtdfuncionario; i++)
                        {
                            if (cpfAlterar == pessoas[i].cpf)
                            {
                                pessoas[i].nome = " ";
                                pessoas[i].cpf = 0;
                                pessoas[i].telefone = 0;
                                pessoas[i].email = " ";
                                for (; i < qtdfuncionario; i++)
                                {
                                    pessoas[i].nome = pessoas[i + 1].nome;
                                    pessoas[i].cpf = pessoas[i + 1].cpf;
                                    pessoas[i].telefone = pessoas[i + 1].telefone;
                                    pessoas[i].email = pessoas[i + 1].email;
                                }
                                qtdfuncionario--;
                            }
                        }
                        for (int i = 0; i <= qtdfamiliar; i++)
                        {
                            if (cpfAlterar == familiares[i].cpfusuario)
                            {
                                familiares[i].nome1 = " ";
                                familiares[i].cpffamiliar = 0;
                                familiares[i].cpfusuario = 0;
                                familiares[i].nascimento = 0;
                                for (int a = i; a < qtdfamiliar; a++)
                                {
                                    familiares[a].nome1 = familiares[a + 1].nome1;
                                    familiares[a].cpffamiliar = familiares[a + 1].cpffamiliar;
                                    familiares[a].cpfusuario = familiares[a + 1].cpfusuario;
                                    familiares[a].nascimento = familiares[a + 1].nascimento;
                                }
                                i--;
                                qtdfamiliar--;
                            }
                        }
                    }
                    else if (op == 3)
                    {
                        cout << "Digite o CPF do familiar que deseja alterar (Somente numeros): ";
                        cin >> cpfAlterar;
                        op = menu4_2_4();
                        if (op == 1)
                        {
                            for (int i = 0; i < qtdfamiliar; i++)
                            {
                                if (cpfAlterar == familiares[i].cpffamiliar)
                                {
                                    cout << "Digite o novo nome: ";
                                    getline(cin, familiares[i].nome1);
                                    break;
                                }
                            }
                        }
                        else if (op == 2)
                        {
                            for (int i = 0; i < qtdfamiliar; i++)
                            {
                                if (cpfAlterar == familiares[i].cpffamiliar)
                                {
                                    cout << "Digite o novo CPF (Somente numeros): ";
                                    cin >> familiares[i].cpffamiliar;
                                    break;
                                }
                            }
                        }
                        else if (op == 3)
                        {
                            for (int i = 0; i < qtdfamiliar; i++)
                            {
                                if (cpfAlterar == familiares[i].cpffamiliar)
                                {
                                    cout << "Digite o novo CPF do funcionario (Somente numeros): ";
                                    cin >> familiares[i].cpfusuario;
                                    break;
                                }
                            }
                        }
                        else if (op == 4)
                        {
                            for (int i = 0; i < qtdfamiliar; i++)
                            {
                                if (cpfAlterar == familiares[i].cpffamiliar)
                                {
                                    cout << "Digite a nova data de nascimento (Somente numeros): ";
                                    cin >> familiares[i].nascimento;
                                    break;
                                }
                            }
                        }
                        
                    }
                    else if (op == 4)
                    {
                        cout << "Digite o CPF do familiar que deseja excluir (Somente numeros): ";
                        cin >> cpfAlterar;

                        for (int i = 0; i < qtdfamiliar; i++)
                        {
                            if (cpfAlterar == familiares[i].cpffamiliar)
                            {
                                familiares[i].nome1 = " ";
                                familiares[i].cpffamiliar = 0;
                                familiares[i].cpfusuario = 0;
                                familiares[i].nascimento = 0;
                                for (; i < qtdfuncionario; i++)
                                {
                                    familiares[i].nome1 = familiares[i + 1].nome1;
                                    familiares[i].cpffamiliar = familiares[i + 1].cpffamiliar;
                                    familiares[i].cpfusuario = familiares[i + 1].cpfusuario;
                                    familiares[i].nascimento = familiares[i + 1].nascimento;
                                }
                                qtdfamiliar--;
                            }
                        }
                    }
                }
            }
            else
            {
                cout << "*Opcao invalida*" << endl;
                continue;
            }
        }
    } while (op != -1);
    return 0;
}