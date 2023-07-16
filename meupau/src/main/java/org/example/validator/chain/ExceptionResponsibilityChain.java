package org.example.validator.chain;

import org.example.validator.ExceptionLogger;

import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;

public class ExceptionResponsibilityChain {
    private static final Logger logger = Logger.getLogger(ExceptionResponsibilityChain.class.getName());
    private ExceptionResponsibilityChain() {

    }

    public static ExceptionResponsibilityChain startChain() {

        return new ExceptionResponsibilityChain();
    }

    private ArrayList<ExceptionLogger> loggers = new ArrayList<>();

    public ExceptionResponsibilityChain addLogger(ExceptionLogger logger) {
        loggers.add(logger);
        return this;
    }

    public void logException(Exception e) {
        for (ExceptionLogger exceptionLogger : loggers) {
            if(exceptionLogger.isResponsible(e)){
                logger.log(Level.WARNING, exceptionLogger.getLogMessage());
                logger.log(Level.WARNING, String.valueOf(exceptionLogger.getExitCode()));
            }
        }
    }
}
