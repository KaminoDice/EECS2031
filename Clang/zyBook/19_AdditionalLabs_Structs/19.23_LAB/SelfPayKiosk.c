#include "SelfPayKiosk.h"

const double SALES_TAX = 0.07;

// Initializer
SelfPayKiosk InitializeSelfPayKiosk(SelfPayKiosk kiosk) {
   /* Complete the function */
   kiosk.cusNum = 0;
   kiosk.totSale = 0.0;
   kiosk.curDue = 0.0;
   kiosk.rd = 0;
   return kiosk;
}

// Return total daily sales
double GetTotalSales(SelfPayKiosk kiosk) {
   /* Update the return statment */

   return kiosk.totSale;
}

// Return current amount due
double GetAmountDue(SelfPayKiosk kiosk) {
   /* Update the return statment */
   return kiosk.curDue;
}

// Return number of customers served
int GetNumCustomers(SelfPayKiosk kiosk) {
   /* Update the return statment */
      return kiosk.cusNum;
}

// Scan one item
SelfPayKiosk ScanItem(SelfPayKiosk kiosk, double price) {
   /* Complete the function */
   if (price >= 0) {
      kiosk.curDue += price;
   }
   return kiosk;
}


// Apply sales tax to current purchases
   SelfPayKiosk CheckOut(SelfPayKiosk kiosk) {
   /* Complete the function */
   kiosk.curDue += (kiosk.curDue * SALES_TAX) ;
   kiosk.rd = 1;
   return kiosk;
}

// Cancel current purchases
SelfPayKiosk CancelTransaction(SelfPayKiosk kiosk) {
   /* Complete the function */
   if (kiosk.rd == 0) kiosk.curDue = 0;
   return kiosk;
}

// Reset register for the day
SelfPayKiosk ResetKiosk(SelfPayKiosk kiosk) {
   /* Complete the function */
   kiosk.cusNum = 0;
   kiosk.totSale = 0;
   kiosk.curDue = 0;
   return kiosk;
}

// Apply payment to amount due
SelfPayKiosk MakePayment(SelfPayKiosk kiosk, double payment) {
   /* Complete the function */
   if (payment >= kiosk.curDue && kiosk.rd == 1) {
      kiosk.totSale += kiosk.curDue;
      kiosk.cusNum += 1;
      kiosk.curDue = 0;
      kiosk.rd = 0;
   } else if (payment >= 0 && kiosk.rd == 1) {
      kiosk.totSale = payment;
      kiosk.curDue -= payment;
   }
   return kiosk;
}

// Simulate multiple transactions
SelfPayKiosk SimulateSales(SelfPayKiosk kiosk, int numSales, double initialPrice, double incrPrice) {
   /* Complete the function */
   for (int i = 0; i < numSales; ++i) {
      kiosk = ScanItem(kiosk, initialPrice);
      kiosk = CheckOut(kiosk);
      kiosk = MakePayment(kiosk, kiosk.curDue + 1);
      initialPrice += incrPrice;
   }


   return kiosk;
}
