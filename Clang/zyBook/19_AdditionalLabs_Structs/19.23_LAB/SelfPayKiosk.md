# 19.23 LAB\*: Program: Self pay kiosk

**Program Specifications** Write a program that uses a struct to support basic operations such as scan item, cancel transaction, checkout, and make payment. SelfPayKiosk.h declares the functions necessary to complete the exercise. SelfPayKiosk.c provides the function stubs. Follow each step to gradually complete all functions in SelfPayKiosk.c.

Note: This program is designed for _incremental development_. Complete each step and submit for grading before starting the next step. Only a portion of tests pass after each step but confirm progress. main() in main.c includes basic function calls. Add statements as functions are completed to support development mode testing.

**Step 0.** In SelfPayKiosk.h, declare data members for number of customers served (int), total sales (double), and current amount due (double). Note the provided constant variable in SelfPayKiosk.c indicates the sales tax of 7%.

**Step 1 (1 pts).** 1) Complete the InitializeSelfPayKiosk() function to set all data members to zero. 2) Complete the accessor functions to return the number of customers served, total sales, and current amount due. Submit for grading to confirm 1 test passes.

**Step 2 (2 pt).** Complete the ScanItem() function. Increase the amount due by parameter price. Do not update amount due if parameter price is negative. Submit for grading to confirm 3 tests pass.

**Step 3 (1 pt).** Complete the CheckOut() function. Multiply amount due by SALES\_TAX and add to amount due. Submit for grading to confirm 4 tests pass.

**Step 4 (2 pts).** Complete the MakePayment() function. If parameter payment is enough to pay the amount due, increase total sales by amount due, increment number of customers served, and reset amount due to zero in preparation for the next customer. However, if parameter payment is **not** enough, update total sales by payment and reduce amount due by payment. Do not make any changes if parameter payment is negative. Submit for grading to confirm 6 tests pass.

**Step 5 (1 pt).** 1) Complete the ResetKiosk() function to reset all data members to zero. 2) Complete the CancelTransaction() function to reset amount due to zero. Submit for grading to confirm 7 tests pass.

**Step 6 (2 pts).** Complete the SimulateSales() function to perform multiple transactions with increasing prices. Use a loop to simulate parameter numSales transactions. Within the loop, call ScanItem() with parameter initialPrice. Call CheckOut() and MakePayment() to make a payment of $1 more than the amount due. Finally, increase the item price by parameter incrPrice in preparation for the next transaction. Submit for grading to confirm 8 tests pass.

**Step 7 (1 pt).** Add an int data member to indicate if the customer has checked out and is ready to make a payment, where 0 means no and 1 means yes. Only allow payment after customer has checked out. The CancelTransaction() function should **not** reset amount due if the customer has checked out. Update the following functions by inserting assignment statements and if statements related to the the new data member: InitializeSelfPayKiosk(), CheckOut(), MakePayment(), and CancelTransaction(). Ex: Set the new data member to 0 only after full payment has been made. Submit for grading to confirm all tests pass.