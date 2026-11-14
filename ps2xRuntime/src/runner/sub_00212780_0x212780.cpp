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

// Function: sub_00212780
// Address: 0x212780 - 0x212930
void sub_00212780_0x212780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212780_0x212780");
#endif

    switch (ctx->pc) {
        case 0x2127acu: goto label_2127ac;
        case 0x2127ecu: goto label_2127ec;
        case 0x2128dcu: goto label_2128dc;
        case 0x2128f0u: goto label_2128f0;
        case 0x212910u: goto label_212910;
        default: break;
    }

    ctx->pc = 0x212780u;

    // 0x212780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x212788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21278c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x21278cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x212790: 0x24635180  addiu       $v1, $v1, 0x5180
    ctx->pc = 0x212790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20864));
    // 0x212794: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212798: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x212798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x21279c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2127a0: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2127a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2127a4: 0xc084e2c  jal         func_2138B0
    ctx->pc = 0x2127A4u;
    SET_GPR_U32(ctx, 31, 0x2127ACu);
    ctx->pc = 0x2138B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2138B0u, 0x2127A4u, 0x2127ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2127ACu;
label_2127ac:
    // 0x2127ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2127acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2127b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2127b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2127b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2127b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2127b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2127b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2127bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2127bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2127c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2127c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2127c4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2127c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2127c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2127c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2127cc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2127ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2127d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2127d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2127d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2127d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2127d8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2127d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2127dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2127dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2127e0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2127e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2127e4: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x2127E4u;
    SET_GPR_U32(ctx, 31, 0x2127ECu);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x2127E4u, 0x2127ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2127ECu;
label_2127ec:
    // 0x2127ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2127ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2127f0: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2127f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2127f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2127f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2127f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2127f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2127fc: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2127fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x212800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212804: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x212804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x212808: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21280c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x21280cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x212810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212814: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212818: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x212818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x21281c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212820: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x212820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x212824: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212828: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x212828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x21282c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21282cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212830: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212834: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x212834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x212838: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21283c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x21283cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x212840: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212844: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x212844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x212848: 0xc7808318  lwc1        $f0, -0x7CE8($gp)
    ctx->pc = 0x212848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21284c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212850: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x212850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x212854: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212858: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x212858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x21285c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21285cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212860: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212864: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x212864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x212868: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21286c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212870: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x212870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x212874: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212878: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21287c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x21287cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x212880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212888: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x212888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21288c: 0x3e00008  jr          $ra
    ctx->pc = 0x21288Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21288Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212894u;
    // 0x212894: 0x0  nop
    ctx->pc = 0x212894u;
    // NOP
    // 0x212898: 0x0  nop
    ctx->pc = 0x212898u;
    // NOP
    // 0x21289c: 0x0  nop
    ctx->pc = 0x21289cu;
    // NOP
    // 0x2128a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2128a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2128a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2128a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2128a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2128a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2128ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2128acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2128b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2128b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2128b4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2128B4u;
    {
        const bool branch_taken_0x2128b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2128b4) {
            ctx->pc = 0x212910u;
            goto label_212910;
        }
    }
    ctx->pc = 0x2128BCu;
    // 0x2128bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2128bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2128c0: 0x24635180  addiu       $v1, $v1, 0x5180
    ctx->pc = 0x2128c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20864));
    // 0x2128c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2128c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2128c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2128c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2128cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2128ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2128d0: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2128d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2128d4: 0xc103da2  jal         func_40F688
    ctx->pc = 0x2128D4u;
    SET_GPR_U32(ctx, 31, 0x2128DCu);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x2128D4u, 0x2128DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2128DCu;
label_2128dc:
    // 0x2128dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2128dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2128e0: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2128e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2128e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2128e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2128e8: 0xc084e78  jal         func_2139E0
    ctx->pc = 0x2128E8u;
    SET_GPR_U32(ctx, 31, 0x2128F0u);
    ctx->pc = 0x2139E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2139E0u, 0x2128E8u, 0x2128F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2128F0u;
label_2128f0:
    // 0x2128f0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2128f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2128f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2128f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2128f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2128f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2128fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2128FCu;
    {
        const bool branch_taken_0x2128fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2128fc) {
            ctx->pc = 0x212910u;
            goto label_212910;
        }
    }
    ctx->pc = 0x212904u;
    // 0x212904: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x212904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212908: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x212908u;
    SET_GPR_U32(ctx, 31, 0x212910u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x212908u, 0x212910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212910u;
label_212910:
    // 0x212910: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212918: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x212918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21291c: 0x3e00008  jr          $ra
    ctx->pc = 0x21291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21291Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212924u;
    // 0x212924: 0x0  nop
    ctx->pc = 0x212924u;
    // NOP
    // 0x212928: 0x0  nop
    ctx->pc = 0x212928u;
    // NOP
    // 0x21292c: 0x0  nop
    ctx->pc = 0x21292cu;
    // NOP
    ctx->pc = 0x212930u;
}
