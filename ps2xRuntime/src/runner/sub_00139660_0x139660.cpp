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

// Function: sub_00139660
// Address: 0x139660 - 0x139760
void sub_00139660_0x139660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139660_0x139660");
#endif

    switch (ctx->pc) {
        case 0x13968cu: goto label_13968c;
        case 0x1396a0u: goto label_1396a0;
        case 0x1396acu: goto label_1396ac;
        case 0x1396b8u: goto label_1396b8;
        case 0x1396c4u: goto label_1396c4;
        case 0x1396f8u: goto label_1396f8;
        default: break;
    }

    ctx->pc = 0x139660u;

    // 0x139660: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x139660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x139664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x139668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13966c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13966cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x139670: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x139670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x139674: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x139674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x139678: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x139678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
    // 0x13967c: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x13967cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x139680: 0x248497c0  addiu       $a0, $a0, -0x6840
    ctx->pc = 0x139680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940608));
    // 0x139684: 0xc113f38  jal         func_44FCE0
    ctx->pc = 0x139684u;
    SET_GPR_U32(ctx, 31, 0x13968Cu);
    ctx->pc = 0x44FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FCE0u, 0x139684u, 0x13968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13968Cu;
label_13968c:
    // 0x13968c: 0x8f84ba78  lw          $a0, -0x4588($gp)
    ctx->pc = 0x13968cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x139690: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x139690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139694: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x139694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139698: 0xc1226f4  jal         func_489BD0
    ctx->pc = 0x139698u;
    SET_GPR_U32(ctx, 31, 0x1396A0u);
    ctx->pc = 0x489BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489BD0u, 0x139698u, 0x1396A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396A0u;
label_1396a0:
    // 0x1396a0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1396a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1396a4: 0xc11931c  jal         func_464C70
    ctx->pc = 0x1396A4u;
    SET_GPR_U32(ctx, 31, 0x1396ACu);
    ctx->pc = 0x464C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C70u, 0x1396A4u, 0x1396ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396ACu;
label_1396ac:
    // 0x1396ac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1396acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1396b0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1396B0u;
    SET_GPR_U32(ctx, 31, 0x1396B8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1396B0u, 0x1396B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396B8u;
label_1396b8:
    // 0x1396b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1396b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396bc: 0xc0eb428  jal         func_3AD0A0
    ctx->pc = 0x1396BCu;
    SET_GPR_U32(ctx, 31, 0x1396C4u);
    ctx->pc = 0x3AD0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0A0u, 0x1396BCu, 0x1396C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396C4u;
label_1396c4:
    // 0x1396c4: 0x8f83ba74  lw          $v1, -0x458C($gp)
    ctx->pc = 0x1396c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x1396c8: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1396c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1396cc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1396ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1396d0: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x1396d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x1396d4: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x1396d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x1396d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1396d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1396dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1396DCu;
    {
        const bool branch_taken_0x1396dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1396dc) {
            ctx->pc = 0x139700u;
            goto label_139700;
        }
    }
    ctx->pc = 0x1396E4u;
    // 0x1396e4: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x1396e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x1396e8: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x1396e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x1396ec: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1396ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1396f0: 0xc04e5d8  jal         func_139760
    ctx->pc = 0x1396F0u;
    SET_GPR_U32(ctx, 31, 0x1396F8u);
    ctx->pc = 0x139760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139760u, 0x1396F0u, 0x1396F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396F8u;
label_1396f8:
    // 0x1396f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1396F8u;
    {
        const bool branch_taken_0x1396f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1396f8) {
            ctx->pc = 0x139738u;
            goto label_139738;
        }
    }
    ctx->pc = 0x139700u;
label_139700:
    // 0x139700: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139704: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x139704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x139708: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x139708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x13970c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13970cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139710: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x139710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x139714: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x139714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x139718: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x139718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x13971c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13971cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139720: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x139720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x139724: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x139724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x139728: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x139728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x13972c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13972cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139730: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x139730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x139734: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x139734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
label_139738:
    // 0x139738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13973c: 0xa382ba6c  sb          $v0, -0x4594($gp)
    ctx->pc = 0x13973cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949484), (uint8_t)GPR_U32(ctx, 2));
    // 0x139740: 0x9382ba6c  lbu         $v0, -0x4594($gp)
    ctx->pc = 0x139740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949484)));
    // 0x139744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139748: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x139748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13974c: 0x3e00008  jr          $ra
    ctx->pc = 0x13974Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13974Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139754u;
    // 0x139754: 0x0  nop
    ctx->pc = 0x139754u;
    // NOP
    // 0x139758: 0x0  nop
    ctx->pc = 0x139758u;
    // NOP
    // 0x13975c: 0x0  nop
    ctx->pc = 0x13975cu;
    // NOP
    ctx->pc = 0x139760u;
}
