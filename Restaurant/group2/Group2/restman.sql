-- phpMyAdmin SQL Dump
-- version 3.3.9
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Mar 11, 2013 at 02:13 PM
-- Server version: 5.5.8
-- PHP Version: 5.3.5

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `restman`
--
CREATE DATABASE `restman` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `restman`;

-- --------------------------------------------------------

--
-- Table structure for table `bengali`
--

CREATE TABLE IF NOT EXISTS `bengali` (
  `name` varchar(100) NOT NULL DEFAULT '',
  `price` int(10) NOT NULL,
  `type` varchar(100) NOT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `bengali`
--

INSERT INTO `bengali` (`name`, `price`, `type`) VALUES
('Aloo Morich', 100, 'Vegetarian Starters'),
('Aloo Poshto', 100, 'bvwegies'),
('Alu Bhaja', 45, 'bvwegies'),
('Alur Dom', 75, 'bvwegies'),
('Assam', 50, 'Hot Beverage Menu'),
('Beguni.', 55, 'Vegetarian Starters'),
('Chanar Chop (Vegetarian)', 75, 'Vegetarian Starters'),
('Channa Dalna', 125, 'bvwegies'),
('Chick Pea Salad', 90, 'Salads '),
('Chicken Roll', 100, 'Calcutta Kathi Rolls'),
('Chicken Roll with Egg', 120, 'Calcutta Kathi Rolls'),
('Chicken/Mutton Khichudi', 150, 'Rice Specialities '),
('Coffee with milk', 65, 'Hot Beverage Menu'),
('Cucumber and Black Olive Salad', 90, 'Salads '),
('Darjeeling', 50, 'Hot Beverage Menu'),
('Earl Grey', 50, 'Hot Beverage Menu'),
('Egg Roll', 90, 'Calcutta Kathi Rolls'),
('Espresso', 65, 'Hot Beverage Menu'),
('Fish Chop', 150, 'Non-Vegetarian Starters'),
('Fish Finger', 225, 'Non-Vegetarian Starters'),
('Fish Fry', 250, 'Non-Vegetarian Starters'),
('Fish Roll', 120, 'Calcutta Kathi Rolls'),
('Just Chai', 50, 'Hot Beverage Menu'),
('Kesaria', 50, 'Hot Beverage Menu'),
('Koraisutir (Peas) Kochuri (4 nos)', 60, 'Breads'),
('Kosha Mangsho with Luchi or Pulau', 175, 'House Specials'),
('Laccha Parantha ', 30, 'Breads'),
('Lebu Chaa', 30, 'Hot Beverage Menu'),
('Likar Cha', 30, 'Hot Beverage Menu'),
('Luchi (Bengali Puris) (4 nos)', 70, 'Breads'),
('Mangsher Ghugni (Mutton Ghugni)', 100, 'Non-Vegetarian Starters'),
('Mixed Vegetable Roll', 90, 'Calcutta Kathi Rolls'),
('Mughlai Parantha (1 nos)', 75, 'Breads'),
('Mushroom and Cheese Roll', 90, 'Calcutta Kathi Rolls'),
('Mutton Roll', 120, 'Calcutta Kathi Rolls'),
('Mutton Roll with Egg', 140, 'Calcutta Kathi Rolls'),
('Mutton/Chicken Chop', 150, 'Non-Vegetarian Starters'),
('nfusion', 65, 'Hot Beverage Menu'),
('Omelette (Cheese/Mutton/ Chicken)', 55, 'Non-Vegetarian Starters'),
('Pakora (Egg)', 90, 'Non-Vegetarian Starters'),
('Peas Kochuri/Luchi Aloor Dom', 100, 'House Specials'),
('Piyaji', 55, 'Vegetarian Starters'),
('Potato Roll', 75, 'Calcutta Kathi Rolls'),
('Potatoes and Egg Salad ', 90, 'Salads '),
('Saagh of the Day (Seasonal).', 75, 'bvwegies'),
('Sadharon Ghugni.', 75, 'Vegetarian Starters'),
('Steamed Rice', 150, 'Rice Specialities '),
('Sukto', 100, 'bvwegies'),
('The Lavish Bengali Non Vegetarian Thali', 180, 'Bengali Non-Vegetarian Thali'),
('The Lavish Bengali Vegetarian Thali', 130, 'Bengali Vegetarian Thali'),
('The Scrumptious Bengali Non Vegetarian Thali', 160, 'Bengali Non-Vegetarian Thali'),
('The Scrumptious Bengali Vegetarian Thali', 130, 'Bengali Vegetarian Thali'),
('Traingle Parantha served with Ghoogni', 90, 'House Specials'),
('Traingle Parantha served with Kosha Mangsho', 175, 'House Specials'),
('Traingle Parantha served with Omlette and Alu Bhaja/Alur Tarkari (Jhol)', 90, 'House Specials'),
('Triangle Parantha', 40, 'Breads'),
('Veg of the Day (Seasonal)', 100, 'bvwegies'),
('Vegetable Chop', 45, 'Vegetarian Starters');

-- --------------------------------------------------------

--
-- Table structure for table `chinese`
--

CREATE TABLE IF NOT EXISTS `chinese` (
  `name` varchar(100) NOT NULL DEFAULT '',
  `price` int(10) DEFAULT NULL,
  `type` varchar(100) NOT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `chinese`
--

INSERT INTO `chinese` (`name`, `price`, `type`) VALUES
('Basil and Berry Spritzer ', 70, 'BEVERAGES '),
('BBQ SPARE RIBS', 110, 'APPETIZERS'),
('beef with cashew nuts  ', 150, 'BEEF AND PORK'),
('Beef with green onions, Mongolian style  ', 130, 'BEEF AND PORK'),
('beef with mushroom and Bamboo  ', 160, 'BEEF AND PORK'),
('beef with snow peas  ', 150, 'BEEF AND PORK'),
('Braised beef in hot broth ', 250, 'BEEF AND PORK'),
('Braised fish fillet in the hot broth', 215, 'SEAFOOD'),
('Brownie with Ice Cream ', 95, 'DESSERTS'),
('Buddha Lobster Feast with Choice of Sauce', 235, 'SEAFOOD'),
('cheese cake  ', 100, 'DESSERTS'),
('Cheesy Mushrooms Dimsum', 170, 'DIMSUM(Veg.)'),
('chengdo jumble shrimp', 260, 'SEAFOOD'),
('Chichen Fried Dumplings', 240, 'DIMSUM(Non Veg.)'),
('Chichen Pan Fried Noodles ', 200, 'RICE & NOODLES'),
('CHICKEN CHOW FOON ', 200, 'RICE & NOODLES'),
('CHICKEN CHOW MEIN(WITH CRISPY NOODLES) ', 365, 'CHICKEN and DUCK'),
('Chicken Dimsum', 220, 'DIMSUM(Non Veg.)'),
('Chicken Fried Rice ', 265, 'RICE & NOODLES'),
('Chicken Hakka Noodles ', 280, 'RICE & NOODLES'),
('Chicken Lolly Pop', 160, 'APPETIZERS'),
('Chicken Manchow Soup', 180, 'SOUPS'),
('Chicken Pan Fried Dumplings', 250, 'DIMSUM(Non Veg.)'),
('Chicken Satay', 170, 'APPETIZERS'),
('Chicken Schezwan Dimsum', 200, 'DIMSUM(Non Veg.)'),
('Chicken Talumein Soup', 180, 'SOUPS'),
('CHICKEN WITH BLACK BEAN SAUCE ', 300, 'CHICKEN and DUCK'),
('chicken with corn soup', 150, 'SOUPS'),
('Chilly Chicken', 265, 'CHICKEN and DUCK'),
('Chilly Chicken Bao', 220, 'DIMSUM(Non Veg.)'),
('Chilly Chicken Dry', 180, 'APPETIZERS'),
('Chilly Garlic Chicken Noodles ', 295, 'RICE & NOODLES'),
('Chilly Garlic Chicken Winglets', 160, 'APPETIZERS'),
('Chilly Garlic Noodles ', 165, 'RICE & NOODLES'),
('Chilly Lamb Double Fried', 150, 'APPETIZERS'),
('Chilly Paneer Bao', 140, 'DIMSUM(Veg.)'),
('Chimi Changa Roll', 90, 'APPETIZERS'),
('Choice of Ice Cream ', 60, 'DESSERTS'),
('chongqing chicken ', 395, 'CHICKEN and DUCK'),
('Classic Mojito', 60, 'BEVERAGES '),
('Clear soup with green leaves', 100, 'SOUPS'),
('cold bean noodles in hot sauce  ', 90, 'APPETIZERS'),
('cold sesame noodles ', 80, 'APPETIZERS'),
('COMBINATION (HOUSE) CHOW MEIN (WITH SOFT NOODLES) ', 150, 'RICE & NOODLES'),
('COMBINATION (HOUSE) FRIED RICE ', 150, 'RICE & NOODLES'),
('COMBINATION (HOUSE) LO MEIN ', 150, 'RICE & NOODLES'),
('Corn, Peas and Mushroom in Malha Clay Pot', 170, 'VEGETABLES'),
('Crispy boneless whole fish with pine nuts', 225, 'SEAFOOD'),
('Crispy Honey Chicken ', 260, 'CHICKEN and DUCK'),
('Crispy Spinach Baby Corn Pepper Salt', 100, 'APPETIZERS'),
('Devil Chocolate Bulls Eye  ', 80, 'DESSERTS'),
('Diced Chicken in Hong Kong Sauce ', 220, 'CHICKEN and DUCK'),
('Diced Chicken Stir Fry in Hot Garlic Sauce ', 275, 'CHICKEN and DUCK'),
('double suteed sliced pork ', 200, 'BEEF AND PORK'),
('Drums of Heaven', 180, 'APPETIZERS'),
('dry sauteed green beans', 190, 'VEGETABLES'),
('EGG DROP SOUP', 150, 'SOUPS'),
('EGG ROLL', 120, 'APPETIZERS'),
('EGGPLANT IN GARLIC SAUCE', 190, 'VEGETABLES'),
('Exotic Vegies in Black Bean Sauce', 140, 'VEGETABLES'),
('Fish Chendu', 170, 'APPETIZERS'),
('Fish in Soya Sauce and Rice Wine', 280, 'SEAFOOD'),
('five-spicy noodle soup', 150, 'APPETIZERS'),
('Fresh Green with Black Mushroom', 110, 'VEGETABLES'),
('Fresh Lime Soda', 40, 'BEVERAGES '),
('Fresh Tofu in Hunan Sauce', 180, 'VEGETABLES'),
('Fresh Tofu with Black Bean On Bed of Crispy Spinach', 120, 'APPETIZERS'),
('Garden Vegetable', 120, 'VEGETABLES'),
('GENERAL TSO CHICKEN ', 350, 'CHICKEN and DUCK'),
('German Apple Struddle  ', 80, 'DESSERTS'),
('ginger shrimp', 220, 'SEAFOOD'),
('home style beef noodle soup', 90, 'APPETIZERS'),
('Honey Chilly Potato', 80, 'APPETIZERS'),
('hot and sour noodles', 100, 'APPETIZERS'),
('hot and sour silk tofu', 110, 'APPETIZERS'),
('HOT and SOUR SOUP', 130, 'SOUPS'),
('Iced Tea Peach or Lemon', 60, 'BEVERAGES '),
('King Lamb Ribs', 140, 'APPETIZERS'),
('King Prawn in Hot Bean Sauce', 250, 'SEAFOOD'),
('King Prawn Tepenyaki', 250, 'SEAFOOD'),
('King Prawn Thai Red Curry', 280, 'SEAFOOD'),
('King Prawn with Black Mushroom', 230, 'SEAFOOD'),
('King Prawns Salt and Pepper', 140, 'APPETIZERS'),
('King Prawns Singtu', 180, 'APPETIZERS'),
('KUNG PAO CHICKEN ', 315, 'CHICKEN and DUCK'),
('Legendary Chicken Malha Sizzler ', 240, 'CHICKEN and DUCK'),
('Legendary Exotic Veg Malha Sizzler', 140, 'VEGETABLES'),
('LEMON CHICKEN ', 320, 'CHICKEN and DUCK'),
('Litchi Sling', 75, 'BEVERAGES '),
('Litchi with Vanilla Ice Cream ', 80, 'DESSERTS'),
('MA PO (HUNAN) TOFU', 160, 'VEGETABLES');

-- --------------------------------------------------------

--
-- Table structure for table `general`
--

CREATE TABLE IF NOT EXISTS `general` (
  `name` varchar(100) NOT NULL DEFAULT '',
  `price` int(20) DEFAULT NULL,
  `type` varchar(100) NOT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `general`
--

INSERT INTO `general` (`name`, `price`, `type`) VALUES
('Beer', 80, 'alcohol'),
('Grasshopper', 300, 'alcohol'),
('Rum', 150, 'alcohol'),
('Veg. Burger', 40, 'burger'),
('Veg. Pizza', 80, 'pizza'),
('Veg. Roll', 50, 'rolls');

-- --------------------------------------------------------

--
-- Table structure for table `italian`
--

CREATE TABLE IF NOT EXISTS `italian` (
  `name` varchar(100) NOT NULL DEFAULT '',
  `price` int(10) NOT NULL,
  `type` varchar(100) NOT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `italian`
--

INSERT INTO `italian` (`name`, `price`, `type`) VALUES
('Antipasto Del Conte Di Villalba', 375, 'STARTERS'),
('Arabesca Salad', 295, 'SALADS'),
('Asparagi Fulminati', 370, 'PASTAS'),
('Assorted Platter', 235, 'STARTERS'),
('Baby Corn Longs', 195, 'STARTERS'),
('Beans Tacos', 215, 'STARTERS'),
('Bellassai Pizza', 340, 'PIZZAS'),
('Biancaneve Pizza', 265, 'PIZZAS'),
('Boscaiola', 335, 'PASTAS'),
('Bouritos', 255, 'STARTERS'),
('Bruschetta', 225, 'STARTERS'),
('Butter Scotch', 60, 'ICE CREAMS/KULFI'),
('Calabrese Pizza', 390, 'PIZZAS'),
('Caprese', 270, 'STARTERS'),
('Capricciosa Pizza', 380, 'PIZZAS'),
('Ceasar Salad', 305, 'SALADS'),
('Cheese Cake', 215, 'DESSERTS'),
('Cheese Corn Balls', 195, 'STARTERS'),
('Cheese Fondue', 480, 'STARTERS'),
('Cheese Quesadillas', 230, 'STARTERS'),
('Chimichanga', 295, 'SPECIALS'),
('Choco Nut Pancake', 255, 'DESSERTS'),
('Chocolate', 60, 'ICE CREAMS/KULFI'),
('Chocolate Mousse', 255, 'DESSERTS'),
('Coleslaw', 185, 'SALADS'),
('Contadina Salad', 280, 'SALADS'),
('Corleone Salad', 300, 'SALADS'),
('Cream Caramel', 255, 'DESSERTS'),
('Cream Roasted Garlic And Cheese', 260, 'STARTERS'),
('Creamed Corn, Capsicum And Cheese', 260, 'STARTERS'),
('Crema Di Funghi Soup', 160, 'SOUP'),
('Crespelle', 375, 'PASTAS'),
('Crocchette Patate E Funghi', 375, 'PASTAS'),
('Crocchette Spinaci E Ricotta(', 375, 'PASTAS'),
('Crostini Alla Ragusana', 260, 'STARTERS'),
('Crostini Assortiti', 315, 'STARTERS'),
('Della Casa', 375, 'PASTAS'),
('Enchiladas With Beans', 295, 'MEALS'),
('Enchiladas With Corns', 295, 'MEALS'),
('Enchiladas With Mushrooms', 295, 'MEALS'),
('Exotica Pizza', 360, 'PIZZAS'),
('Fantasia Pizza', 415, 'PIZZAS'),
('Fresh Fruit Kulfi(Seasonal)', 75, 'ICE CREAMS/KULFI'),
('Fresh fruit salad with ice-cream', 75, 'ICE CREAMS/KULFI'),
('Funghi Alla Pizzaiola', 305, 'PASTAS'),
('Funghi Alla Trapanese', 280, 'STARTERS'),
('Funghi Trifolati', 245, 'STARTERS'),
('Garlic Bread', 105, 'STARTERS'),
('Gelato Attlantide', 255, 'DESSERTS'),
('Gelato Del Mere', 255, 'DESSERTS'),
('Gnocco', 375, 'PASTAS'),
('Gustosa Pizza', 380, 'PIZZAS'),
('Herbs Garlic Bread', 130, 'STARTERS'),
('Hiblea Pizza', 380, 'PIZZAS'),
('Insalata Calabrese', 295, 'SALADS'),
('Insalata Di Monti Iblei Salad', 300, 'SALADS'),
('Insalata Di Zeus', 320, 'SALADS'),
('Insalata Gennarino Salad', 295, 'SALADS'),
('Insalata Mista Salad', 295, 'SALADS'),
('Jalapeno Salsa', 305, 'STARTERS'),
('Kaju Kismis', 60, 'ICE CREAMS/KULFI'),
('Kesar Pista Kulfi', 60, 'ICE CREAMS/KULFI'),
('Lasagne Alla Gypsy', 375, 'PASTAS'),
('Lasagne Alla Napoletana', 375, 'PASTAS'),
('Lasagne Alla Verdure', 370, 'PASTAS'),
('Lentil And Spinach Soup', 185, 'SOUP'),
('Malai kulfi', 60, 'ICE CREAMS/KULFI'),
('Mango', 60, 'ICE CREAMS/KULFI'),
('Margherita Pizza', 380, 'PIZZAS'),
('Masala Garlic Bread', 205, 'STARTERS'),
('Masala Mafia', 90, 'PASTAS'),
('Matriciana', 375, 'PASTAS'),
('Mediterranean Pizza', 360, 'PIZZAS'),
('Melanzane Alla Parmigiana', 345, 'PASTAS'),
('Melanzane Arrosto', 245, 'STARTERS'),
('Mexican Delite', 260, 'STARTERS'),
('Mexican Rice', 295, 'STARTERS'),
('Mexican Salad', 190, 'SALADS'),
('Mexicana Pizza', 380, 'PIZZAS'),
('Milk Chocolate', 60, 'ICE CREAMS/KULFI'),
('Mineral Water', 100, 'DRINKING WATER'),
('Minestrone Soup', 160, 'SOUP'),
('Mozzafiato Pizza', 310, 'PIZZAS'),
('Nachos With Refried Beans And Cheese', 240, 'STARTERS'),
('Napoletana Pizza', 380, 'PIZZAS'),
('Nitin italino', 800, 'STARTERS'),
('Normal water ', 0, 'DRINKING WATER'),
('Onion Rings', 195, 'STARTERS'),
('Ortolana Pizza', 380, 'PIZZAS'),
('Oven Roasted Garlic Bread Slice', 160, 'STARTERS');

-- --------------------------------------------------------

--
-- Table structure for table `maharashtrian`
--

CREATE TABLE IF NOT EXISTS `maharashtrian` (
  `name` varchar(100) NOT NULL DEFAULT '',
  `price` int(10) DEFAULT NULL,
  `type` varchar(100) NOT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `maharashtrian`
--

INSERT INTO `maharashtrian` (`name`, `price`, `type`) VALUES
('Aaloo Mutur (Green Peas)', 80, 'LUNCH AND DINNER'),
('Aldayala bhaji', 145, 'BHAAJI(Non-Veg)'),
('Ambole/Pole', 40, 'CHAPATI'),
('ANdyachi Burji', 140, 'BHAAJI(Non-Veg)'),
('Batata (Ambat)', 80, 'BHAAJI'),
('Batata (Suki)', 75, 'BHAAJI'),
('Batata Dry Bhaji', 90, 'LUNCH AND DINNER'),
('Batata Vada', 30, 'SNACKS / APPETIZER'),
('Batatache Kaapa', 35, 'SNACKS / APPETIZER'),
('Besan Ladoo', 65, 'DESSERTS(GOD)'),
('Bhakari', 30, 'CHAPATI'),
('Bhakri (1 Piece)', 20, 'LUNCH AND DINNER'),
('Bharli Vangi', 100, 'BHAAJI'),
('Bhat (Rice)', 120, 'LUNCH AND DINNER'),
('Bhendi', 80, 'BHAAJI'),
('Bhendi Masala', 100, 'BHAAJI'),
('Bhopalyacha soup ', 80, 'SOUP(Veg.)'),
('Bhoplyachi Koshimbir', 65, 'CHATNI / KOSHIMBIR(Sides)'),
('Bread Patice', 60, 'BHAAJI'),
('Butter Scotch ', 65, 'ICE CREAMS/KULFI'),
('Cauliflower Bhaji', 80, 'LUNCH AND DINNER'),
('Chana Daal Chatni', 80, 'CHATNI / KOSHIMBIR(Sides)'),
('Chapati', 20, 'CHAPATI'),
('Chavli', 125, 'USALI'),
('Chivda', 45, 'SNACKS / APPETIZER'),
('Chocolate ', 65, 'ICE CREAMS/KULFI'),
('Chocolate Milk Shake ', 75, 'BEVERAGE'),
('Cold Coffee ', 60, 'BEVERAGE'),
('Cold Coffee With Ice-cream ', 75, 'BEVERAGE'),
('Cold Drinks ', 35, 'BEVERAGE'),
('Cream of Tomato ', 80, 'SOUP(Veg.)'),
('Cream Of Veg Soup ', 80, 'SOUP(Veg.)'),
('Dadhimbi usal', 80, 'LUNCH AND DINNER'),
('Dahi Vada', 55, 'SNACKS / APPETIZER'),
('Dahi-Boodi', 75, 'CHATNI / KOSHIMBIR(Sides)'),
('Dal', 100, 'LUNCH AND DINNER'),
('Dal Rice', 100, 'LUNCH AND DINNER'),
('Dudhee', 80, 'BHAAJI'),
('Dudhi Halwa', 60, 'DESSERTS(GOD)'),
('Egg Biryani (Non-Veg)', 220, 'BHAAT'),
('Elanner ', 45, 'BEVERAGE'),
('Flower (Vatane/Batata)', 90, 'BHAAJI'),
('Fresh Fruit Juice ', 70, 'BEVERAGE'),
('Fresh Fruit Kulfi(Seasonal) ', 75, 'ICE CREAMS/KULFI'),
('Fresh fruit salad with ice-cream  ', 75, 'ICE CREAMS/KULFI'),
('Fresh Lime Soda(Sweet/Salted/Mix) ', 45, 'BEVERAGE'),
('Fruit Salad', 75, 'DESSERTS(GOD)'),
('Gajar Halwa', 60, 'DESSERTS(GOD)'),
('Gajar-Mulyachi Koshimbir', 70, 'CHATNI / KOSHIMBIR(Sides)'),
('Green Peas Spinach Soup ', 80, 'SOUP(Veg.)'),
('Gul Poli', 40, 'DESSERTS(GOD)'),
('Gulab Jamun', 60, 'DESSERTS(GOD)'),
('Jeera Bhaat', 160, 'BHAAT'),
('Kadhi', 80, 'LUNCH AND DINNER'),
('Kaju Kismis ', 60, 'ICE CREAMS/KULFI'),
('Kakdichi Koshimbir', 60, 'CHATNI / KOSHIMBIR(Sides)'),
('Kalva Masala', 180, 'BHAAJI(Non-Veg)'),
('Kanda Bhaji', 80, 'BHAAJI'),
('Kanda-Tomatochi Koshimbir', 75, 'CHATNI / KOSHIMBIR(Sides)'),
('Kande Pohe', 45, 'SNACKS / APPETIZER'),
('Karli', 80, 'BHAAJI'),
('Katachi Aamti', 100, 'AAMTI/ KADHI'),
('Kesar Pista Kulfi ', 65, 'ICE CREAMS/KULFI'),
('Khamang Kakadi ', 60, 'SALADS'),
('Khichdi', 100, 'LUNCH AND DINNER'),
('Khichdi Kadi', 75, 'LUNCH AND DINNER'),
('Khobryachi Chatni', 80, 'CHATNI / KOSHIMBIR(Sides)'),
('Kobi (Vatane/Batata)', 80, 'BHAAJI'),
('Kobi Bhaji (Cabbage)', 80, 'LUNCH AND DINNER'),
('Kolambi Masala', 180, 'BHAAJI(Non-Veg)'),
('Kolambi Pulav (Non-Veg)', 200, 'BHAAT'),
('Kombdi Biryani (Non-Veg)', 220, 'BHAAT'),
('Kombdi Masala', 150, 'BHAAJI(Non-Veg)'),
('Kothimbir Vadi', 55, 'SNACKS / APPETIZER'),
('Lasoon Chatni', 60, 'CHATNI / KOSHIMBIR(Sides)'),
('Lassi(Sweet/Salted/Mango/Vanilla) ', 65, 'BEVERAGE'),
('Lasun Chutney ', 40, 'ACCOMPANIMENTS'),
('Malai kulfi ', 60, 'ICE CREAMS/KULFI'),
('Mango Milk Shake ', 75, 'BEVERAGE'),
('Masale Bhaat', 180, 'BHAAT'),
('Masoor', 125, 'USALI'),
('Masoor Daal', 115, 'AAMTI/ KADHI'),
('Matki', 125, 'USALI'),
('Matthaa', 55, 'WELCOME DRINK'),
('Methi Daal', 125, 'AAMTI/ KADHI'),
('Milk Chocolate ', 60, 'ICE CREAMS/KULFI'),
('Mineral Water', 100, 'DRINKING WATER'),
('Mix Greea Salad ', 60, 'SALADS'),
('Mix Veg, Raita ', 60, 'SALADS'),
('Mixed Bhaaji', 100, 'BHAAJI'),
('Mixed Bhaji', 40, 'SNACKS / APPETIZER');

-- --------------------------------------------------------

--
-- Table structure for table `phasedecide`
--

CREATE TABLE IF NOT EXISTS `phasedecide` (
  `installation` int(1) NOT NULL DEFAULT '0',
  `superuser` int(1) NOT NULL DEFAULT '0',
  `tablesavailable` int(100) NOT NULL DEFAULT '0',
  `customernoday` int(100) NOT NULL DEFAULT '1',
  PRIMARY KEY (`installation`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `phasedecide`
--

INSERT INTO `phasedecide` (`installation`, `superuser`, `tablesavailable`, `customernoday`) VALUES
(0, 0, 25, 1);

-- --------------------------------------------------------

--
-- Table structure for table `punjabi`
--

CREATE TABLE IF NOT EXISTS `punjabi` (
  `name` varchar(100) NOT NULL DEFAULT '',
  `price` int(10) DEFAULT NULL,
  `type` varchar(100) NOT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `punjabi`
--

INSERT INTO `punjabi` (`name`, `price`, `type`) VALUES
('Ambi panne di kulfi ', 80, 'DESSERT'),
('Amritsari machchi ', 275, 'BAR-BE QUE(Non-Veg.)'),
('Amritsari murga pindiwala', 175, 'BAR-BE QUE(Non-Veg.)'),
('Bharwaan Aloo Pothohari ', 150, 'BAR-BE QUE(Veg.)'),
('Bharwaan Kesari Guchchi ', 300, 'CURRIES(Veg.)'),
('Bhutteyan Da Kebab ', 150, 'BAR-BE QUE(Veg.)'),
('brain fry', 185, 'FROM THE FRYING PAN'),
('butter nan ', 40, 'ROTI/NAN/PARATHA'),
('butter roti', 20, 'ROTI/NAN/PARATHA'),
('Cheese alu tikki ', 175, 'FROM THE FRYING PAN'),
('chicken adraki kabab ', 200, 'FROM THE CLAY OVEN '),
('chicken haryani kabab ', 200, 'FROM THE CLAY OVEN '),
('chicken kesari methi kabab ', 200, 'FROM THE CLAY OVEN '),
('Chicken Kurkuri ', 175, 'BAR-BE QUE(Non-Veg.)'),
('chicken peshwari kabab ', 200, 'FROM THE CLAY OVEN '),
('chicken soup ', 80, 'SOUP'),
('chicken tandoori ', 300, 'FROM THE CLAY OVEN '),
('chicken tikka', 200, 'FROM THE CLAY OVEN '),
('chura paratha ', 35, 'ROTI/NAN/PARATHA'),
('corn seekh kabab ', 200, 'FROM THE CLAY OVEN '),
('Daal Panjratni ', 150, 'CURRIES(Veg.)'),
('Daal Puniab Grill ', 160, 'CURRIES(Veg.)'),
('Dahi De Kebab ', 150, 'BAR-BE QUE(Veg.)'),
('Dum ki Biryani(Chicken/Mutton) ', 250, 'CHAAWAL'),
('fish finger ', 300, 'FROM THE FRYING PAN'),
('fish koliwada', 320, 'FROM THE FRYING PAN'),
('Fruit platter', 80, 'DESSERT'),
('Guchchi Pulao ', 275, 'CHAAWAL'),
('Gulab Jamun ', 80, 'DESSERT'),
('hara bhara kabab ', 175, 'FROM THE FRYING PAN'),
('kabuli nan', 50, 'ROTI/NAN/PARATHA'),
('Kadhai Paneer Patialashani ', 160, 'CURRIES(Veg.)'),
('Kesar-Postetwali Lussee Pedhe De Naal', 70, 'APERITIF'),
('khasta roti', 25, 'ROTI/NAN/PARATHA'),
('kheema paratha / nan ', 90, 'ROTI/NAN/PARATHA'),
('Kheer ', 80, 'DESSERT'),
('Kulfi Falooda ', 80, 'DESSERT'),
('Kurkuri', 160, 'BAR-BE QUE(Veg.)'),
('lacha paratha ', 35, 'ROTI/NAN/PARATHA'),
('Lahori Aloo  ', 150, 'CURRIES(Veg.)'),
('Lahori Seekh Kebab ', 150, 'BAR-BE QUE(Veg.)'),
('makai ki roti ', 25, 'ROTI/NAN/PARATHA'),
('Malai Kofta Amritsari ', 160, 'CURRIES(Veg.)'),
('Masaledaar bhindee ', 150, 'CURRIES(Veg.)'),
('Mattha ', 60, 'APERITIF'),
('Mausam da ras(Seasonal fruit juices)', 50, 'APERITIF'),
('methi paratha ', 35, 'ROTI/NAN/PARATHA'),
('Murgh Badami Shorba ', 60, 'APERITIF'),
('Murgh Malai tikka ', 175, 'BAR-BE QUE(Non-Veg.)'),
('Murgh Tikka Punjab Grill ', 175, 'BAR-BE QUE(Non-Veg.)'),
('mushroom lazeez ', 220, 'FROM THE CLAY OVEN '),
('mushroom soup ', 80, 'SOUP'),
('mushroom tandoori ', 175, 'FROM THE CLAY OVEN '),
('nan', 30, 'ROTI/NAN/PARATHA'),
('palak paneer seekh kabab ', 185, 'FROM THE CLAY OVEN '),
('Palak soup ', 80, 'SOUP'),
('paneer chilli ', 200, 'FROM THE FRYING PAN'),
('Paneer Makhani ', 160, 'CURRIES(Veg.)'),
('paneer tikka  ', 160, 'FROM THE CLAY OVEN '),
('paneer tikka methi ', 160, 'FROM THE CLAY OVEN '),
('Paneer Tikka Multani ', 180, 'BAR-BE QUE(Veg.)'),
('Phirni ', 80, 'DESSERT'),
('pindi channa ', 150, 'CURRIES(Veg.)'),
('prawns koliwada ', 300, 'FROM THE FRYING PAN'),
('pudina paratha ', 35, 'ROTI/NAN/PARATHA'),
('Raan hari Singh Nalwa ', 300, 'BAR-BE QUE(Non-Veg.)'),
('Raita ', 60, 'DAHI'),
('Rasmalai ', 80, 'DESSERT'),
('reshmi kabab ', 200, 'FROM THE CLAY OVEN '),
('roomali roti ', 40, 'ROTI/NAN/PARATHA'),
('Roti ', 15, 'ROTI/NAN/PARATHA'),
('roti ki tokri', 150, 'ROTI/NAN/PARATHA'),
('Salmon Tikka ', 375, 'BAR-BE QUE(Non-Veg.)'),
('Sarson da Saag ', 160, 'CURRIES(Veg.)'),
('Shahi Paneer Ranjitsinghji ', 160, 'CURRIES(Veg.)'),
('shammi kabab ', 185, 'FROM THE FRYING PAN'),
('Shikanjvi', 50, 'APERITIF'),
('Steamed Rice ', 90, 'CHAAWAL'),
('Subz di khaam khatai(Veg Galouti) ', 150, 'BAR-BE QUE(Veg.)'),
('Tamatar Da Shorba ', 60, 'APERITIF'),
('Tandoori Broccoli ', 150, 'BAR-BE QUE(Veg.)'),
('Tandoori Duck  ', 400, 'BAR-BE QUE(Non-Veg.)'),
('Tandoori Jheenga ', 275, 'BAR-BE QUE(Non-Veg.)'),
('Tandoori Murgh ', 175, 'BAR-BE QUE(Non-Veg.)'),
('tandoori platter(Veg.) ', 400, 'FROM THE CLAY OVEN '),
('tangadi kabab ', 210, 'FROM THE CLAY OVEN '),
('Tarhkeywala dahi ', 60, 'DAHI'),
('Tarkari Kesari Biryani ', 175, 'CHAAWAL'),
('Tomato soup  ', 80, 'SOUP'),
('Veg Platter ', 250, 'BAR-BE QUE(Veg.)'),
('veg. stuff paratha / nan ', 60, 'ROTI/NAN/PARATHA'),
('vegetable seekh kabab ', 175, 'FROM THE CLAY OVEN '),
('vegetable soup ', 80, 'SOUP');

-- --------------------------------------------------------

--
-- Table structure for table `south indian`
--

CREATE TABLE IF NOT EXISTS `south indian` (
  `name` varchar(200) NOT NULL DEFAULT '',
  `price` int(10) DEFAULT NULL,
  `type` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `south indian`
--

INSERT INTO `south indian` (`name`, `price`, `type`) VALUES
('Kaya Kooralu Chaaru ', 80, 'SOUP'),
('Thili Saaru', 80, 'SOUP'),
('Melagu-Tanni Soup                                      ', 80, 'SOUP'),
('Pesarapappu Saaru                                                                                                                         ', 80, 'SOUP'),
('Murungai Pudhina Elai Soup                                                                                                            ', 80, 'SOUP'),
('Clear Vegetable Soup', 80, 'SOUP'),
('Curry Leaves Saar', 80, 'SOUP'),
('Daali Thoi', 80, 'SOUP'),
('Dal Rasam', 80, 'SOUP'),
('Hot And Sour Vegetable Soup', 80, 'SOUP'),
('Mixed Vegetable Soup', 80, 'SOUP'),
('Potato Thoi', 80, 'SOUP'),
('Sweet Corn Soup', 80, 'SOUP'),
('Tomato Florentine Soup', 80, 'SOUP'),
('Tomato Rasam', 80, 'SOUP'),
('Tomato Soup', 80, 'SOUP'),
('saviya', 80, 'SOUP'),
('Chutney', 80, 'SOUP'),
('kozhambu/korma         ', 80, 'SOUP'),
('A yoghurt soup', 80, 'SOUP'),
('Kurma/korma', 80, 'SOUP'),
('More Kazhambu', 80, 'SOUP'),
('Pachadi', 80, 'SOUP'),
('Raita', 80, 'SOUP'),
('Rasam', 80, 'SOUP'),
('Sambhar', 80, 'SOUP'),
('Sweet Pongal', 80, 'SOUP'),
('Adai', 60, 'STARTERS'),
('Aloo Bonda                                                                                                           ', 90, 'STARTERS'),
('chilli Porotha', 70, 'STARTERS'),
('Kaalan Thoran                                                                                                     ', 80, 'STARTERS'),
('Rava Kesari', 60, 'DESSERTS'),
('Chakkarai Pongal', 60, 'DESSERTS'),
('Paal payasam', 60, 'DESSERTS'),
('RIce Kheer', 60, 'DESSERTS'),
('Prappu Paradhamam', 60, 'DESSERTS'),
('Semiya Payasam', 60, 'DESSERTS'),
('Gulab Jamun', 60, 'DESSERTS'),
('Thenkayipaal Payasam', 60, 'DESSERTS'),
('Fresh fruit salad ', 70, 'DESSERTS'),
('Pista Kulfi', 60, 'ICE CREAMS/KULFI'),
('Fresh Fruit Kulfi(Seasonal)', 75, 'ICE CREAMS/KULFI'),
('Fresh fruit salad with ice-cream', 75, 'ICE CREAMS/KULFI'),
('Kesar Pista Kulfi', 60, 'ICE CREAMS/KULFI'),
('Malai kulfi', 60, 'ICE CREAMS/KULFI'),
('Chocolate', 60, 'ICE CREAMS/KULFI'),
('vanilla', 60, 'ICE CREAMS/KULFI'),
('Mnago', 60, 'ICE CREAMS/KULFI'),
('Strawberry', 60, 'ICE CREAMS/KULFI'),
('Butter Scotch', 60, 'ICE CREAMS/KULFI'),
('Kaju Kismis', 60, 'ICE CREAMS/KULFI'),
('Tuti Fruity', 60, 'ICE CREAMS/KULFI'),
('Milk Chocolate', 60, 'ICE CREAMS/KULFI'),
('Elanner', 45, 'BEVERAGE'),
('Neer More', 45, 'BEVERAGE'),
('Fresh Fruit Juice', 70, 'BEVERAGE'),
('Chocolate Milk Shake', 75, 'BEVERAGE'),
('Strawberry Milk Shake', 75, 'BEVERAGE'),
('Mango Milk Shake', 75, 'BEVERAGE'),
('Vanilla Milk Shake', 75, 'BEVERAGE'),
('Fresh Lime Soda(Sweet/Salted/Mix)', 45, 'BEVERAGE'),
('Lassi(Sweet/Salted/Mango/Vanilla)', 65, 'BEVERAGE'),
('Cold Coffee', 60, 'BEVERAGE'),
('Cold Coffee With Ice-cream', 75, 'BEVERAGE'),
('Cold Drinks', 35, 'BEVERAGE'),
('Tea', 35, 'BEVERAGE'),
('South Indian Filter Coffee', 40, 'BEVERAGE'),
('Normal water (Free)', 0, 'DRINKING WATER'),
('Mineral Water', 80, 'DRINKING WATER'),
('Packged Water', 40, 'DRINKING WATER'),
('Veg Raita', 25, 'SALAD / PAPAD'),
('Boondi Raita', 35, 'SALAD / PAPAD'),
('Green Salad', 45, 'SALAD / PAPAD'),
('Papad', 25, 'SALAD / PAPAD'),
('Masala Papad', 35, 'SALAD / PAPAD'),
('Dahi ( Curd )', 25, 'SALAD / PAPAD'),
('Extra Butter', 25, 'SALAD / PAPAD'),
('Bisebelle Bhath ( Sambar Rice )', 125, 'RICE'),
('Puliyotharai Rice ( Imli Rice )', 125, 'RICE'),
('Tomato Rice', 125, 'RICE'),
('Lemon Rice', 125, 'RICE'),
('Dahi Rice Rice', 125, 'RICE'),
('Tamarind Rice', 125, 'RICE'),
('Nei Rice', 125, 'RICE'),
('Coconut Rice', 125, 'RICE'),
('Thair Rice', 125, 'RICE'),
('Kai Kari Biryani', 125, 'RICE'),
('Plain Uttappa', 65, 'UTTAPPAS'),
('Plain Uttappa with Butter', 75, 'UTTAPPAS'),
('Plain Uttappa with Cheese', 75, 'UTTAPPAS'),
('Mini Uttappa ', 65, 'UTTAPPAS'),
('Mini Uttappa with Cheese', 75, 'UTTAPPAS'),
('Onion Uttappa', 75, 'UTTAPPAS'),
('Onion Uttappa with Butter', 85, 'UTTAPPAS');
