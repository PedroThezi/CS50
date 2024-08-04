SELECT name FROM songs Where artist_id == (SELECT id FROM artists WHERE name == "Post Malone");
