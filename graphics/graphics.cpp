#include "olcConsoleGameEngine.h":


class ggEngine3d : public olcConsoleGameEngine
{
    public:
        ggEngine3d() 
        {
            m_sAppName = L"3D Demo";
        }

    public: 
        bool OnUserCreate() override
        {
            return true;
        }

        bool OnUserUpdate(float fElapsedTime) override
        {
            return true;
        }
};

int main()
{
    ggEngine3d demo;

    if (demo.ConstructConsole(256, 240, 4, 4))
        demo.Start();

    return true;
}
