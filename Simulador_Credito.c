#include <stdio.h>

int main() { 
    char credit_type; (100)
    double loan_amount, total_amount, monthly_payment;
    int months;

    printf("Que tipo de crédito quiere el cliente?\n");
    printf("Opciones:\n1. Preciso\n2. Linea abierta\n3. Hipotecario de Vivienda\n4. Vivienda de interés publico\n5. Vivienda de interés social\n6. Educación superior\n");
    scanf("%s", credit_type);

    printf("Cuanto dinero necesita?\n");
    scanf("%lf", &loan_amount);

    printf("En cuanto tiempo va a pagarlo?\n");
    printf("Opciones de meses:\n3, 6, 9, 12, 18, 24, 30, 36\n");
    scanf("%d", &months);

    total_amount = loan_amount + (loan_amount * 0.12);
    monthly_payment = total_amount / months;

    printf("\nResumen del crédito:\n");
    printf("Tipo de crédito: %s\n", credit_type);
    printf("Monto solicitado: %.2f\n", loan_amount);
    printf("Total a pagar con 12 por ciento de interés: %.2f\n", total_amount);
    printf("Cuotas mensuales a pagar por %d meses: %.2f\n", months, monthly_payment);

    return 0;
}