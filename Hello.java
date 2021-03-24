import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.layout.StackPane;

public class Hello extends Application {
public static void main(String[] args) {
// Launch the JavaFX application
Application.launch(args);
}
@Override
public void start(Stage stage) {
StackPane sp=new StackPane();
stage.setTitle("Hello JavaFX Application");
Scene scene=new Scene(sp,300,300);
stage.setScene(scene);
stage.show();
}
}
