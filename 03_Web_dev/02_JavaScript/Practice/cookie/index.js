model = document.getElementById("modal");

setTimeout(() => {
    modal.style.display = "inline"
}, 1500);


modelClose = document.getElementById("modal-close-btn")

modelClose.addEventListener("click", function(){
    model.style.display = "none"
})