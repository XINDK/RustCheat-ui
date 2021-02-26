void ToggleButton(const char* str_id, bool* v)
{ 
ImVec2 p = ImGui::GetCursorScreenPos(); 
ImDrawList* draw_list = ImGui::GetWindowDrawList();
float height = ImGui::GetFrameHeight();
float width = height * 1.55f;
float radius = height * 0.50f;
 if (ImGui::InvisibleButton(str_id, ImVec2(width, height)))
   *v = !*v;
ImU32 col_bg;
if (ImGui::IsItemHovered())
	  col_bg = *v ? IM_COL32(145 + 20, 211, 68 + 20, 255) : IM_COL32(218 - 20, 218 - 20, 218 - 20, 255);
 else
	   col_bg = *v ? IM_COL32(145, 211, 68, 255) : IM_COL32(218, 218, 218, 255);
  draw_list->AddRectFilled(p, ImVec2(p.x + width, p.y + height), col_bg, height * 0.5f);
   draw_list->AddCircleFilled(ImVec2(*v ? (p.x + width - radius) : (p.x + radius), p.y + radius), radius - 1.5f, IM_COL32(255, 255, 255, 255));
}


void gui_builder0()
{
ImGui::SetNextWindowSize({770.f,421.f});

ImGui::Begin( "Rust Internal");
ImGui::SetCursorPos({-257.f,-11.f});
ImGui::RadioButton("radio0", the_bool);
ImGui::SetCursorPos({-120.f,30.f});
ToggleButton("toggle1", the_bool);
ImGui::SetCursorPos({-114.f,26.f});
ToggleButton("toggle2", the_bool);
ImGui::SetCursorPos({6.f,25.f});
ImGui::Text("Developer: Scopes#0260");
ImGui::SetCursorPos({5.f,42.f});
ImGui::Text("EasyAnticheat : BYPASSED!");
ImGui::SetCursorPos({5.f,64.f});
ImGui::SliderFloat("Speed", &valueF,0,100);
ImGui::SetCursorPos({4.f,109.f});
ToggleButton("ESP on/off", the_bool);
ImGui::SetCursorPos({45.f,109.f});
ImGui::Text("ESP");
ImGui::SetCursorPos({4.f,130.f});
ToggleButton("toggle9", the_bool);
ImGui::SetCursorPos({4.f,150.f});
ToggleButton("toggle10", the_bool);
ImGui::SetCursorPos({3.f,170.f});
ToggleButton("toggle11", the_bool);
ImGui::SetCursorPos({3.f,189.f});
ToggleButton("toggle12", the_bool);
ImGui::SetCursorPos({41.f,131.f});
ImGui::Text("Skeleton");
ImGui::SetCursorPos({40.f,154.f});
ImGui::Text("Boxes");
ImGui::SetCursorPos({37.f,173.f});
ImGui::Text("Traces");
ImGui::SetCursorPos({39.f,191.f});
ImGui::Text("Health");
ImGui::SetCursorPos({3.f,189.f});
ToggleButton("toggle17", the_bool);
ImGui::SetCursorPos({168.f,187.f});
ToggleButton("toggle18", the_bool);
ImGui::SetCursorPos({168.f,168.f});
ToggleButton("toggle19", the_bool);
ImGui::SetCursorPos({167.f,148.f});
ToggleButton("toggle20", the_bool);
ImGui::SetCursorPos({168.f,128.f});
ToggleButton("toggle21", the_bool);
ImGui::SetCursorPos({168.f,106.f});
ToggleButton("toggle22", the_bool);
ImGui::SetCursorPos({204.f,131.f});
ImGui::Text("Explosive bullets");
ImGui::SetCursorPos({205.f,110.f});
ImGui::Text("NO RECOIL");
ImGui::SetCursorPos({204.f,151.f});
ImGui::Text("Anti LOGGIN");
ImGui::SetCursorPos({205.f,170.f});
ImGui::Text("No Spin");
ImGui::SetCursorPos({206.f,191.f});
ImGui::Text("World Map");


ImGui::End();
}


