package io.github.seujorgenochurras;

public class Main {
   public static void main(String[] args) {
      System.out.println("Hello world!");
      Integer a = 46;
      Integer b = 200;
      new TestClass().getASCIITableValues(20, 20);
   }



   public static class TestClass{
      static{
         System.load("C:/Users/User/Desktop/projetos c/java-c-implementation/src/main/java/io/github/seujorgenochurras/fuckyeah.dll");
      }
      public native void getASCIITableValues(Integer from, Integer to);
      native void printYes();
   }

}