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

// Function: sub_0014A6E0
// Address: 0x14a6e0 - 0x14a870
void sub_0014A6E0_0x14a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A6E0_0x14a6e0");
#endif

    switch (ctx->pc) {
        case 0x14a710u: goto label_14a710;
        case 0x14a71cu: goto label_14a71c;
        case 0x14a730u: goto label_14a730;
        case 0x14a740u: goto label_14a740;
        case 0x14a750u: goto label_14a750;
        case 0x14a758u: goto label_14a758;
        case 0x14a764u: goto label_14a764;
        case 0x14a774u: goto label_14a774;
        case 0x14a788u: goto label_14a788;
        case 0x14a798u: goto label_14a798;
        case 0x14a7acu: goto label_14a7ac;
        case 0x14a7bcu: goto label_14a7bc;
        case 0x14a7d4u: goto label_14a7d4;
        case 0x14a7e0u: goto label_14a7e0;
        case 0x14a7f4u: goto label_14a7f4;
        case 0x14a804u: goto label_14a804;
        case 0x14a80cu: goto label_14a80c;
        case 0x14a818u: goto label_14a818;
        case 0x14a828u: goto label_14a828;
        case 0x14a83cu: goto label_14a83c;
        case 0x14a84cu: goto label_14a84c;
        default: break;
    }

    ctx->pc = 0x14a6e0u;

    // 0x14a6e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14a6e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a6e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a6ec: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x14a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x14a6f0: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x14a6f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14a6f4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x14a6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a6f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a6fc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x14a6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x14a700: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a704: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x14a704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14a708: 0xc052bdc  jal         func_14AF70
    ctx->pc = 0x14A708u;
    SET_GPR_U32(ctx, 31, 0x14A710u);
    ctx->pc = 0x14AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF70u, 0x14A708u, 0x14A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A710u;
label_14a710:
    // 0x14a710: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x14a710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14a714: 0xc047060  jal         func_11C180
    ctx->pc = 0x14A714u;
    SET_GPR_U32(ctx, 31, 0x14A71Cu);
    ctx->pc = 0x11C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C180u, 0x14A714u, 0x14A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A71Cu;
label_14a71c:
    // 0x14a71c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a720: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x14a720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14a724: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x14a724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14a728: 0xc047038  jal         func_11C0E0
    ctx->pc = 0x14A728u;
    SET_GPR_U32(ctx, 31, 0x14A730u);
    ctx->pc = 0x11C0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0E0u, 0x14A728u, 0x14A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A730u;
label_14a730:
    // 0x14a730: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x14a730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x14a734: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x14a734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14a738: 0xc04702c  jal         func_11C0B0
    ctx->pc = 0x14A738u;
    SET_GPR_U32(ctx, 31, 0x14A740u);
    ctx->pc = 0x11C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0B0u, 0x14A738u, 0x14A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A740u;
label_14a740:
    // 0x14a740: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x14a740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14a744: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14a744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a748: 0xc04701c  jal         func_11C070
    ctx->pc = 0x14A748u;
    SET_GPR_U32(ctx, 31, 0x14A750u);
    ctx->pc = 0x11C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C070u, 0x14A748u, 0x14A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A750u;
label_14a750:
    // 0x14a750: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14A750u;
    {
        const bool branch_taken_0x14a750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a750) {
            ctx->pc = 0x14A798u;
            goto label_14a798;
        }
    }
    ctx->pc = 0x14A758u;
label_14a758:
    // 0x14a758: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x14a758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14a75c: 0xc047008  jal         func_11C020
    ctx->pc = 0x14A75Cu;
    SET_GPR_U32(ctx, 31, 0x14A764u);
    ctx->pc = 0x11C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C020u, 0x14A75Cu, 0x14A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A764u;
label_14a764:
    // 0x14a764: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x14a764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14a768: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x14a768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14a76c: 0xc047008  jal         func_11C020
    ctx->pc = 0x14A76Cu;
    SET_GPR_U32(ctx, 31, 0x14A774u);
    ctx->pc = 0x11C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C020u, 0x14A76Cu, 0x14A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A774u;
label_14a774:
    // 0x14a774: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x14a774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a778: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x14a778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14a77c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14a77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a780: 0xc052aa4  jal         func_14AA90
    ctx->pc = 0x14A780u;
    SET_GPR_U32(ctx, 31, 0x14A788u);
    ctx->pc = 0x14AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA90u, 0x14A780u, 0x14A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A788u;
label_14a788:
    // 0x14a788: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x14a788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x14a78c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x14a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14a790: 0xc046ff8  jal         func_11BFE0
    ctx->pc = 0x14A790u;
    SET_GPR_U32(ctx, 31, 0x14A798u);
    ctx->pc = 0x11BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BFE0u, 0x14A790u, 0x14A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A798u;
