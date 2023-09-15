// Get the navigation bar element
const navbar = document.querySelector(".navbar");

// Function to handle the scroll event
function handleScroll() {
    const scrollPosition = window.scrollY;

    if (scrollPosition > 0) {
        navbar.classList.add("scroll");
    } else {
        navbar.classList.remove("scroll");
    }
}

// Listen for scroll events
window.addEventListener("scroll", handleScroll);


// Get the navigation links
const navLinks = document.querySelectorAll(".nav-links li a");

// Function to handle smooth scroll
function handleSmoothScroll(event) {
  event.preventDefault();
  const targetId = event.target.getAttribute("href");
  const targetSection = document.querySelector(targetId);
  const targetPosition = targetSection.offsetTop;

  window.scrollTo({
    top: targetPosition,
    behavior: "smooth" // Add smooth scrolling behavior
  });

  // Close the navigation menu if needed (optional)
  navbar.classList.remove("active");
}

// Function to update active navigation link
function updateActiveLink() {
  const currentPosition = window.pageYOffset;

  // Remove active class from all navigation links
  navLinks.forEach((link) => {
    link.classList.remove("active");
  });

  // Find the section that is currently in view
  const sections = document.querySelectorAll("section");
  sections.forEach((section) => {
    const sectionTop = section.offsetTop;
    const sectionHeight = section.offsetHeight;

    if (
      currentPosition >= sectionTop - 100 &&
      currentPosition < sectionTop + sectionHeight - 100
    ) {
      // Get the corresponding navigation link and add the active class
      const targetLink = document.querySelector(
        `.nav-links li a[href="${targetId}"]`
      );
      if (targetLink) {
        targetLink.classList.add("active");
      }
    }
  });
}

// Attach smooth scroll event listener to each navigation link
navLinks.forEach((link) => {
  link.addEventListener("click", handleSmoothScroll);
});

// Listen for scroll events and update the active navigation link
window.addEventListener("scroll", updateActiveLink);
