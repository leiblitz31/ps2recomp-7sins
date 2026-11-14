#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211410
// Address: 0x211410 - 0x211570
void sub_00211410_0x211410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211410_0x211410");
#endif

    switch (ctx->pc) {
        case 0x21142cu: goto label_21142c;
        default: break;
    }

    ctx->pc = 0x211410u;

    // 0x211410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x211418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21141c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21141cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211420: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x211420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x211424: 0xc056254  jal         func_158950
    ctx->pc = 0x211424u;
    SET_GPR_U32(ctx, 31, 0x21142Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x211424u, 0x21142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21142Cu;
label_21142c:
    // 0x21142c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21142cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211430: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211434: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x211434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x211438: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21143c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x21143cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x211440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211444: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211448: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x211448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x21144c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211450: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x211450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x211454: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211458: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21145c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x21145cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x211460: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211464: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x211464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x211468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21146c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211470: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x211470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x211474: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x211474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211478: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21147c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x21147cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x211480: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211484: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x211484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x211488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21148c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211490: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x211490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x211494: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211498: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x211498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x21149c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21149cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2114a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2114a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2114a4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2114a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2114a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2114a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2114ac: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x2114acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x2114b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2114b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2114b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2114b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2114b8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2114b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2114bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2114bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2114c0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x2114c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2114c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2114c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2114c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2114c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2114cc: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2114ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2114d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2114d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2114d4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2114d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2114d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2114d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2114dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2114dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2114e0: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2114e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2114e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2114e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2114e8: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2114e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2114ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2114ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2114f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2114f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2114f4: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2114f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2114f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2114f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2114fc: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2114fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x211500: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211504: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211508: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x211508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x21150c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x21150cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x211510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211514: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211518: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x211518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x21151c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21151cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x211520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211528: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x211528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x21152c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21152cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x211530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211534: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211538: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x211538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x21153c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21153cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x211540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211544: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211548: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x211548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x21154c: 0xc780829c  lwc1        $f0, -0x7D64($gp)
    ctx->pc = 0x21154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211550: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211554: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x211554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x211558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21155c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21155cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211560: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x211560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x211564: 0x3e00008  jr          $ra
    ctx->pc = 0x211564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21156Cu;
    // 0x21156c: 0x0  nop
    ctx->pc = 0x21156cu;
    // NOP
    ctx->pc = 0x211570u;
}
