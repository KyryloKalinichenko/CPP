#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

static int	getNbAccounts( void );
static int	getTotalAmount( void );
static int	getNbDeposits( void );
static int	getNbWithdrawals( void );
static void	displayAccountsInfos( void );

Account::Account( int initial_deposit ){
	_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	Account::_totalNbDeposits += 1;
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 1;
	this->_nbWithdrawals = 0;
    return ;
}

Account::~Account( void ){
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= _amount;
	Account::_totalNbWithdrawals += 1;
    return ;
}

void Account::makeDeposit( int deposit ){
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
    return ;
}

bool Account::makeWithdrawal( int deposit ){
	if (_amount < deposit)
		return 1;
	this->_amount -= deposit;
	Account::_totalNbWithdrawals++;
	this->_nbWithdrawals++;
    return 0;
}

int Account::checkAmount( void ) const{
    return this->_amount;
}

void Account::displayStatus( void ) const{
    return ;
}

void	Account::displayAccountsInfos( void ){
	return ;
}