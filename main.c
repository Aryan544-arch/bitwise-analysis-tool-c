#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void numberRepresentation(uint8_t);
void bitwiseOperation(uint8_t);
void individualBitManipulation(uint8_t);
void bitChecking(uint8_t *, int);
void bitSetting(uint8_t *, int);
void bitClearing(uint8_t *, int);
void bitToggling(uint8_t *, int);

int main(void)
{
    unsigned int input;
    printf("Enter Value: ");
    if (scanf("%u", &input) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }

    if (input > 255u)
    {
        printf("Invalid Input\n");
        return 1;
    }

    uint8_t value = (uint8_t)input;
    numberRepresentation(value);
    bitwiseOperation(value);
    individualBitManipulation(value);
    return 0;
}

void numberRepresentation(uint8_t value)
{
    printf("Decimal: %u\n", value);
    printf("Hexadecimal: %#X\n", value);

    printf("Binary: ");
    for (int i = 7; i >= 0; i--)
    {
        if ((value & (1u << i)) != 0u)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

void bitwiseOperation(uint8_t value)
{
    printf("Original Value: %u\n", value);
    printf("AND Operation: %#X\n", (uint8_t)(value & 0x0F));
    printf("OR Operation: %#X\n", (uint8_t)(value | 0x0F));
    printf("XOR Operation: %#X\n", (uint8_t)(value ^ 0x0F));
    printf("Complement: %#X\n", (uint8_t)~value);
}

void individualBitManipulation(uint8_t originalValue)
{
    uint8_t currentValue = originalValue;
    while (true)
    {
        printf("\n========== BIT MANIPULATION ==========\n\n");
        numberRepresentation(currentValue);
        printf("\nSelect an Operation\n\n");
        printf("1. Check a Bit\n2. Set a Bit\n3. Clear a Bit\n4. Toggle a Bit\n5. Exit\n\n");
        printf("Enter Your Choice: ");
        int ch;
        if (scanf("%d", &ch) != 1)
        {
            printf("Invalid Input\n");
            return;
        }
        if (ch == 5)
            break;
        printf("Enter Bit Position 0-7: ");
        int selectedBit;
        if (scanf("%d", &selectedBit) != 1 || selectedBit < 0 || selectedBit > 7)
        {
            printf("Invalid Input\n");
            return;
        }
        switch (ch)
        {
        case 1:
            bitChecking(&currentValue, selectedBit);
            break;
        case 2:
            bitSetting(&currentValue, selectedBit);
            break;
        case 3:
            bitClearing(&currentValue, selectedBit);
            break;
        case 4:
            bitToggling(&currentValue, selectedBit);
            break;
        default:
            printf("Invalid Input\n");
        }
    }
}

void bitChecking(uint8_t *value, int selectedBit)
{
    if ((*value & (1u << selectedBit)) != 0u)
        printf("Selected Bit is Set\n");
    else
        printf("Selected Bit is Unset\n");
}

void bitSetting(uint8_t *value, int selectedBit)
{
    *value |= 1u << selectedBit;
    numberRepresentation(*value);
}

void bitClearing(uint8_t *value, int selectedBit)
{
    *value &= (~(uint8_t)(1u << selectedBit));
    numberRepresentation(*value);
}

void bitToggling(uint8_t *value, int selectedBit)
{
    *value ^= (1u << selectedBit);
    numberRepresentation(*value);
}