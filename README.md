# Market Management System (C++)

This is a complete C++ console-based Market Management System developed as a course project using data structures and file handling. The system supports customer and admin operations including purchasing, returning, product management, and sales tracking. It was developed as part of the Data Structures course by Ziad Mohamed and Mohamed Hesham.

## 🧠 Features

### 👤 Customer Functionalities
- **Registration & Login**
- **View available products**
- **Purchase products (with stock update)**
- **Return products**
- **View receipts / purchase history**
- **Logout**

### 🛠️ Admin Functionalities
- **Admin login**
- **Add / Edit / Delete products**
- **Stock alert for low inventory**
- **Monitor customer orders**
- **View income summary by date**
- **Logout**

## 🧱 System Design

### 🔁 Data Structures Used
- **Linked Lists** for:
  - Products
  - Customers
  - Admins
  - Orders

### 📦 Classes
- `Product`: ID, name, stock, price, expiry date
- `Customer`: ID, name, password
- `ProCust`: Customer-Product relation
- `Admin`: ID, name, password
- `Orders`: Product-Customer pair

### 💾 Files Used
- `products.txt`
- `customers.txt`
- `orders.txt`
- `admins.txt`

## ⚙️ Technical Details

- **Language:** C++
- **Paradigm:** OOP (Object-Oriented Programming)
- **Concepts:** Linked Lists, File I/O, Class Inheritance, Data Security
- **IDE:** Visual Studio / Code::Blocks (compatible)

## 📈 Key Highlights

- Secure password authentication for both customers and admins
- Real-time updates to stock and orders
- Clear and user-friendly command-line interface
- Scalable system capable of handling unlimited data entries

## 👥 Team

- Ziad Mohamed  
- Mohamed Hesham

## 📌 How to Run

1. Open the project in any C++ IDE (e.g., Visual Studio or Code::Blocks)
2. Compile and run `main.cpp`
3. Follow on-screen prompts for either customer or admin access

## 📜 License

This project was created for educational purposes as part of the Data Structures course.
