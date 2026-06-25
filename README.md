# Zlog

Header only light and simple logger using the C++23 print functions.

## Features

- Fast enough file logging.
- Easy to use.
- Simple log types (WARN, ERRO, INFO, ZLOG, DEBG).

## Usage example

```c++
    logger.log("simple log");
    for(int i = 0; i < 1000; i++){
        logger.log("i = {}", i);
    }
    logger.warn("OMG THAT CAN HAPPEN");
    logger.err("DAMN THAT SHOULDNT HAPPEN");
    logger.debug("nyanbug");
    logger.info("This code {} works", "kinda?");
```

## Objective

Be as simple as possible to be use in future projects.