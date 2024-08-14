import java.util.Scanner;

public class FieldArea {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the length of the field in feet: ");
        double length = scanner.nextDouble();
        System.out.print("Enter the width of the field in feet: ");
        double width = scanner.nextDouble();

        
        double areaInSquareFeet = length * width;

        double areaInAcres = areaInSquareFeet / 43560;

        System.out.println("The area of the field is " + areaInAcres + " acres.");
    }
}