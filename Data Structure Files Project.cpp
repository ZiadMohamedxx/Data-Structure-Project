#include <iostream>
#include<string>
#include <fstream>
using namespace std;

class cAdminNode
{
public:
	string name;
	int ID;
	int password;
	cAdminNode* pnext;
};
class cListAdmin
{
public:
	cAdminNode* phead;
	cAdminNode* ptail;

	cListAdmin()
	{
		phead = NULL;
		ptail = NULL;

	}
	~cListAdmin()
	{
		cAdminNode* ptrav = phead;
		while (phead != NULL)
		{
			phead = ptrav->pnext;
			ptrav->pnext = NULL;
			delete ptrav;
			ptrav = phead;
		}
	}
	void attach(cAdminNode* pnn)
	{
		if (phead == NULL)
		{
			phead = pnn;
			ptail = pnn;
		}
		else
		{
			ptail->pnext = pnn;
			ptail = pnn;
		}
	}

	void display()
	{
		cAdminNode* ptrav = phead;
		while (ptrav != NULL)
		{
			cout << "ID: " << ptrav->ID << endl;
			cout << "Name: " << ptrav->name << endl;
			cout << "Password: " << ptrav->password << endl;
			cout << "----------------------" << endl;
			ptrav = ptrav->pnext;
		}
	}

};


class cCustomerNode
{
public:
	string name;
	int ID;
	int password;
	cCustomerNode* pnext;
};
class cListCustomer
{
public:
	cCustomerNode* phead;
	cCustomerNode* ptail;

	cListCustomer()
	{
		phead = NULL;
		ptail = NULL;

	}
	~cListCustomer()
	{
		cCustomerNode* ptrav = phead;
		while (phead != NULL)
		{
			phead = ptrav->pnext;
			ptrav->pnext = NULL;
			delete ptrav;
			ptrav = phead;
		}
	}
	void attach(cCustomerNode* pnn)
	{
		if (phead == NULL)
		{
			phead = pnn;
			ptail = pnn;
		}
		else
		{
			ptail->pnext = pnn;
			ptail = pnn;
		}
	}

	void display()
	{
		cCustomerNode* ptrav = phead;
		while (ptrav != NULL)
		{
			cout << "Name: " << ptrav->name << endl;
			cout << "ID: " << ptrav->ID << endl;
			cout << "Password: " << ptrav->password << endl;
			cout << "----------------------" << endl;
			ptrav = ptrav->pnext;
		}
	}
};


class cOrdersNode
{
public:

	int CustomerID;
	int ProductID;
	string date;
	cOrdersNode* pnext;
};
class cListOrders
{
public:
	cOrdersNode* phead;
	cOrdersNode* ptail;

	cListOrders()
	{
		phead = NULL;
		ptail = NULL;

	}
	~cListOrders()
	{
		cOrdersNode* ptrav = phead;
		while (phead != NULL)
		{
			phead = ptrav->pnext;
			ptrav->pnext = NULL;
			delete ptrav;
			ptrav = phead;
		}
	}
	void attach(cOrdersNode* pnn)
	{
		if (phead == NULL)
		{
			phead = pnn;
			ptail = pnn;
		}
		else
		{
			ptail->pnext = pnn;
			ptail = pnn;
		}
	}

	void display()
	{
		cOrdersNode* ptrav = phead;
		while (ptrav != NULL)
		{
			cout << "CustomerID: " << ptrav->CustomerID << endl;
			cout << "ProductID: " << ptrav->ProductID << endl;
			cout << "Date: " << ptrav->date << endl;
			cout << "----------------------" << endl;
			ptrav = ptrav->pnext;
		}
	}

};


class cProductNode
{
public:
	string name;
	int ID;
	int price;
	int stock;
	int exp_month;
	int exp_year;
	cProductNode* pnext;
};
class cListProduct
{
public:
	cProductNode* phead;
	cProductNode* ptail;

