
![WhatsApp Image 2024-09-14 at 19 15 50_f346808e](https://github.com/user-attachments/assets/0a50fbe7-6204-421b-a4a0-82ece9877c0a)

*PseudoCode*:
```
INPUT cost
IF cost < 2000:
  discount = 0.05 * cost
ELSEIF cost >= 2000 && cost <= 4000:
  discount = 0.1 * cost
ELSEIF cost > 4000 && cost <= 6000:
  discount = 0.2 * cost
ELSEIF cost > 6000:
  discount = 0.35 * cost

OUTPUT "Amount: ", cost
cost = cost - discount
OUTPUT "Discounted Amount: ", cost
```