label_14a798:
    // 0x14a798: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14a798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a79c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x14a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x14a7a0: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x14a7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14a7a4: 0xc046fcc  jal         func_11BF30
    ctx->pc = 0x14A7A4u;
    SET_GPR_U32(ctx, 31, 0x14A7ACu);
    ctx->pc = 0x11BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BF30u, 0x14A7A4u, 0x14A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7ACu;
label_14a7ac:
    // 0x14a7ac: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x14a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14a7b0: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x14a7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x14a7b4: 0xc041998  jal         func_106660
    ctx->pc = 0x14A7B4u;
    SET_GPR_U32(ctx, 31, 0x14A7BCu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x14A7B4u, 0x14A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7BCu;
label_14a7bc:
    // 0x14a7bc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x14A7BCu;
    {
        const bool branch_taken_0x14a7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a7bc) {
            ctx->pc = 0x14A758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a758;
        }
    }
    ctx->pc = 0x14A7C4u;
    // 0x14a7c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a7c8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x14a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14a7cc: 0xc052bdc  jal         func_14AF70
    ctx->pc = 0x14A7CCu;
    SET_GPR_U32(ctx, 31, 0x14A7D4u);
    ctx->pc = 0x14AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF70u, 0x14A7CCu, 0x14A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7D4u;
label_14a7d4:
    // 0x14a7d4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x14a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x14a7d8: 0xc052a9c  jal         func_14AA70
    ctx->pc = 0x14A7D8u;
    SET_GPR_U32(ctx, 31, 0x14A7E0u);
    ctx->pc = 0x14AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA70u, 0x14A7D8u, 0x14A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7E0u;
label_14a7e0:
    // 0x14a7e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a7e4: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x14a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x14a7e8: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x14a7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x14a7ec: 0xc052a7c  jal         func_14A9F0
    ctx->pc = 0x14A7ECu;
    SET_GPR_U32(ctx, 31, 0x14A7F4u);
    ctx->pc = 0x14A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A9F0u, 0x14A7ECu, 0x14A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7F4u;
label_14a7f4:
    // 0x14a7f4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x14a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x14a7f8: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x14a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x14a7fc: 0xc052a6c  jal         func_14A9B0
    ctx->pc = 0x14A7FCu;
    SET_GPR_U32(ctx, 31, 0x14A804u);
    ctx->pc = 0x14A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A9B0u, 0x14A7FCu, 0x14A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A804u;
label_14a804:
    // 0x14a804: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14A804u;
    {
        const bool branch_taken_0x14a804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a804) {
            ctx->pc = 0x14A828u;
            goto label_14a828;
        }
    }
    ctx->pc = 0x14A80Cu;
label_14a80c:
    // 0x14a80c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x14a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x14a810: 0xc052a58  jal         func_14A960
    ctx->pc = 0x14A810u;
    SET_GPR_U32(ctx, 31, 0x14A818u);
    ctx->pc = 0x14A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A960u, 0x14A810u, 0x14A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A818u;
label_14a818:
    // 0x14a818: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x14a818u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a81c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x14a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x14a820: 0xc052a48  jal         func_14A920
    ctx->pc = 0x14A820u;
    SET_GPR_U32(ctx, 31, 0x14A828u);
    ctx->pc = 0x14A920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A920u, 0x14A820u, 0x14A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A828u;
label_14a828:
    // 0x14a828: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a82c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x14a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x14a830: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x14a830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x14a834: 0xc052a1c  jal         func_14A870
    ctx->pc = 0x14A834u;
    SET_GPR_U32(ctx, 31, 0x14A83Cu);
    ctx->pc = 0x14A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A870u, 0x14A834u, 0x14A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A83Cu;
label_14a83c:
    // 0x14a83c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x14a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x14a840: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x14a840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x14a844: 0xc041998  jal         func_106660
    ctx->pc = 0x14A844u;
    SET_GPR_U32(ctx, 31, 0x14A84Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x14A844u, 0x14A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A84Cu;
label_14a84c:
    // 0x14a84c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14A84Cu;
    {
        const bool branch_taken_0x14a84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a84c) {
            ctx->pc = 0x14A80Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a80c;
        }
    }
    ctx->pc = 0x14A854u;
    // 0x14a854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a85c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x14a85cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14a860: 0x3e00008  jr          $ra
    ctx->pc = 0x14A860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A868u;
    // 0x14a868: 0x0  nop
    ctx->pc = 0x14a868u;
    // NOP
    // 0x14a86c: 0x0  nop
    ctx->pc = 0x14a86cu;
    // NOP
    ctx->pc = 0x14a870u;
}
