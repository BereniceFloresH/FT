public class Sum {
    public static void main(String[] args) {
        double a = Double.parseDouble(args[0]);
        double b = Double.parseDouble(args[1]);
        System.out.println("Result: %.1f + %.1f = %.1f".formatted(a, b, sum(a, b)));
    }

    private static Double sum(Double a, Double b) {
        return a + b;
    }
}
