-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * FROM crime_scene_reports WHERE month = 7 AND day = 28 and street = 'Chamberlin Street';

SELECT * FROM interviews Where month = 7 AND day = 28 and transcript LIKE '%bakery%';

SELECT * FROM bakery_security_logs
WHERE day = 28 AND month = 7 AND year = 2023 AND hour = 10 AND minute BETWEEN 15 AND 25;

SELECT name from people
JOIN bakery_security_logs ON people.license_plate = bakery_security_logs.license_plate
WHERE day = 28 AND month = 7
AND year = 2023 AND hour = 10
AND minute BETWEEN 15 AND 25 ORDER BY name;

SELECT * FROM atm_transactions
WHERE year = 2023 AND month = 7
AND day = 28 AND atm_location = 'Leggett Street';

SELECT name FROM people
JOIN bank_accounts ON people.id = bank_accounts.person_id
JOIN atm_transactions ON bank_accounts.account_number = atm_transactions.account_number
WHERE year = 2023 AND month = 7 AND day = 28 AND atm_location = 'Leggett Street' ORDER BY name;

SELECT caller FROM phone_calls
WHERE year = 2023 AND month = 7 AND day = 28
AND duration <= 60;

SELECT name FROM people
JOIN phone_calls ON people.phone_number = phone_calls.caller
WHERE year = 2023 AND month = 7 AND day = 28
AND duration <= 60 ORDER BY name;

SELECT * FROM airports
WHERE city = 'Fiftyville';

SELECT * FROM flights
WHERE origin_airport_id = 8 AND year = 2023 AND month = 7 AND day = 29;

SELECT people.name FROM people
JOIN passengers ON people.passport_number = passengers.passport_number
JOIN flights ON passengers.flight_id = flights.id
JOIN airports ON flights.origin_airport_id = airports.id
WHERE airports.city = 'Fiftyville'
AND year = 2023 AND month = 7 AND day = 29 AND hour = 8 AND minute = 20 ORDER BY name;

SELECT city FROM airports
JOIN flights ON airports.id = flights.destination_airport_id
WHERE origin_airport_id = 8 AND year = 2023 AND month = 7 AND day = 29 AND hour = 8 AND minute = 20;

SELECT phone_number FROM people
WHERE name = 'Bruce';

SELECT name FROM people
JOIN phone_calls ON people.phone_number = phone_calls.receiver
WHERE year = 2023 AND month = 7 AND day = 28
AND duration <= 60 AND caller = '(367) 555-5533';

