CREATE DATABASE  IF NOT EXISTS `restaurant` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `restaurant`;
-- MySQL dump 10.13  Distrib 5.6.13, for Win32 (x86)
--
-- Host: localhost    Database: restaurant
-- ------------------------------------------------------
-- Server version	5.5.28

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `order`
--

DROP TABLE IF EXISTS `order`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `order` (
  `number` int(11) NOT NULL AUTO_INCREMENT,
  `customer_id` int(11) DEFAULT NULL,
  `bill_no` int(11) DEFAULT NULL,
  `Date` date DEFAULT NULL,
  `Time` time DEFAULT NULL,
  `items` varchar(200) DEFAULT NULL,
  `quantity` int(11) DEFAULT NULL,
  `packing` varchar(45) DEFAULT NULL,
  `status` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`number`)
) ENGINE=InnoDB AUTO_INCREMENT=23 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `order`
--

LOCK TABLES `order` WRITE;
/*!40000 ALTER TABLE `order` DISABLE KEYS */;
INSERT INTO `order` VALUES (1,100001,1,'2014-03-08','01:02:50','TestDish',2,'Done','delivered'),(2,100001,1,'2014-03-08','14:02:50','TestDish1',1,'Done','delivered'),(4,100001,1,'2014-03-09','02:02:11','TestDish2',5,'Packed','not_delivered'),(5,100001,2,'2014-03-09','02:04:46','TestDish2',2,'Not Packed','not_delivered'),(7,100001,3,'2014-03-09','02:45:50','TestDish',3,'Packed','not_delivered'),(8,100001,4,'2014-03-09','03:03:09','TestDish2',1,'Packed','not_delivered'),(9,100001,5,'2014-03-09','04:35:16','TestDish2',5,'Not Packed','not_delivered'),(10,100001,6,'2014-03-09','04:36:18','TestDish2',5,'Not Packed','not_delivered'),(11,100001,7,'2014-03-09','04:42:05','TestDish2',3,'Not Packed','not_delivered'),(12,100001,8,'2014-03-09','05:09:18','TestDish2',3,'Not Packed','not_delivered'),(13,100001,9,'2014-03-09','05:12:06','TestDish2',2,'Not Packed','not_delivered'),(14,100001,10,'2014-03-09','05:14:09','TestDish2',3,'Packed','not_delivered'),(15,100001,11,'2014-03-09','05:19:14','TestDish2',3,'Packed','not_delivered'),(16,100001,12,'2014-03-09','05:22:24','TestDish2',3,'Not Packed','not_delivered'),(17,100001,13,'2014-03-09','06:17:09','TestDish1',2,'Packed','not_delivered'),(18,100001,13,'2014-03-09','06:17:09','TestDish',3,'Packed','not_delivered'),(19,100001,14,'2014-03-09','06:21:02','TestDish',5,'Packed','not_delivered'),(20,100001,14,'2014-03-09','06:21:02','TestDish1',5,'Packed','not_delivered'),(21,100001,15,'2014-03-09','06:38:49','TestDish2',2,'Packed','not_delivered'),(22,100001,16,'2014-03-09','06:42:00','TestDish1',3,'Packed','not_delivered');
/*!40000 ALTER TABLE `order` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2014-03-09  6:46:21
