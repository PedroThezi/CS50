SELECT name FROM people WHERE people.id IN
(SELECT DISTINCT(people.id) FROM people
JOIN directors ON directors.person_id = people.id
JOIN movies ON movies.id = directors.movie_id
JOIN ratings ON ratings.movie_id = movies.id
WHERE rating >= 9.0);
