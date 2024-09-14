*PseudoCode*:
```
INPUT id, name, units

IF units < 200:
  charge = 16.20
  total = units * charge
ELSEIF units >= 200 && < 300:
  charge = 20.10
  total = units * charge
ELSEIF units >= 300 && < 500:
  charge = 27.10
  total = units * charge
ELSE:
  charge = 35.90
  total = units * charge

IF total > 18000:
  surcharge = 0.15 * total

netamount = total + surcharge

OUTPUT "Customer ID: ", id
OUTPUT "Customer Name: ", name
OUTPUT "Units Consumed: ", units
OUTPUT "Amount Charges @", charges, "per unit: ", total
OUTPUT "Surcharge Amount: ", surcharge
OUTPUT "net Amount Paid by the customer: ", netamount
``` 

![WhatsApp Image 2024-09-14 at 19 15 51_c48ba5ae](https://github.com/user-attachments/assets/2e74fbaf-d23d-44cf-a1b7-d50726eb970f)