	cListProduct()
	{
		phead = NULL;
		ptail = NULL;

	}
	~cListProduct()
	{
		cProductNode* ptrav = phead;
		while (phead != NULL)
		{
			phead = ptrav->pnext;
			ptrav->pnext = NULL;
			delete ptrav;
			ptrav = phead;
		}
	}
	void attach(cProductNode* pnn)
	{
		if (phead == NULL)
		{
			phead = pnn;
			ptail = pnn;
		}
		else
		{
			ptail->pnext = pnn;
			ptail = pnn;
		}
	}

	void display()
	{
		cProductNode* ptrav = phead;
		while (ptrav != NULL)
		{
			cout << "ID: " << ptrav->ID << endl;
			cout << "name: " << ptrav->name << endl;
			cout << "price: " << ptrav->price << endl;
			cout << "stock: " << ptrav->stock << endl;
			cout << "exp_month: " << ptrav->exp_month << endl;
			cout << "exp_year: " << ptrav->exp_year << endl;
			cout << "----------------------" << endl;
			ptrav = ptrav->pnext;
		}
	}
};









void main()
{
	int Admin_or_customer;
	string Admin_username;
	int Admin_password;
	int Admin_ID;
	int Admin_choice;


	//adding new products delarations 
	string add_new_product_name;
	float add_new_product_price;
	int add_new_product_stock;
	int add_new_product_exp_month;
	int add_new_product_exp_year;

	//editing products declaration
	int edit_product_id;

	//delete product declaration
	int delete_with_product_id;

	//check products alert
	int products_stock;

	//receipt declaration
	int tot_receipt;
	tot_receipt = 0;

	//monitor orders declaration
	int CustomerID_monitor_orders;

	//date
	string order_date[11];
	order_date[0] = "1-1-2025";
	order_date[1] = "2-1-2025";
	order_date[2] = "3-1-2025";
	order_date[3] = "4-1-2025";
	order_date[4] = "5-1-2025";
	order_date[5] = "6-1-2025";
	order_date[6] = "7-1-2025";
	order_date[7] = "8-1-2025";
	order_date[8] = "9-1-2025";
	order_date[9] = "10-1-2025";
	order_date[10] = "11-1-2025";

	
	



	//customer declaration:

	//select which product he want to buy
	int Proudct_id_to_buy;

	string customer_name;

	//how many products customer want to buy
	int number_of_products_customer_want_to_buy;
	//choosing if customer have account or not
	int have_account_choosing;

	//signin declaration for customer
	int Customer_ID;
	string Customer_username;
	int Customer_password;

	//read from admin file:
	ifstream admin_file("Admin.txt");
	string admin_line;
	string line;//admin
	cListAdmin admin_list;

	//read from cudtomer file:
	ifstream customer_file("Customer.txt");
	string customer_line;
	string line2;//customer
	cListCustomer customer_list;

	//read from orders file:
	ifstream orders_file("Orders.txt");
	string orders_line;
	string line3;//orders
	cListOrders orders_list;

	//read from product file:
	ifstream product_file("Product.txt");
	string product_line;
	string line4;//orders
	cListProduct product_list;
	string line5;//orders
	string line6;//orders
	string line7;//orders

	//admin
	cAdminNode* Admin;
	Admin = new cAdminNode;
	int i;

	getline(admin_file, admin_line);
	getline(admin_file, admin_line);
	Admin->ID = stoi(admin_line);
	for (i = 0; i < admin_line.length(); i++)
	{
		if (admin_line[i] == ',')
		{
			break;
		}

	}
	i++;
	while (admin_line[i] != ',')
	{
		Admin->name += admin_line[i];
		i++;
	}
	i++;
	while (i < admin_line.length())
	{
		line += admin_line[i];
		i++;
	}
	Admin->password = stoi(line);
	Admin->pnext = NULL;
	admin_list.attach(Admin);




	//customer
	int k;
	getline(customer_file, customer_line);
	while (getline(customer_file, customer_line))
	{

		cCustomerNode* customer;
		customer = new cCustomerNode;
		customer->ID = stoi(customer_line);
		for (k = 0; k < customer_line.length(); k++)
		{
			if (customer_line[k] == ',')
			{
				break;
			}

		}
		k++;
		while (customer_line[k] != ',')
		{
			customer->name += customer_line[k];
			k++;
		}
		k++;
		while (k < customer_line.length())
		{
			line2 += customer_line[k];
			k++;
		}
		customer->password = stoi(line2);
		customer->pnext = NULL;
		customer_list.attach(customer);
		line2.clear();
	}
	//customer_list.display();

	
	//orders
	int o;
	int number_of_date = 0;
	getline(orders_file, orders_line);
	while (getline(orders_file, orders_line))
	{
		number_of_date++;
		cOrdersNode* orders;
		orders = new cOrdersNode;
		orders->CustomerID = stoi(orders_line);
		for (o = 0; o < orders_line.length(); o++)
		{
			if (orders_line[o] == ',')
			{
				break;
			}

		}
		o++;

		while ( orders_line[o]!=',')
		{
			line3 += orders_line[o];
			o++;
		}
		o++;
		while (o < orders_line.length())
		{
			orders->date += orders_line[o];
			o++;
		}
		orders->ProductID = stoi(line3);
		orders->pnext = NULL;
		orders_list.attach(orders);
		line3.clear();
	}
	//orders_list.display();



	//products
	int j;
	getline(product_file, product_line);
	while (getline(product_file, product_line))
	{

		cProductNode* product;
		product = new cProductNode;
		product->ID = stoi(product_line);
		for (j = 0; j < product_line.length(); j++)
		{
			if (product_line[j] == ',')
			{
				break;
			}

		}
		j++;
		while (product_line[j] != ',')
		{
			product->name += product_line[j];
			j++;
		}
		j++;
		while (product_line[j] != ',')
		{

			line4 += product_line[j];
			j++;

		}
		product->price = stoi(line4);
		j++;
		while (product_line[j] != ',')
		{
			line5 += product_line[j];
			j++;
		}
		product->stock = stoi(line5);
		j++;
		while (product_line[j] != ',')
		{
			line6 += product_line[j];
			j++;
		}
		product->exp_month = stoi(line6);
		j++;
		while (j < product_line.length())
		{
			line7 += product_line[j];
			j++;
		}
		j++;
		product->exp_year = stoi(line7);

		product->pnext = NULL;
		product_list.attach(product);
		line4.clear();
		line5.clear();
		line6.clear();
		line7.clear();
	}
	//product_list.display();








	//market interface

	cout << "                             Welcome To H & ZOZ Market" << endl;
	cout << "             " << endl;
	cout << "Please Select Are You Admin OR Customer" << endl;

	cout << "1- Admin" << endl;
	cout << "             " << endl;
	cout << "2- Customer" << endl;


	cin >> Admin_or_customer;

	if (Admin_or_customer == 1)
	{


		system("cls");
		cout << "                             Welcome To Admin Portal" << endl;

		cout << "Please Enter Your Admin ID" << endl;
		cin >> Admin_ID;

		cout << "Please Enter Your Admin Username:" << endl;
		cin >> Admin_username;
		cout << "Please Enter Your Admin Password:" << endl;
		cin >> Admin_password;


		if (Admin_ID == Admin->ID && Admin_username == Admin->name && Admin_password == Admin->password)
		{
			cout << "Login Successfully" << endl;


			system("cls");

			cout << "                             Welcome To Admin Portal" << endl;
			cout << "                           " << endl;

			cout << "Select What Do you need to do Right Now From Below List" << endl;
			cout << "                                                             " << endl;

			cout << "1- Add New Products" << endl;

			cout << "2- Edit Products" << endl;

			cout << "3- Delete Products" << endl;

			cout << "4- Check Products Stock" << endl;

			cout << "5- Monitor Orders" << endl;

			cout << "6- Income Summary" << endl;

			cout << "7- Logout" << endl;
			cout << "                                                                                             " << endl;

			//stock alert (notifications)
			cout << "*Notifications*" << endl;
			cProductNode* ptrav;
			ptrav = product_list.phead;
			int flag_notification;
			flag_notification = 0;
			while (ptrav != NULL)
			{
				if (ptrav->stock <= 5)
				{
					cout << "CAUTION" << endl;
					cout << "Your Stock Of Product with ID NO." << ptrav->ID << " And ID Name With " << ptrav->name << " Is About To Be Out Of Stock Soon" << endl;
					cout << "Your Available Stock Right Now Is " << ptrav->stock << " Pieces" << endl;
					cout << "                                                                                             " << endl;
					flag_notification = 1;

				}
				ptrav = ptrav->pnext;
			}
			if (flag_notification == 0)
			{
				cout << "There's No Notifications For Today " << endl;
			}


			cin >> Admin_choice;
			system("cls");

			if (Admin_choice == 1) //add new products
			{
				cout << "                              ADD Products Section" << endl;



				cout << "Please Write the Product Name" << endl;
				cin >> add_new_product_name;

				cout << "Please Write The Product Price" << endl;
				cin >> add_new_product_price;

				cout << "Please Write the product Stock" << endl;
				cin >> add_new_product_stock;

				cout << "Please Write the product expire month" << endl;
				cin >> add_new_product_exp_month;

				cout << "Please Write the product expire year" << endl;
				cin >> add_new_product_exp_year;


				cProductNode* pnn = new cProductNode;
				pnn->name = add_new_product_name;
				pnn->price = add_new_product_price;
				pnn->stock = add_new_product_stock;
				pnn->exp_month = add_new_product_exp_month;
				pnn->exp_year = add_new_product_exp_year;

				if (product_list.phead == NULL)
				{
					pnn->ID = 1;
				}
				else
				{
					pnn->ID = product_list.ptail->ID + 1;
				}
				pnn->pnext = NULL;
				product_list.attach(pnn);


				//importing to product.txt file
				ofstream productfile;
				productfile.open("Product.txt");

				if (productfile.is_open())
				{
					productfile << "ID" << ",";
					productfile << "NAME" << ",";
					productfile << "Price" << ",";
					productfile << "Stock" << ",";
					productfile << "exp_month" << ",";
					productfile << "exp_year" << endl;

					cProductNode* ptrav = product_list.phead;
					while (ptrav != NULL)
					{
						productfile << to_string(ptrav->ID) << ",";
						productfile << ptrav->name << ",";
						productfile << to_string(ptrav->price) << ",";
						productfile << to_string(ptrav->stock) << ",";
						productfile << to_string(ptrav->exp_month) << ",";
						productfile << to_string(ptrav->exp_year) << endl;
						ptrav = ptrav->pnext;
					}
				}
				productfile.close();

				cout << add_new_product_name << " Has Been Added Successfully" << endl;
			}



			if (Admin_choice == 2)//edit products
			{

				cout << "                              Edit Products Section" << endl;
				cout << "Enter Product ID Do You Want To Edit" << endl;
				cin >> edit_product_id;

				cProductNode* ptrav;
				ptrav = product_list.phead;

				while (ptrav != NULL)
				{
					if (ptrav->ID == edit_product_id)
					{
						cout << "Sure, The product Do you Want to edit Details: " << endl;
						cout << "Product ID: " << ptrav->ID << endl;
						cout << "Product Name: " << ptrav->name << endl;
						cout << "Product Available Stock: " << ptrav->stock << endl;
						cout << "Product Price: " << ptrav->price << endl;
						cout << "Product Expire Month: " << ptrav->exp_month << endl;
						cout << "Product Expire Year: " << ptrav->exp_year << endl;
						cout << "                           " << endl;

						cout << "Enter The New Info For Product ID: " << edit_product_id << endl;

						cout << "Enter New Product Name: " << endl;
						cin >> ptrav->name;

						cout << "Enter New Product Stock: " << endl;
						cin >> ptrav->stock;

						cout << "Enter New Product Price: " << endl;
						cin >> ptrav->price;

						cout << "Enter New Product Expire Month: " << endl;
						cin >> ptrav->exp_month;

						cout << "Enter New Product Expire Year: " << endl;
						cin >> ptrav->exp_year;

						cout << "Product With ID No." << edit_product_id << " Has Been Upadeted Successfully" << endl;
					}
					ptrav = ptrav->pnext;
				}

				//importing to product.txt file
				ofstream productfile;
				productfile.open("Product.txt");

				if (productfile.is_open())
				{
					productfile << "ID" << ",";
					productfile << "NAME" << ",";
					productfile << "Price" << ",";
					productfile << "Stock" << ",";
					productfile << "exp_month" << ",";
					productfile << "exp_year" << endl;

					cProductNode* ptrav = product_list.phead;
					while (ptrav != NULL)
					{
						productfile << to_string(ptrav->ID) << ",";
						productfile << ptrav->name << ",";
						productfile << to_string(ptrav->price) << ",";
						productfile << to_string(ptrav->stock) << ",";
						productfile << to_string(ptrav->exp_month) << ",";
						productfile << to_string(ptrav->exp_year) << endl;
						ptrav = ptrav->pnext;
					}
				}
				productfile.close();


			}


			if (Admin_choice == 3) // Delete Products
			{
				cout << "                              Delete Products Section" << endl;
				cout << "Please Enter The Product ID You Want To Delete" << endl;
				cin >> delete_with_product_id;

				cProductNode* ptrav = product_list.phead;
				cProductNode* toDelete = NULL;


				while (ptrav != NULL)
				{
					if (ptrav->ID == delete_with_product_id)
					{
						toDelete = ptrav;
						break;
					}
					ptrav = ptrav->pnext;
				}

				if (toDelete == NULL)
				{
					cout << "Product with ID " << delete_with_product_id << " does not exist in the list" << endl;
				}
				else
				{

					if (toDelete == product_list.phead)
					{

						product_list.phead = product_list.phead->pnext;
						if (product_list.phead == NULL)
						{
							product_list.ptail = NULL;
						}
					}
					else
					{
						ptrav = product_list.phead;
						while (ptrav != NULL && ptrav->pnext != toDelete)
						{
							ptrav = ptrav->pnext;
						}

						if (ptrav != NULL)
						{

							ptrav->pnext = toDelete->pnext;
							if (toDelete == product_list.ptail) 
							{
								product_list.ptail = ptrav;
							}
						}
					}

					delete toDelete;
					cout << "Product with ID " << delete_with_product_id << " has been deleted successfully" << endl;


					//importing to product.txt file
					ofstream productfile("Product.txt");
					if (productfile.is_open())
					{
						productfile << "ID" << ",";
						productfile << "NAME" << ",";
						productfile << "Price" << ",";
						productfile << "Stock" << ",";
						productfile << "exp_month" << ",";
						productfile << "exp_year" << endl;


						ptrav = product_list.phead;
						while (ptrav != NULL)
						{
							productfile << to_string(ptrav->ID) << ",";
							productfile << ptrav->name << ",";
							productfile << to_string(ptrav->price) << ",";
							productfile << to_string(ptrav->stock) << ",";
							productfile << to_string(ptrav->exp_month) << ",";
							productfile << to_string(ptrav->exp_year) << endl;
							ptrav = ptrav->pnext;
						}
					}
					productfile.close();
				}
			}


			if (Admin_choice == 4) // check products stock
			{
				cout << "                              Check Products Stock Section" << endl;
				cout << "                      " << endl;

				
				cout << "Boss, Please Enter A Number Of Stock To See The Lower Than It" << endl;
				cin >> products_stock;
				
				int stock_check_flag = 0;
				cProductNode* ptrav;
				ptrav = product_list.phead;

				while (ptrav != NULL)
				{
					if (ptrav->stock < products_stock)
					{
						cout << "You Have Available Stock Of Product ID: " << ptrav->ID << " With Name " << ptrav->name << " The Available Stock is: " << ptrav->stock << endl;
						stock_check_flag++;
					}
					


					

					ptrav = ptrav->pnext;
				}
				if (stock_check_flag ==0)
				{
					cout << "There's No Products Stock Is Lower Than " << products_stock << endl;
				}
			}


			if (Admin_choice == 5)//monitor orders
			{
				cout << "Please Enter The Customer ID That You Want To Search For" << endl;
				cin >> CustomerID_monitor_orders;

				int orderCount = 0;
				cOrdersNode* ptrav_orders = orders_list.phead;

				
				while (ptrav_orders != NULL)
				{
					if (ptrav_orders->CustomerID == CustomerID_monitor_orders)
					{
						orderCount++;
					}
					ptrav_orders = ptrav_orders->pnext;
				}

				if (orderCount > 0)
				{
					cout << "Customer ID " << CustomerID_monitor_orders << " has placed " << orderCount << " orders." << endl;
				}
				else
				{
					cout << "No orders found for Customer ID " << CustomerID_monitor_orders << "." << endl;
				}
			}
			

			if (Admin_choice == 6)//income summary
			{
				
				
					string specific_date;
					cout << "Enter the specific date (format: dd-mm-yyyy): " << endl;
					cin >> specific_date;

					int total_income = 0;
					cOrdersNode* order_ptrav = orders_list.phead;

					while (order_ptrav != NULL) 
					{
						if (order_ptrav->date == specific_date) 
						{
							cProductNode* product_ptrav = product_list.phead;
							while (product_ptrav != NULL)
							{
								if (product_ptrav->ID == order_ptrav->ProductID) 
								{
									total_income += product_ptrav->price;
									break;
								}
								product_ptrav = product_ptrav->pnext;
							}
						}
						order_ptrav = order_ptrav->pnext;
					}

					cout << "Total income for " << specific_date << " is: " << total_income << " EGP" << endl;
				


			}
			if (Admin_choice == 7)//logout
			{
				cout << "Logged Out Successfully" << endl;
				cout << "GoodBye Boss" << endl;
			}

		}
		else
		{
			cout << "Admin Username OR Admin Pssword Is Incorrect" << endl;

		}
	}



	


	//CUSTOMER
	else
	{
		if (Admin_or_customer == 2)
		{
			system("cls");


			cout << "Do You Have Account?" << endl;
			cout << "1- YES  2-NO" << endl;
			cin >> have_account_choosing;


			if (have_account_choosing != 1 && have_account_choosing != 2)
			{
				cout << "You Should Enter Only 1 OR 2" << endl;
				cout << "1 FOR SIGNIN  2 FOR SIGNUP" << endl;
			}
			else
			{

				//signup for customer
				if (have_account_choosing == 2)
				{
					cout << "                                                               Welcome To Sign UP Portal" << endl;
					cCustomerNode* pnn_customer = new cCustomerNode;
					cout << "Please Enter Your Name:" << endl;

					cin >> customer_name;

					cout << "Please Enter Your Password:" << endl;
					int password;
					cin >> password;


					pnn_customer->name = customer_name;
					pnn_customer->password = password;
					if (customer_list.phead == NULL)
					{
						pnn_customer->ID = 1;
					}
					else
					{
						pnn_customer->ID = customer_list.ptail->ID + 1;
					}
					pnn_customer->pnext = NULL;
					customer_list.attach(pnn_customer);


					cout << "Your New ID Is : " << pnn_customer->ID << endl;


					//importing to customer.txt file
					ofstream customerfile;
					customerfile.open("Customer.txt");

					if (customerfile.is_open())
					{
						customerfile << "ID" << ",";
						customerfile << "NAME" << ",";
						customerfile << "PASSWORD" << endl;


						cCustomerNode* ptrav = customer_list.phead;
						while (ptrav != NULL)
						{
							customerfile << to_string(ptrav->ID) << ",";
							customerfile << ptrav->name << ",";
							customerfile << to_string(ptrav->password) << endl;
							ptrav = ptrav->pnext;
						}
					}
					customerfile.close();
				}



				//signin for customer


				cout << "                                                Welcome To Login Portal" << endl;


				cout << "Please Enter Your Customer ID" << endl;
				cin >> Customer_ID;

				cout << "Please Enter Your Customer Username:" << endl;
				cin >> Customer_username;

				cout << "Please Enter Your Customer Password:" << endl;
				cin >> Customer_password;

				cCustomerNode* customer = customer_list.phead;
				while (customer != NULL)
				{
					if (Customer_ID == customer->ID && Customer_username == customer->name && Customer_password == customer->password)
					{
						cout << "Login Successfully" << endl;

						cout << "                                                                                             " << endl;
						system("cls");
						cout << "                             Welcome To H & ZOZ Market" << endl;
						cout << "                                                                                             " << endl;
						cout << "                               These is Our Products    " << endl;
						cout << "Our Products 100% Original" << endl;
						cout << "                                                                                             " << endl;


						cProductNode* ptrav;
						ptrav = product_list.phead;


						//view products
						while (ptrav != NULL)
						{
							if (ptrav->stock > 0)
							{
								cout << "ID: " << ptrav->ID << endl;
								cout << "Name: " << ptrav->name << endl;
								cout << "Price: " << ptrav->price << endl;
								cout << "Stock: " << ptrav->stock << endl;

								cout << "----------------------" << endl;
							}
							ptrav = ptrav->pnext;
						}

						int y;
						cout << "                                                                                             " << endl;
						cout << "What Do You Need To Order Today?" << endl;

						cout << "Please Enter How Many Products Do You Want (Quantity)" << endl;
						cin >> number_of_products_customer_want_to_buy;

						int flag_stock = 0;
						number_of_date++;


						for (y = 0; y < number_of_products_customer_want_to_buy; )
						{
							y++;
							cout << "Enter Product ID Number " << y << " That Do You Want To Purchase" << endl;
							cin >> Proudct_id_to_buy;

							cProductNode* stock_ptrav = product_list.phead;

							while (stock_ptrav != NULL)
							{
								if (stock_ptrav->ID == Proudct_id_to_buy)
								{
									if (stock_ptrav->stock > 0)
									{
										flag_stock = 1;
										stock_ptrav->stock--;
									}
									else
									{
										break;
									}
								}
								stock_ptrav = stock_ptrav->pnext;
							}

							if (flag_stock == 1)
							{
								cOrdersNode* pnn_order = new cOrdersNode;

								pnn_order->ProductID = Proudct_id_to_buy;
								pnn_order->CustomerID = Customer_ID;
								pnn_order->date = order_date[number_of_date];
								pnn_order->pnext = NULL;
								orders_list.attach(pnn_order);
							}
							else 
							{
								cout << "Sorry This Product is currently out of stock" << endl;
							}
						}




						//Order Reciept
						ptrav = product_list.phead;
						int total_cost;
						system("cls");


						cout << "Your Summary Of Order Reciept:" << endl;
						total_cost = 0;
						int cur_cost = 0;
						while (ptrav != NULL)
						{
							cOrdersNode* ptrav_order;
							ptrav_order = orders_list.phead;


							while (ptrav_order != NULL)
							{

								if (ptrav_order->ProductID == ptrav->ID && ptrav_order->CustomerID == Customer_ID)
								{
									if (ptrav_order->date == order_date[number_of_date])
									{
										cur_cost += ptrav->price;
									}
									total_cost += ptrav->price;

									cout << "     " << endl;
									cout << "ID: " << ptrav->ID << endl;
									cout << "Name: " << ptrav->name << endl;
									cout << "Price: " << ptrav->price << endl;
									cout << "Order Date: " << ptrav_order->date << endl;
								}

								ptrav_order = ptrav_order->pnext;
							}
							ptrav = ptrav->pnext;
						}

						cout << "Your Order For Day " << order_date[number_of_date] << " Costs :" << cur_cost << endl;


						cout << "_______________" << endl << endl;
						cout << "your total cost is: " << total_cost << " EGP" << endl;
						cout << "Your Order Placed Succesfully" << endl;

						//return
						cout << "Do You Want To Return Any Product?" << endl << "1-Yes" << endl << "2-No " << endl;
						int return_one_two;
						cin >> return_one_two;

						if (return_one_two == 1)
						{
							cout << "Please Enter Your Product ID To Return" << endl;
							int enter_product_id;
							cin >> enter_product_id;

							cOrdersNode* ptrav_order = orders_list.phead;
							while (ptrav_order != NULL)
							{
								cProductNode* ptrav_return = product_list.phead;
								while (ptrav_return != NULL)
								{
									if (ptrav_order->CustomerID == Customer_ID && ptrav_order->ProductID == enter_product_id && ptrav_return->ID == enter_product_id)
									{
										ptrav_return->stock++;
										break;
									}
									ptrav_return = ptrav_return->pnext;
								}
								if (ptrav_return != NULL)
								{
									break;
								}
								ptrav_order = ptrav_order->pnext;
							}
							if (ptrav_order == NULL)
							{
								cout << "order not found" << endl;
							}
							else
							{
								if (ptrav_order == orders_list.phead)
								{

									orders_list.phead = orders_list.phead->pnext;
									if (orders_list.phead == NULL)
									{
										orders_list.ptail = NULL;
									}
								}
								else
								{
									cOrdersNode* ptravO2 = orders_list.phead;
									while (ptravO2 != NULL && ptravO2->pnext != ptrav_order)
									{
										ptravO2 = ptravO2->pnext;
									}

									if (ptravO2 != NULL)
									{

										ptravO2->pnext = ptrav_order->pnext;
										if (ptrav_order == orders_list.ptail)
										{
											orders_list.ptail = ptravO2;
										}
									}
								}

								delete ptrav_order;

								cout << "Product with ID: " << enter_product_id << " has been returned successfully" << endl;
							}
						}
						else
						{
							cout << "Thanks For Visiting H & ZOZ Market" << endl;
							cout << "Logged Out successfully" << endl;
						}
						break;
					}
					customer = customer->pnext;
				}


				//importing to product.txt file after returning
				ofstream productfile;
				productfile.open("Product.txt");
				if (productfile.is_open())
				{
					productfile << "ID" << ",";
					productfile << "NAME" << ",";
					productfile << "Price" << ",";
					productfile << "Stock" << ",";
					productfile << "exp_month" << ",";
					productfile << "exp_year" << endl;

					cProductNode* ptrav = product_list.phead;
					while (ptrav != NULL)
					{
						productfile << to_string(ptrav->ID) << ",";
						productfile << ptrav->name << ",";
						productfile << to_string(ptrav->price) << ",";
						productfile << to_string(ptrav->stock) << ",";
						productfile << to_string(ptrav->exp_month) << ",";
						productfile << to_string(ptrav->exp_year) << endl;
						ptrav = ptrav->pnext;
					}
				}
				productfile.close();


				//importing to order file
				ofstream orderfile;
				orderfile.open("Orders.txt");

				if (orderfile.is_open())
				{
					orderfile << "CUSTOMER ID" << ",";
					orderfile << "PRODUCT ID" << ",";
					orderfile << "DATE" << endl;

					cOrdersNode* ptrav = orders_list.phead;
					while (ptrav != NULL)
					{
						orderfile << to_string(ptrav->CustomerID) << ",";
						orderfile << to_string(ptrav->ProductID) << ",";
						orderfile << ptrav->date << endl;
						ptrav = ptrav->pnext;
					}
				}
				orderfile.close();


				if (customer == NULL)
				{

					cout << "Username OR Pssword Is Incorrect" << endl;

				}

			}

		}

			
			
		else
		{
			cout << "Invalid Input You Should Enter 1 OR 2" << endl;
			cout << "1 For Admin // 2 For Customer" << endl;
		}

	}


	

}
	