# 🅿️ C++ Parking Fee Calculator

This **C++ program** calculates the parking fee based on the number of hours a vehicle is parked in a garage. It takes into account the time spent, applying a minimum fee for the first three hours, an additional fee for hours exceeding that, and a maximum cap of $20.

## ✨ Features  
- ⏰ **Hourly Calculation**: The program accepts decimal values for parking time (e.g., 1.5 for 1 hour and 30 minutes).
- 💵 **Fee Structure**:
  - A minimum fee of $2.50 for the first 3 hours.
  - An additional fee of $1.00 for every hour over 3.
  - A maximum fee cap of $20.
- 🛑 **Error Handling**: Ensures input is a valid number within the 1-24 hours range.
- 🚫 **Exit Option**: Users can exit the program by entering `0` when prompted for parking time.

## 🖥️ How to Run  

1. Clone the repository:  
    ```bash
    git clone <repository_url>
    ```  

2. Navigate into the project directory:  
    ```bash
    cd cpp-parking-fee-calculator
    ```  

3. Compile the C++ program:  
    ```bash
    g++ parking_fee_calculator.cpp -o parking_fee_calculator
    ```  

4. Run the program:  
    ```bash
    ./parking_fee_calculator
    ```  

## 📂 File Structure  

- 📜 `parking_fee_calculator.cpp` - The C++ source file containing the logic for calculating the parking fee based on user input.
- 📖 `README.md` - This file, containing details about the project.

## 📜 License  

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.  

---

🅿️ **Thank you for using the Parking Fee Calculator! Drive safely!** 🚗
