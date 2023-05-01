#include "ofApp.h"
#include  "ofxAssimpModelLoader.h"


//--------------------------------------------------------------
void ofApp::setup(){
   	// bWireframe = false;
	// bDisplayPoints = false;
	// bAltKeyDown = false;
	// bCtrlKeyDown = false;
	// bLanderLoaded = true;// changed to true; this allowed for the lander to spawn
	// bTerrainSelected = true;

//	ofSetWindowShape(1024, 768);
	cam.setDistance(10);
	cam.setNearClip(.1);
	cam.setFov(65.5);   // approx equivalent to 28mm in 35mm format
	ofSetVerticalSync(true);
	cam.disableMouseInput();
	ofEnableSmoothing();
	ofEnableDepthTest();

	top.setPosition(0, 25, 0);
	top.lookAt(glm::vec3(0, 0, 0));
	top.setNearClip(.1);
	top.setFov(65.5);   // approx equivalent to 28mm in 35mm format

	theCam = &cam;

	// setup rudimentary lighting 
	//
	// initLightingAndMaterials();

	terrain.loadModel("mars-low-5x-v2.obj");
    cout<<"hello 1"<<endl;
	terrain.setScaleNormalization(false);



	// boundingBox = meshBounds(terrain.getMesh(0));

	// mars.loadModel("geo/mars-low-5x-v2.obj");


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // ofBackground(ofColor::black);

    ofBackground(ofColor::black);


	theCam->begin();
    
	ofPushMatrix();
	               // wireframe mode  (include axis)
	ofDisableLighting();
	ofSetColor(ofColor::slateGray);
	terrain.drawWireframe();


    ofEnableLighting();              // shaded mode
	terrain.drawFaces();

	// highlight selected point (draw sphere around selected point)
	//
	ofNoFill();
	ofSetColor(ofColor::white);


	theCam->end();


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
