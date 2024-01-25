function validateLogin() {
    var username = document.getElementById('username').value;
    var password = document.getElementById('password').value;

    if (username === 'your_username' && password === 'your_password') {
        alert('Login successful!');
    } else {
        alert('Invalid username or password. Please try again.');
    }
}
