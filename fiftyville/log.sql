-- Keep a log of any SQL queries you execute as you solve the mystery.
sqlite3 fiftyville.db
.schema
SELECT description FROM crime_scene_reports WHERE year = 2021 AND month = 7 AND day = 28 AND street = 'Humphrey Street';
SELECT transcript FROM interviews WHERE year = 2021 AND month = 7 AND day = 28;
SELECT license_plate FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10 AND 15<minute<=25 AND activity = 'exit';
SELECT account_number, amount FROM atm_transactions WHERE year = 2021 AND month = 7 AND day = 28 AND transaction_type = 'withdraw';
SELECT caller FROM phone_calls WHERE year = 2021 AND month = 7 AND day = 28 AND duration < 60;

SELECT name FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10 AND 15<minute<=25 AND activity = 'exit');
SELECT name FROM people WHERE phone_number IN (SELECT caller FROM phone_calls WHERE year = 2021 AND month = 7 AND day = 28 AND duration < 60);


