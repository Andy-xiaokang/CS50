-- Keep a log of any SQL queries you execute as you solve the mystery.
sqlite3 fiftyville.db
.schema
SELECT description FROM crime_scene_reports WHERE year = 2021 AND month = 7 AND day = 28 AND street = 'Humphrey Street';
SELECT transcript FROM interviews WHERE year = 2021 AND month = 7 AND day = 28;
SELECT license_plate FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10 AND 15<minute<=25 AND activity = 'exit';
SELECT account_number FROM atm_transactions WHERE year = 2021 AND month = 7 AND day = 28 AND transaction_type = 'withdraw';
SELECT caller FROM phone_calls WHERE year = 2021 AND month = 7 AND day = 28 AND duration < 60;
SELECT passport_number FROM passengers WHERE flight_id IN (SELECT id FROM flights WHERE origin_airport_id IN (SELECT id FROM airports WHERE city ='Fiftyville'));
-- earliest flight id in 2021.7.29 is 36  and the airports id of Fiftyville is 8
select * from flights where origin_airport_id = 8 and year = 2021 AND month = 7 AND day = 29;
select id from flights where origin_airport_id = 8 and year = 2021 AND month = 7 AND day = 29 AND hour = 8 AND minute = 20;

SELECT name FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10 AND 15<minute<=25 AND activity = 'exit');
SELECT name FROM people WHERE phone_number IN (SELECT caller FROM phone_calls WHERE year = 2021 AND month = 7 AND day = 28 AND duration < 60);
SELECT name FROM people WHERE id IN (SELECT person_id FROM bank_accounts WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE year = 2021 AND month = 7 AND day = 28 AND transaction_type = 'withdraw'));


