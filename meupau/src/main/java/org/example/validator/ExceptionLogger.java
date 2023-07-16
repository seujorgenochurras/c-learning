package org.example.validator;

public interface ExceptionLogger {
    String getLogMessage();
    int getExitCode();

    boolean isResponsible(Exception e);

}
