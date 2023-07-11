-- Keep a log of any SQL queries you execute as you solve the mystery.
sqlite3 fiftyville.db
.schema
SELECT description FROM crime_scene_reports WHERE year = 2021 AND month = 7 AND day = 28 AND street = 'Humphrey Street';
SELECT transcript FROM interviews WHERE year = 2021 AND month = 7 AND day = 28;
--the license_plate within 10 minutes exit the bakery
SELECT license_plate FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10 AND 15<minute AND minute<=25 AND activity = 'exit';
--the account_number withdraw in that day and in location of 'Leggett Street'
SELECT account_number FROM atm_transactions WHERE year = 2021 AND month = 7 AND day = 28 AND transaction_type = 'withdraw' AND atm_location ='Leggett Street';
--the caller phone number in that day and duration less than 60
SELECT caller FROM phone_calls WHERE year = 2021 AND month = 7 AND day = 28 AND duration < 60;
--
SELECT passport_number FROM passengers WHERE flight_id IN (SELECT id FROM flights WHERE origin_airport_id IN (SELECT id FROM airports WHERE city ='Fiftyville'));
-- earliest flight id in 2021.7.29 is 36  and the airports id of Fiftyville is 8
SELECT id FROM airports WHERE city ='Fiftyville'  --origin id is 8
select * from flights where origin_airport_id = 8 and year = 2021 AND month = 7 AND day = 29;  --earliest time is 8:20 am
select id from flights where origin_airport_id = 8 and year = 2021 AND month = 7 AND day = 29 AND hour = 8 AND minute = 20;  --flight_id is 36

SELECT name FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10 AND 15<minute AND minute<=25 AND activity = 'exit') ORDER BY name;
--Barry Bruce Diana Iman Kelsey Luca Sofia Vanessa
SELECT name FROM people WHERE phone_number IN (SELECT caller FROM phone_calls WHERE year = 2021 AND month = 7 AND day = 28 AND duration < 60) ORDER BY name;
--Benista Bruce Carina Diana Kelsey Kenny Sofia Taylor
SELECT name FROM people WHERE id IN (SELECT person_id FROM bank_accounts WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE year = 2021 AND month = 7 AND day = 28 AND transaction_type = 'withdraw' AND atm_location ='Leggett Street')) ORDER BY name;
--Benista Brooke Bruce Diana Iman Kenny Luca Taylor
select name from people where passport_number in (select passport_number FROM passengers WHERE flight_id = 36) ORDER BY name;
--Bruce Doris Edward Kelsey Kenny Luca Sofia Taylor

select city from airports where id = (select destination_airport_id from flights where id = 36);
--city: New York City

SELECT receiver FROM phone_calls WHERE (caller = (select phone_number from people where name = 'Bruce')) AND year = 2021 AND month = 7 AND day = 28 AND duration < 60;
--receiver: (375) 555-8161
select name from people where phone_number = '(375) 555-8161';
--accompliance name: Robin


