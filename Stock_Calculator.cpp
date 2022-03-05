#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

       string company;

       const double commissionPercent = 3.5; // commission percentage constant

       double purchasePrice, salePrice, commissionPurchase, commissionSale;

       int num_shares;

       double totalPurchasePrice, totalSalePrice, result;

       // input of company name

       cout<<"Enter the name of the company"<<endl;

       getline(cin,company);

       company = company.substr(0,company.length()); 

       // input of number of shares

       cout<<"Enter shares of stock"<<endl;

       cin>>num_shares;

       // input of purchase price

       cout<<"Enter purchase price"<<endl;

       cin>>purchasePrice;

       // input of sale price

       cout<<"Enter sale price"<<endl;

       cin>>salePrice;

       cout<<endl;

       // calculate total purchase price without commission

       totalPurchasePrice = num_shares*purchasePrice;

       // calculate commission on the purchase of shares

       commissionPurchase = (totalPurchasePrice*commissionPercent)/100;

       // calculate total sale price without commission

       totalSalePrice = num_shares*salePrice;

       // calculate commission on the sale price

       commissionSale = (totalSalePrice*commissionPercent)/100;

       // calculate the profit or loss by subtracting the total sale price by total purchase price

       // total sale price = total sale before commission - sale commission

       // total purchase price = total purchase before commission + sale commission

       result = (totalSalePrice-commissionSale)-(totalPurchasePrice+commissionPurchase);

       // output the result

       cout<<fixed<<setprecision(2);

       cout<<"Company: "<<company<<endl;

       cout<<"Shares: "<<num_shares<<endl;
       cout<<endl;

       cout<<"Purchase/share: $"<<purchasePrice<<endl;

       cout<<"Cost of stock: $"<<totalPurchasePrice<<endl;

       cout<<"Cost of commission: $"<<commissionPurchase<<endl;

       cout<<"Total cost: $"<<(totalPurchasePrice+commissionPurchase)<<endl;
       cout<<endl;

       cout<<"Sale/share: $"<<salePrice<<endl;

       cout<<"Income from stock: $"<<totalSalePrice<<endl;

       cout<<"Cost of commission: $"<<commissionSale<<endl;

       cout<<"Total income: $"<<(totalSalePrice-commissionSale)<<endl;
       cout<<endl;

       cout<<"Gain or loss: $"<<result<<endl;

       return 0;

}