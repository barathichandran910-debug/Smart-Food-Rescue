* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: Arial, sans-serif;
    background: #f5f7f4;
    color: #222;
}

header {
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 18px 8%;
    background: white;
    box-shadow: 0 2px 8px rgba(0,0,0,0.1);
}

.logo {
    font-size: 22px;
    font-weight: bold;
}

nav a {
    text-decoration: none;
    color: #222;
    margin-left: 25px;
}

.hero {
    min-height: 500px;
    display: flex;
    align-items: center;
    padding: 60px 8%;
    background: #e8f5e9;
}

.hero h1 {
    font-size: 48px;
    margin-bottom: 20px;
}

.hero p {
    font-size: 18px;
    max-width: 600px;
    line-height: 1.6;
    margin-bottom: 30px;
}

.btn {
    display: inline-block;
    text-decoration: none;
    padding: 14px 25px;
    background: #2e7d32;
    color: white;
    border-radius: 8px;
}

.donate-section {
    max-width: 700px;
    margin: 50px auto;
    padding: 30px;
    background: white;
    border-radius: 12px;
    box-shadow: 0 3px 15px rgba(0,0,0,0.1);
}

.donate-section h2 {
    text-align: center;
    margin-bottom: 25px;
}

form {
    display: flex;
    flex-direction: column;
}

label {
    margin-top: 15px;
    margin-bottom: 6px;
    font-weight: bold;
}

input,
select {
    padding: 12px;
    border: 1px solid #ccc;
    border-radius: 6px;
    font-size: 15px;
}

button {
    margin-top: 25px;
    padding: 14px;
    border: none;
    border-radius: 8px;
    background: #2e7d32;
    color: white;
    font-size: 16px;
    cursor: pointer;
}

button:hover {
    background: #1b5e20;
}

#result {
    margin-top: 20px;
    padding: 15px;
    text-align: center;
}

.about {
    text-align: center;
    padding: 60px 10%;
    background: white;
}

.about p {
    max-width: 700px;
    margin: 15px auto;
    line-height: 1.6;
}

footer {
    text-align: center;
    padding: 20px;
    background: #222;
    color: white;
}