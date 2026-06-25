#include <filesystem>
#include <format>
#include "zlog.h"

// Test file

int main(){
    Zlog logger("test.log");
    logger.log("omg a simple log ", 3);
    logger.log("omg a simplier log");
    for(int i = 0; i < 1000; i++){
        logger.log("i = {}", i);
    }
    logger.warn("OMG THAT CAN HAPPEN");
    logger.warn("The {} Tried to fail {} Times", "system", 3);
    logger.err("DAMN THAT SHOULDNT HAPPEN");
    logger.err("OMG {0} failed {1} {0} Time", "system", 1);
    logger.debug("nyanbug");
    logger.debug("nyanbug number {}", 1);
    logger.info("This code workds");
    logger.info("This code {} works", "kinda?");
}