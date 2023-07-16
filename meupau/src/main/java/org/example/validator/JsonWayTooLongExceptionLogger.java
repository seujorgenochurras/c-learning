package org.example.validator;

public record JsonWayTooLongExceptionLogger() implements ExceptionLogger {

    @Override
    public String getLogMessage() {
        return "Way too long bro";
    }

    @Override
    public int getExitCode() {
        return 200;
    }

    @Override
    public boolean isResponsible(Exception e) {
        return e instanceof ArrayIndexOutOfBoundsException;
    }
}
