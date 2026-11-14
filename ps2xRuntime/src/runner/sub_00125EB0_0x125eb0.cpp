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

// Function: sub_00125EB0
// Address: 0x125eb0 - 0x126020
void sub_00125EB0_0x125eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125EB0_0x125eb0");
#endif

    switch (ctx->pc) {
        case 0x125ed4u: goto label_125ed4;
        case 0x125f44u: goto label_125f44;
        case 0x125f4cu: goto label_125f4c;
        case 0x125f58u: goto label_125f58;
        case 0x125f64u: goto label_125f64;
        case 0x125f6cu: goto label_125f6c;
        case 0x125f78u: goto label_125f78;
        case 0x125facu: goto label_125fac;
        case 0x125fc4u: goto label_125fc4;
        case 0x125fd8u: goto label_125fd8;
        case 0x125fe8u: goto label_125fe8;
        case 0x125ff8u: goto label_125ff8;
        default: break;
    }

    ctx->pc = 0x125eb0u;

    // 0x125eb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x125eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x125eb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x125eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x125eb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x125eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x125ebc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x125ec0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125ec4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x125ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ec8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x125ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x125ecc: 0xc042330  jal         func_108CC0
    ctx->pc = 0x125ECCu;
    SET_GPR_U32(ctx, 31, 0x125ED4u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x125ECCu, 0x125ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125ED4u;
label_125ed4:
    // 0x125ed4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x125ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ed8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x125ED8u;
    {
        const bool branch_taken_0x125ed8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ed8) {
            ctx->pc = 0x125EF0u;
            goto label_125ef0;
        }
    }
    ctx->pc = 0x125EE0u;
    // 0x125ee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125ee4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x125ee4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x125ee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x125EE8u;
    {
        const bool branch_taken_0x125ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ee8) {
            ctx->pc = 0x125EF4u;
            goto label_125ef4;
        }
    }
    ctx->pc = 0x125EF0u;
label_125ef0:
    // 0x125ef0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x125ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125ef4:
    // 0x125ef4: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x125ef4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x125ef8: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x125EF8u;
    {
        const bool branch_taken_0x125ef8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ef8) {
            ctx->pc = 0x125FF8u;
            goto label_125ff8;
        }
    }
    ctx->pc = 0x125F00u;
    // 0x125f00: 0x8f84b9f0  lw          $a0, -0x4610($gp)
    ctx->pc = 0x125f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949360)));
    // 0x125f04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x125f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125f08: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x125F08u;
    {
        const bool branch_taken_0x125f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x125f08) {
            ctx->pc = 0x125FA0u;
            goto label_125fa0;
        }
    }
    ctx->pc = 0x125F10u;
    // 0x125f10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x125f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125f14: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x125F14u;
    {
        const bool branch_taken_0x125f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x125f14) {
            ctx->pc = 0x125F98u;
            goto label_125f98;
        }
    }
    ctx->pc = 0x125F1Cu;
    // 0x125f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125f20: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x125F20u;
    {
        const bool branch_taken_0x125f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x125f20) {
            ctx->pc = 0x125F88u;
            goto label_125f88;
        }
    }
    ctx->pc = 0x125F28u;
    // 0x125f28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125F28u;
    {
        const bool branch_taken_0x125f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x125f28) {
            ctx->pc = 0x125F38u;
            goto label_125f38;
        }
    }
    ctx->pc = 0x125F30u;
    // 0x125f30: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x125F30u;
    {
        const bool branch_taken_0x125f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125f30) {
            ctx->pc = 0x125FF8u;
            goto label_125ff8;
        }
    }
    ctx->pc = 0x125F38u;
label_125f38:
    // 0x125f38: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x125f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x125f3c: 0xc08d920  jal         func_236480
    ctx->pc = 0x125F3Cu;
    SET_GPR_U32(ctx, 31, 0x125F44u);
    ctx->pc = 0x236480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236480u, 0x125F3Cu, 0x125F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F44u;
