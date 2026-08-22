import "./style.css";
import * as THREE from "three";
import { OrbitControls } from "three/examples/jsm/controls/OrbitControls";

// You would need a :-
// 1. Scene (container that holds all of your objects, cameras & lights)
const scene = new THREE.Scene();

// 2. Camera (in Three.js perpective camera is commonly used which is used to mimic what humans eyes can see)
// Arguments passed inside PerspectiveCamera() :-
// a. Field of view (amount of world that's visible based on full 360 degrees)
// b. Aspect ratio
// c., d, View frustrum (to control which objects are visible relative to camera itself)
const camera = new THREE.PerspectiveCamera(
  75,
  window.innerWidth / window.innerHeight,
  0.1,
  1000
);

// 3. Renderer
// Render the actual graphics in the screen on the canvas element with id of bg
const renderer = new THREE.WebGLRenderer({
  canvas: document.querySelector("#bg"),
});

// Set pixel ratio to window device pixel ratio
renderer.setPixelRatio(window.devicePixelRatio);

// Set renderer size to the window size to make it a full screen canvas
renderer.setSize(window.innerWidth, window.innerHeight);

// Move camera position along z axis
camera.position.setZ(30);

// Render the scene & camera
renderer.render(scene, camera);

// Add a TORUS object with it's vector's
const geometry = new THREE.TorusGeometry(10, 3, 16, 100);

// Create a new basic mesh material for the Torus object
// const material = new THREE.MeshBasicMaterial({
//   color: 0xff6347,
//   wireframe: true,
// });

// Create a new standard mesh material for the Torus object
const material = new THREE.MeshStandardMaterial({ color: 0xff6347 });

// Create mesh by combining the geometry and material
const torus = new THREE.Mesh(geometry, material);

// Add Torus object to the scene
scene.add(torus);

// Light 3D object
// Point light emits light in all directions
const pointLight = new THREE.PointLight(0xffffff);
pointLight.position.set(20, 20, 20);
scene.add(pointLight);

// ambinent light will light up the full scene
const ambinentLight = new THREE.AmbientLight(0xffffff);
scene.add(ambinentLight);

// Point light helper will show the position of point light
const lightHelper = new THREE.PointLightHelper(pointLight);

// Grid helper draws a 2D grid along the scene
const gridHelper = new THREE.GridHelper(200, 50);
scene.add(lightHelper, gridHelper);

// This will listen to dom events on the mouse and update the camera position accordingly
const controls = new OrbitControls(camera, renderer.domElement);

// Adding star's in scene at random positions
function addStar() {
  const geometry = new THREE.SphereGeometry(0.25);
  const material = new THREE.MeshStandardMaterial({ color: 0xffffff });
  const star = new THREE.Mesh(geometry, material);

  // generate random co-ordiantes
  const [x, y, z] = Array(3)
    .fill()
    .map(() => THREE.MathUtils.randFloatSpread(100));

  // Set position of star
  star.position.set(x, y, z);
  scene.add(star);
}

// Add 200 random star's in the scene
Array(200).fill().forEach(addStar);

// Add Space background image in the scene
const spaceTexture = new THREE.TextureLoader().load("space.jpg");
scene.background = spaceTexture;

// Add box geometry for person
const personTexture = new THREE.TextureLoader().load("person.jpg");
const person = new THREE.Mesh(
  new THREE.BoxGeometry(3, 3, 3),
  new THREE.MeshBasicMaterial({ map: personTexture })
);
scene.add(person);

// Moon
const moonTexture = new THREE.TextureLoader().load("moon.jpg");
const normalTexture = new THREE.TextureLoader().load("normal.jpg");
const moon = new THREE.Mesh(
  new THREE.SphereGeometry(3, 32, 32),
  new THREE.MeshStandardMaterial({
    map: moonTexture,
    normalMap: normalTexture,
  })
);
scene.add(moon);

// reposition the moon
moon.position.z = 30;
moon.position.setX(-10);

// Move the camera everytime the user scrolls
function moveCamera() {
  // Calculate where the user is currently scrolled too
  const t = document.body.getBoundingClientRect().top;
  moon.rotation.x += 0.05;
  moon.rotation.y += 0.075;
  moon.rotation.z += 0.05;

  person.rotation.y += 0.01;
  person.rotation.z += 0.01;

  camera.position.z = t * -0.01;
  camera.position.x = t * -0.0002;
  camera.rotation.y = t * -0.0002;
}
document.body.onscroll = moveCamera;

// Re render the screen
// renderer.render(scene, camera);

// Rendering scene & camera loop
function animate() {
  requestAnimationFrame(animate);

  // rotate the torus by changing it's rotation along x,y and z axis
  torus.rotation.x += 0.01;
  torus.rotation.y += 0.005;
  torus.rotation.z += 0.01;

  // To make sure changes of controls are reflected
  controls.update();

  renderer.render(scene, camera);
}

animate();
