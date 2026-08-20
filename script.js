document.getElementById("foodForm").addEventListener("submit", function(event) {

    event.preventDefault();

    const name = document.getElementById("name").value;
    const foodType = document.getElementById("foodType").value;
    const quantity = document.getElementById("quantity").value;
    const location = document.getElementById("location").value;

    const result = document.getElementById("result");

    result.innerHTML = `
        <h3>✅ Food Donation Registered!</h3>
        <p>Thank you, <b>${name}</b>.</p>
        <p>${quantity} people worth of ${foodType} is available.</p>
        <p>📍 Pickup Location: ${location}</p>
        <p>🤖 Finding a suitable nearby trust...</p>
    `;

});