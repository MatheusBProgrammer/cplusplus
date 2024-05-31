#include <iostream>
#include <string>

using namespace std;

class ContaBancaria
{

private:
    int numeroConta;
    int pin;
    double saldo;

public:
    // Constructor
    ContaBancaria(int nConta, int p, int s)
    {
        numeroConta = nConta;
        pin = p;
        saldo = s;
    };

    // Autenticação de usuário
    bool autenticar(int n, int p)
    {
        return (numeroConta == n && pin == p);
    }

    double consultarSaldo()
    {
        return saldo;
    }

    // Método de Saque
    bool sacar(double quantia)
    {
        if (quantia > saldo)
        {
            return false;
        }
        else
        {
            saldo -= quantia;
            return true;
        }
    }

    // Método de Depósito
    void depositar(double quantia)
    {
        saldo += quantia;
    }
};

int main()
{

    // Criando Objeto
    ContaBancaria conta(1, 1, 500);

    int numeroConta, pin;

    cout << "\nBem vindo!\n";
    cout << "Por favor, insira seu nUmero de conta: ";
    cin >> numeroConta;
    cout << "Por favor, insira o seu PIN:";
    cin >> pin;

    if (!conta.autenticar(numeroConta, pin))
    {
        cout << "Numero da conta e/ou pin invalidos, tente novamente!" << endl;
    }
    else
    {
        int opcao;
        do
        {
            cout << "Menu principal:" << endl;
            cout << "1 - Consultar saldo" << endl;
            cout << "2 - Sacar dinheiro" << endl;
            cout << "3 - Depositar dinheiro" << endl;
            cout << "4 - Sair" << endl;
            cout << "Escolha uma opcao: ";
            cin >> opcao;

            switch (opcao)
            {
            case 1: // Consultar saldo
                cout << "\nSeu saldo e de: " << conta.consultarSaldo() << "\n"
                     << endl;
                break;
            case 2: // Sacar dinheiro
                double quantiaSaque;
                cout << "Digite a quantia que deseja sacar:";
                cin >> quantiaSaque;
                if (conta.sacar(quantiaSaque))
                {
                    cout << "Saque realizado com sucesso!, seu saldo e de: " << conta.consultarSaldo() << endl;
                }
                else
                {
                    cout << "Por favor, digite uma quantia valida para o saque!" << endl;
                }
                break;
            case 3: // depositar dinheiro
                double quantiaDeposito;
                cout << "Insira a quantia a depositar: ";
                cin >> quantiaDeposito;
                conta.depositar(quantiaDeposito);
                cout << "Depósito realizado com sucesso." << endl;
                break;

            case 4:
                cout << "Obrigado por usar os nossos serviços! Ate breve!" << endl;
                break;
            default:
                cout
                    << "Opção inválida. Tente novamente."
                    << endl;
            }
        } while (opcao != 4);
    };

    cout << "\nOperação finalizada." << endl;
    return 0;
};