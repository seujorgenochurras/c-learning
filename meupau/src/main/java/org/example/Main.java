package org.example;

import org.example.validator.JsonWayTooLongExceptionLogger;
import org.example.validator.MeuPauExceptionLogger;
import org.example.validator.SyntaxExceptionLogger;
import org.example.validator.chain.ExceptionResponsibilityChain;

public class Main {
    public static void main(String[] args) {
        var exceptionValidatorChain = ExceptionResponsibilityChain.startChain()
                .addLogger(new MeuPauExceptionLogger())
                .addLogger(new SyntaxExceptionLogger())
                .addLogger(new JsonWayTooLongExceptionLogger());
        try {
            smth();
        }catch (Exception e){
            exceptionValidatorChain.logException(e);
        }
        System.out.println("Hello world!");
    }

    public static void smth() throws ArrayIndexOutOfBoundsException {
        System.out.println("AOIWHDJAOIWHJDOIAWHDOAWIHDAWOIHD");
    }
}