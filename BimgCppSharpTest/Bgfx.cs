using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;
using CppSharp.Passes;

namespace BimgCppSharpTest;

public class Bgfx : ILibrary
{
    public void Preprocess(Driver driver, ASTContext ctx)
    {
    }

    public void Postprocess(Driver driver, ASTContext ctx)
    {
    }

    public void Setup(Driver driver)
    {
        var options = driver.Options;
        options.GeneratorKind = GeneratorKind.CSharp;

        var module = options.AddModule("Bgfx");
        
        module.IncludeDirs.Add("bx");
        module.Headers.AddRange(new[]
        {
            "platform.h"
        });
        
        module.IncludeDirs.Add("include");
        module.Headers.AddRange(new[]
        {
            "bgfx.h",
            "defines.h",
            "embedded_shader.h",
            "platform.h"
        });

        module.LibraryDirs.Add("libs");
        module.Libraries.Add("libbgfx-shared-libRelease.so");
    }

    public void SetupPasses(Driver driver)
    {
        driver.Context.TranslationUnitPasses.RenameDeclsUpperCase(RenameTargets.Any);
        driver.Context.TranslationUnitPasses.AddPass(new FunctionToInstanceMethodPass());
    }
}