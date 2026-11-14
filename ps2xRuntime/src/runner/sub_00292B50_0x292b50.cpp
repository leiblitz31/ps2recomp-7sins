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

// Function: sub_00292B50
// Address: 0x292b50 - 0x292c10
void sub_00292B50_0x292b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292B50_0x292b50");
#endif

    switch (ctx->pc) {
        case 0x292b78u: goto label_292b78;
        case 0x292b90u: goto label_292b90;
        case 0x292ba8u: goto label_292ba8;
        case 0x292bbcu: goto label_292bbc;
        case 0x292bd0u: goto label_292bd0;
        case 0x292be0u: goto label_292be0;
        case 0x292bfcu: goto label_292bfc;
        default: break;
    }

    ctx->pc = 0x292b50u;

    // 0x292b50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x292b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x292b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292b5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x292b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x292b60: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x292b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x292b64: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x292b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x292b68: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x292b68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292b6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x292b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292b70: 0xc0a4838  jal         func_2920E0
    ctx->pc = 0x292B70u;
    SET_GPR_U32(ctx, 31, 0x292B78u);
    ctx->pc = 0x2920E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920E0u, 0x292B70u, 0x292B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B78u;
label_292b78:
    // 0x292b78: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x292b78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x292b7c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x292B7Cu;
    {
        const bool branch_taken_0x292b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x292b7c) {
            ctx->pc = 0x292BC4u;
            goto label_292bc4;
        }
    }
    ctx->pc = 0x292B84u;
    // 0x292b84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x292b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292b88: 0xc0a4ab4  jal         func_292AD0
    ctx->pc = 0x292B88u;
    SET_GPR_U32(ctx, 31, 0x292B90u);
    ctx->pc = 0x292AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292AD0u, 0x292B88u, 0x292B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B90u;
label_292b90:
    // 0x292b90: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x292b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292b94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x292b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x292b98: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x292b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292b9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x292b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292ba0: 0xc0a4b78  jal         func_292DE0
    ctx->pc = 0x292BA0u;
    SET_GPR_U32(ctx, 31, 0x292BA8u);
    ctx->pc = 0x292DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292DE0u, 0x292BA0u, 0x292BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BA8u;
label_292ba8:
    // 0x292ba8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x292ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292bac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x292bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bb4: 0xc0a4b14  jal         func_292C50
    ctx->pc = 0x292BB4u;
    SET_GPR_U32(ctx, 31, 0x292BBCu);
    ctx->pc = 0x292C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292C50u, 0x292BB4u, 0x292BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BBCu;
label_292bbc:
    // 0x292bbc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x292BBCu;
    {
        const bool branch_taken_0x292bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292bbc) {
            ctx->pc = 0x292BFCu;
            goto label_292bfc;
        }
    }
    ctx->pc = 0x292BC4u;
label_292bc4:
    // 0x292bc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x292bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292bc8: 0xc0a4b78  jal         func_292DE0
    ctx->pc = 0x292BC8u;
    SET_GPR_U32(ctx, 31, 0x292BD0u);
    ctx->pc = 0x292DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292DE0u, 0x292BC8u, 0x292BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BD0u;
label_292bd0:
    // 0x292bd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x292bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292bd8: 0xc0a4838  jal         func_2920E0
    ctx->pc = 0x292BD8u;
    SET_GPR_U32(ctx, 31, 0x292BE0u);
    ctx->pc = 0x2920E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920E0u, 0x292BD8u, 0x292BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BE0u;
label_292be0:
    // 0x292be0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x292be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292be4: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x292be4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292be8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x292be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292bec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bf0: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x292bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292bf4: 0xc0a4b04  jal         func_292C10
    ctx->pc = 0x292BF4u;
    SET_GPR_U32(ctx, 31, 0x292BFCu);
    ctx->pc = 0x292C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292C10u, 0x292BF4u, 0x292BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BFCu;
label_292bfc:
    // 0x292bfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292c04: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x292c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x292c08: 0x3e00008  jr          $ra
    ctx->pc = 0x292C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292C10u;
}