label_125f44:
    // 0x125f44: 0xc090864  jal         func_242190
    ctx->pc = 0x125F44u;
    SET_GPR_U32(ctx, 31, 0x125F4Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x125F44u, 0x125F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F4Cu;
label_125f4c:
    // 0x125f4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f50: 0xc090598  jal         func_241660
    ctx->pc = 0x125F50u;
    SET_GPR_U32(ctx, 31, 0x125F58u);
    ctx->pc = 0x241660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241660u, 0x125F50u, 0x125F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F58u;
label_125f58:
    // 0x125f58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f5c: 0xc095bec  jal         func_256FB0
    ctx->pc = 0x125F5Cu;
    SET_GPR_U32(ctx, 31, 0x125F64u);
    ctx->pc = 0x256FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256FB0u, 0x125F5Cu, 0x125F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F64u;
label_125f64:
    // 0x125f64: 0xc048f34  jal         func_123CD0
    ctx->pc = 0x125F64u;
    SET_GPR_U32(ctx, 31, 0x125F6Cu);
    ctx->pc = 0x123CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CD0u, 0x125F64u, 0x125F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F6Cu;
label_125f6c:
    // 0x125f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f70: 0xc08dde0  jal         func_237780
    ctx->pc = 0x125F70u;
    SET_GPR_U32(ctx, 31, 0x125F78u);
    ctx->pc = 0x237780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237780u, 0x125F70u, 0x125F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F78u;
label_125f78:
    // 0x125f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125f7c: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x125f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
    // 0x125f80: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x125F80u;
    {
        const bool branch_taken_0x125f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125f80) {
            ctx->pc = 0x125FF8u;
            goto label_125ff8;
        }
    }
    ctx->pc = 0x125F88u;
label_125f88:
    // 0x125f88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x125f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125f8c: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x125f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
    // 0x125f90: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x125F90u;
    {
        const bool branch_taken_0x125f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125f90) {
            ctx->pc = 0x125FF8u;
            goto label_125ff8;
        }
    }
    ctx->pc = 0x125F98u;
label_125f98:
    // 0x125f98: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x125F98u;
    {
        const bool branch_taken_0x125f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125f98) {
            ctx->pc = 0x125FF8u;
            goto label_125ff8;
        }
    }
    ctx->pc = 0x125FA0u;
label_125fa0:
    // 0x125fa0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x125fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x125fa4: 0xc088560  jal         func_221580
    ctx->pc = 0x125FA4u;
    SET_GPR_U32(ctx, 31, 0x125FACu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x125FA4u, 0x125FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FACu;
label_125fac:
    // 0x125fac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x125facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x125fb0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x125fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x125fb4: 0x24a523e8  addiu       $a1, $a1, 0x23E8
    ctx->pc = 0x125fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9192));
    // 0x125fb8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x125fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x125fbc: 0xc041b24  jal         func_106C90
    ctx->pc = 0x125FBCu;
    SET_GPR_U32(ctx, 31, 0x125FC4u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x125FBCu, 0x125FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FC4u;
label_125fc4:
    // 0x125fc4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x125fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x125fc8: 0x27858b68  addiu       $a1, $gp, -0x7498
    ctx->pc = 0x125fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937448));
    // 0x125fcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x125fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125fd0: 0xc047314  jal         func_11CC50
    ctx->pc = 0x125FD0u;
    SET_GPR_U32(ctx, 31, 0x125FD8u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x125FD0u, 0x125FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FD8u;
label_125fd8:
    // 0x125fd8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x125fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x125fdc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x125fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x125fe0: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x125FE0u;
    SET_GPR_U32(ctx, 31, 0x125FE8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x125FE0u, 0x125FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FE8u;
label_125fe8:
    // 0x125fe8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x125fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x125fec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x125fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125ff0: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x125FF0u;
    SET_GPR_U32(ctx, 31, 0x125FF8u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x125FF0u, 0x125FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FF8u;
label_125ff8:
    // 0x125ff8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x125ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125ffc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x125ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x126004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126008: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x126008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12600c: 0x3e00008  jr          $ra
    ctx->pc = 0x12600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12600Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126014u;
    // 0x126014: 0x0  nop
    ctx->pc = 0x126014u;
    // NOP
    // 0x126018: 0x0  nop
    ctx->pc = 0x126018u;
    // NOP
    // 0x12601c: 0x0  nop
    ctx->pc = 0x12601cu;
    // NOP
    ctx->pc = 0x126020u;
}
