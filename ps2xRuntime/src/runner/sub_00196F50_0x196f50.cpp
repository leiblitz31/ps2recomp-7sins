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

// Function: sub_00196F50
// Address: 0x196f50 - 0x197010
void sub_00196F50_0x196f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196F50_0x196f50");
#endif

    switch (ctx->pc) {
        case 0x196f78u: goto label_196f78;
        case 0x196f90u: goto label_196f90;
        case 0x196fa8u: goto label_196fa8;
        case 0x196fbcu: goto label_196fbc;
        case 0x196fd0u: goto label_196fd0;
        case 0x196fe0u: goto label_196fe0;
        case 0x196ffcu: goto label_196ffc;
        default: break;
    }

    ctx->pc = 0x196f50u;

    // 0x196f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x196f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x196f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x196f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196f5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x196f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x196f60: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x196f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x196f64: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x196f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x196f68: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x196f68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196f6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x196f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196f70: 0xc065c84  jal         func_197210
    ctx->pc = 0x196F70u;
    SET_GPR_U32(ctx, 31, 0x196F78u);
    ctx->pc = 0x197210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197210u, 0x196F70u, 0x196F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F78u;
label_196f78:
    // 0x196f78: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x196f78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x196f7c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x196F7Cu;
    {
        const bool branch_taken_0x196f7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x196f7c) {
            ctx->pc = 0x196FC4u;
            goto label_196fc4;
        }
    }
    ctx->pc = 0x196F84u;
    // 0x196f84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x196f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196f88: 0xc065708  jal         func_195C20
    ctx->pc = 0x196F88u;
    SET_GPR_U32(ctx, 31, 0x196F90u);
    ctx->pc = 0x195C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195C20u, 0x196F88u, 0x196F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F90u;
label_196f90:
    // 0x196f90: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x196f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196f94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x196f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x196f98: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x196f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196f9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x196f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196fa0: 0xc065c7c  jal         func_1971F0
    ctx->pc = 0x196FA0u;
    SET_GPR_U32(ctx, 31, 0x196FA8u);
    ctx->pc = 0x1971F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1971F0u, 0x196FA0u, 0x196FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196FA8u;
label_196fa8:
    // 0x196fa8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x196fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196fac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x196facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x196fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fb4: 0xc065c14  jal         func_197050
    ctx->pc = 0x196FB4u;
    SET_GPR_U32(ctx, 31, 0x196FBCu);
    ctx->pc = 0x197050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197050u, 0x196FB4u, 0x196FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196FBCu;
label_196fbc:
    // 0x196fbc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x196FBCu;
    {
        const bool branch_taken_0x196fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196fbc) {
            ctx->pc = 0x196FFCu;
            goto label_196ffc;
        }
    }
    ctx->pc = 0x196FC4u;
label_196fc4:
    // 0x196fc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x196fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196fc8: 0xc065c7c  jal         func_1971F0
    ctx->pc = 0x196FC8u;
    SET_GPR_U32(ctx, 31, 0x196FD0u);
    ctx->pc = 0x1971F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1971F0u, 0x196FC8u, 0x196FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196FD0u;
label_196fd0:
    // 0x196fd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x196fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196fd8: 0xc065c84  jal         func_197210
    ctx->pc = 0x196FD8u;
    SET_GPR_U32(ctx, 31, 0x196FE0u);
    ctx->pc = 0x197210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197210u, 0x196FD8u, 0x196FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196FE0u;
label_196fe0:
    // 0x196fe0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x196fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196fe4: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x196fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196fe8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x196fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196fec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x196fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ff0: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x196ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196ff4: 0xc065c04  jal         func_197010
    ctx->pc = 0x196FF4u;
    SET_GPR_U32(ctx, 31, 0x196FFCu);
    ctx->pc = 0x197010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197010u, 0x196FF4u, 0x196FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196FFCu;
label_196ffc:
    // 0x196ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197004: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x197004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x197008: 0x3e00008  jr          $ra
    ctx->pc = 0x197008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197010u;
}
