-- Keep a log of any SQL queries you execute as you solve the mystery.
sqlite3 fiftyville.db
.schema
SELECT description FROM crime_scene_reports WHERE year = 2021 AND month = 7 AND day = 28 AND street = 'Humphrey Street';
SELECT transcript FROM interviews WHERE year = 2021 AND month = 7 AND day = 28;

SELECT activity, license_plate FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10 AND 5<minute<15 AND activity = 'exit';
SELECT account_number, amount FROM atm_transactions WHERE year = 2021 AND month = 7 AND day = 28 AND transaction_type = 'withdraw';
