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

// Function: sub_00159C60
// Address: 0x159c60 - 0x159d20
void sub_00159C60_0x159c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159C60_0x159c60");
#endif

    switch (ctx->pc) {
        case 0x159c88u: goto label_159c88;
        case 0x159ca0u: goto label_159ca0;
        case 0x159cb8u: goto label_159cb8;
        case 0x159cccu: goto label_159ccc;
        case 0x159ce0u: goto label_159ce0;
        case 0x159cf0u: goto label_159cf0;
        case 0x159d0cu: goto label_159d0c;
        default: break;
    }

    ctx->pc = 0x159c60u;

    // 0x159c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x159c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x159c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159c6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x159c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x159c70: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x159c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x159c74: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x159c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x159c78: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x159c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159c7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x159c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159c80: 0xc05611c  jal         func_158470
    ctx->pc = 0x159C80u;
    SET_GPR_U32(ctx, 31, 0x159C88u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x159C80u, 0x159C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159C88u;
label_159c88:
    // 0x159c88: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x159c88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x159c8c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x159C8Cu;
    {
        const bool branch_taken_0x159c8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159c8c) {
            ctx->pc = 0x159CD4u;
            goto label_159cd4;
        }
    }
    ctx->pc = 0x159C94u;
    // 0x159c94: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x159c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159c98: 0xc056144  jal         func_158510
    ctx->pc = 0x159C98u;
    SET_GPR_U32(ctx, 31, 0x159CA0u);
    ctx->pc = 0x158510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158510u, 0x159C98u, 0x159CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CA0u;
label_159ca0:
    // 0x159ca0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x159ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159ca4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x159ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x159ca8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x159ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159cac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x159cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159cb0: 0xc05613c  jal         func_1584F0
    ctx->pc = 0x159CB0u;
    SET_GPR_U32(ctx, 31, 0x159CB8u);
    ctx->pc = 0x1584F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584F0u, 0x159CB0u, 0x159CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CB8u;
label_159cb8:
    // 0x159cb8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x159cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x159cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159cc4: 0xc056758  jal         func_159D60
    ctx->pc = 0x159CC4u;
    SET_GPR_U32(ctx, 31, 0x159CCCu);
    ctx->pc = 0x159D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159D60u, 0x159CC4u, 0x159CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CCCu;
label_159ccc:
    // 0x159ccc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x159CCCu;
    {
        const bool branch_taken_0x159ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159ccc) {
            ctx->pc = 0x159D0Cu;
            goto label_159d0c;
        }
    }
    ctx->pc = 0x159CD4u;
label_159cd4:
    // 0x159cd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x159cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159cd8: 0xc05613c  jal         func_1584F0
    ctx->pc = 0x159CD8u;
    SET_GPR_U32(ctx, 31, 0x159CE0u);
    ctx->pc = 0x1584F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584F0u, 0x159CD8u, 0x159CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CE0u;
label_159ce0:
    // 0x159ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x159ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ce4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x159ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159ce8: 0xc05611c  jal         func_158470
    ctx->pc = 0x159CE8u;
    SET_GPR_U32(ctx, 31, 0x159CF0u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x159CE8u, 0x159CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CF0u;
label_159cf0:
    // 0x159cf0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x159cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159cf4: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x159cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x159cf8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x159cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159cfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d00: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x159d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159d04: 0xc056748  jal         func_159D20
    ctx->pc = 0x159D04u;
    SET_GPR_U32(ctx, 31, 0x159D0Cu);
    ctx->pc = 0x159D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159D20u, 0x159D04u, 0x159D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D0Cu;
label_159d0c:
    // 0x159d0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159d14: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x159d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159d18: 0x3e00008  jr          $ra
    ctx->pc = 0x159D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159D20u;
}
