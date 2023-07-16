package org.example.validator;

import java.nio.channels.IllegalSelectorException;

public record MeuPauExceptionLogger() implements ExceptionLogger {
    @Override
    public String getLogMessage() {
        return "MEU PAU";
    }

    @Override
    public int getExitCode() {
        return 404;
    }

    @Override
    public boolean isResponsible(Exception e) {
        return e instanceof IllegalSelectorException;
    }
}
