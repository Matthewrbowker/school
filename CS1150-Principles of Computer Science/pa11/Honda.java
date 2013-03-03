public class Honda extends Car {
  
  public void drive(double ammount) {
    System.out.println("Woops, I'm a honda.");
  }
  
  public static void main(String args[]) {
    new Honda().drive(23);
    System.out.println("I am a Honda");
  }
}