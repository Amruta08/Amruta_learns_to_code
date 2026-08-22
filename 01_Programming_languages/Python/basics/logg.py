import logging
import math
print(dir(logging))


#Create and configure logger
#logging.basicConfig(filename = "E:\\python\\tumberjack.log")
#logging.basicConfig(filename = "E:\\python\\tumberjack.log", level = logging.DEBUG)
logger = logging.getLogger()

#Test the logger
logger.info("Our first message. ")

#print(logger.level)
print(logger.level)