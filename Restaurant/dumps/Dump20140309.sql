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
-- Table structure for table `bill`
--

DROP TABLE IF EXISTS `bill`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `bill` (
  `idbill` int(11) NOT NULL AUTO_INCREMENT,
  `customerid` int(11) DEFAULT NULL,
  `name` varchar(45) DEFAULT NULL,
  `billnum` int(11) DEFAULT NULL,
  `date` datetime DEFAULT NULL,
  `item` varchar(200) DEFAULT NULL,
  `amount` decimal(11,5) DEFAULT NULL,
  PRIMARY KEY (`idbill`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `bill`
--

LOCK TABLES `bill` WRITE;
/*!40000 ALTER TABLE `bill` DISABLE KEYS */;
INSERT INTO `bill` VALUES (1,100001,'abcd',1,'2014-03-08 20:38:11','abcd',12050.00000);
/*!40000 ALTER TABLE `bill` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `customer_id`
--

DROP TABLE IF EXISTS `customer_id`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `customer_id` (
  `idcustomer_id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(45) DEFAULT NULL,
  `password` varchar(45) DEFAULT NULL,
  `last_visit` datetime DEFAULT NULL,
  `frequency` int(11) DEFAULT NULL,
  `birthdate` date DEFAULT NULL,
  `mobile` int(11) DEFAULT NULL,
  PRIMARY KEY (`idcustomer_id`),
  UNIQUE KEY `idcustomer_id_UNIQUE` (`idcustomer_id`),
  UNIQUE KEY `mobile_UNIQUE` (`mobile`)
) ENGINE=InnoDB AUTO_INCREMENT=100003 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `customer_id`
--

LOCK TABLES `customer_id` WRITE;
/*!40000 ALTER TABLE `customer_id` DISABLE KEYS */;
INSERT INTO `customer_id` VALUES (100001,'TestCustomer1','abcd','2014-03-09 06:42:00',13,'2014-03-20',NULL),(100002,'asasd','121212','2014-03-09 03:07:22',0,'2014-03-09',121212);
/*!40000 ALTER TABLE `customer_id` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `discount`
--

DROP TABLE IF EXISTS `discount`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `discount` (
  `iddiscount` int(11) NOT NULL,
  `name` varchar(45) DEFAULT NULL,
  `number` int(11) DEFAULT NULL,
  `amount` int(11) DEFAULT NULL,
  PRIMARY KEY (`iddiscount`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `discount`
--

LOCK TABLES `discount` WRITE;
/*!40000 ALTER TABLE `discount` DISABLE KEYS */;
INSERT INTO `discount` VALUES (1,'Frequency',5,10),(2,'Birthday',0,5),(3,'VAT',0,13),(4,'Service Tax',0,10),(5,'Packing',0,10);
/*!40000 ALTER TABLE `discount` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `employee`
--

DROP TABLE IF EXISTS `employee`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `employee` (
  `idEmployee` int(11) NOT NULL AUTO_INCREMENT,
  `EmployeeName` varchar(100) DEFAULT NULL,
  `EmployeePost` varchar(100) DEFAULT NULL,
  `EmployeeAddress` varchar(500) DEFAULT NULL,
  `EmployeePay` int(11) DEFAULT NULL,
  `EmployeeNum` int(11) DEFAULT NULL,
  `UserName` varchar(45) DEFAULT NULL,
  `Password` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idEmployee`)
) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `employee`
--

LOCK TABLES `employee` WRITE;
/*!40000 ALTER TABLE `employee` DISABLE KEYS */;
INSERT INTO `employee` VALUES (8,'w','Waiter','wrw',2332,1111111111,'w8','w8'),(9,'saas','Manager','adfasdf',32211,1221221221,'saas9','saas9'),(10,'abdd','Chef','asdasda',12345,1112221122,'abdd10','abdd10'),(11,'asas','Waiter','asasqwq',12222,1212121233,'asas11','asas11'),(12,'sid','Chef','bjihuj',1234,1231231111,'sid12','sid12'),(13,'vvv','Waiter','ghgh',234,1234567890,'vvv13','vvv13');
/*!40000 ALTER TABLE `employee` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `employee_id`
--

DROP TABLE IF EXISTS `employee_id`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `employee_id` (
  `username` varchar(45) NOT NULL,
  `name` varchar(45) DEFAULT NULL,
  `designation` varchar(45) DEFAULT NULL,
  `password` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`username`),
  UNIQUE KEY `username_UNIQUE` (`username`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `employee_id`
--

LOCK TABLES `employee_id` WRITE;
/*!40000 ALTER TABLE `employee_id` DISABLE KEYS */;
INSERT INTO `employee_id` VALUES ('100001','a','Customer','a'),('saas9','saas','Manager','saas9');
/*!40000 ALTER TABLE `employee_id` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `expenses`
--

DROP TABLE IF EXISTS `expenses`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `expenses` (
  `num` int(11) NOT NULL AUTO_INCREMENT,
  `type` varchar(45) DEFAULT NULL,
  `to` varchar(45) DEFAULT NULL,
  `amount` decimal(11,5) DEFAULT NULL,
  `date` datetime DEFAULT NULL,
  PRIMARY KEY (`num`)
) ENGINE=InnoDB AUTO_INCREMENT=23 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `expenses`
--

LOCK TABLES `expenses` WRITE;
/*!40000 ALTER TABLE `expenses` DISABLE KEYS */;
INSERT INTO `expenses` VALUES (11,'Stock Purchase','Paneer',-600.00000,'2014-03-01 18:26:44'),(12,'Stock Purchase','Paneer',-960.00000,'2014-03-01 18:27:44'),(13,'Stock Purchase','Paneer',-360.00000,'2014-03-01 18:29:25'),(14,'Stock Purchase','Paneer',-96.00000,'2014-03-05 20:23:14'),(15,'Stock Purchase','Paneer',-92.00000,'2014-03-05 20:27:46'),(16,'Stock Purchase','Onions',-100.00000,'2014-03-05 20:27:52'),(17,'Salary Payment','w(Waiter)',-2332.00000,'2014-03-05 21:29:58'),(18,'Salary Payment','saas(Manager)',-32211.00000,'2014-03-05 21:29:58'),(19,'Stock Purchase','Potato',-400.00000,'2014-03-06 14:32:22'),(20,'Stock Purchase','Potato',-400.00000,'2014-03-06 14:32:37'),(21,'Stock Purchase','abcd',-144.00000,'2014-03-08 16:24:40'),(22,'Stock Purchase','Chicken',-96.00000,'2014-03-08 20:41:31');
/*!40000 ALTER TABLE `expenses` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `menu`
--

DROP TABLE IF EXISTS `menu`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `menu` (
  `idItem` int(11) NOT NULL AUTO_INCREMENT,
  `itemName` varchar(45) DEFAULT NULL,
  `itemDesc` varchar(200) DEFAULT NULL,
  `itemPrice` decimal(11,5) DEFAULT NULL,
  `item_Type` varchar(45) DEFAULT NULL,
  `itemIng` varchar(200) DEFAULT NULL,
  `basicCost` decimal(11,5) DEFAULT NULL,
  PRIMARY KEY (`idItem`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `menu`
--

LOCK TABLES `menu` WRITE;
/*!40000 ALTER TABLE `menu` DISABLE KEYS */;
INSERT INTO `menu` VALUES (4,'TestDish','Delicious',200.00000,'Main Course','Chicken(1.2),Potato(2.2)',126.40000),(5,'TestDish1','Tasty',150.30000,'Main Course','Onions(1.2),Chillies(2.2)',100.00000),(6,'TestDish2','Wow',150.30000,'Starters','Paneer(2),Potato(1)',120.00000);
/*!40000 ALTER TABLE `menu` ENABLE KEYS */;
UNLOCK TABLES;

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

--
-- Table structure for table `stock`
--

DROP TABLE IF EXISTS `stock`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stock` (
  `itemCode` int(11) NOT NULL AUTO_INCREMENT,
  `itemName` varchar(100) DEFAULT NULL,
  `itemRem` decimal(11,5) DEFAULT '0.00000',
  `itemUsed` decimal(11,5) DEFAULT '0.00000',
  `totalUsed` decimal(11,5) DEFAULT NULL,
  `pricePer` decimal(11,5) DEFAULT NULL,
  PRIMARY KEY (`itemCode`),
  UNIQUE KEY `itemCode_UNIQUE` (`itemCode`)
) ENGINE=InnoDB AUTO_INCREMENT=13 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stock`
--

LOCK TABLES `stock` WRITE;
/*!40000 ALTER TABLE `stock` DISABLE KEYS */;
INSERT INTO `stock` VALUES (1,'Chicken',121.80000,41.20000,41.20000,32.00000),(2,'Onions',8.00000,42.00000,42.00000,10.00000),(3,'Tomato',15.00000,25.00000,25.00000,20.00000),(5,'Potato',1.80000,14.20000,14.20000,40.00000),(6,'Chillies',18.00000,22.00000,22.00000,40.00000),(7,'Paneer',0.70000,4.00000,4.00000,40.00000),(11,'Salt',10.00000,0.00000,0.00000,10.00000),(12,'abcd',12.00000,0.00000,0.00000,12.00000);
/*!40000 ALTER TABLE `stock` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2014-03-09  6:46:32
