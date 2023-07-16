package org.example.validator;

public record SyntaxExceptionLogger() implements ExceptionLogger {
    @Override
    public String getLogMessage() {
        return "BRUH";
    }

    @Override
    public int getExitCode() {
        return 503;
    }

    @Override
    public boolean isResponsible(Exception e) {
        return e instanceof IllegalAccessException;
    }
}
