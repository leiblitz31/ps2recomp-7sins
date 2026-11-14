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

// Function: sub_002A2C30
// Address: 0x2a2c30 - 0x2a2cf0
void sub_002A2C30_0x2a2c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2C30_0x2a2c30");
#endif

    switch (ctx->pc) {
        case 0x2a2c58u: goto label_2a2c58;
        case 0x2a2c70u: goto label_2a2c70;
        case 0x2a2c88u: goto label_2a2c88;
        case 0x2a2c9cu: goto label_2a2c9c;
        case 0x2a2cb0u: goto label_2a2cb0;
        case 0x2a2cc0u: goto label_2a2cc0;
        case 0x2a2cdcu: goto label_2a2cdc;
        default: break;
    }

    ctx->pc = 0x2a2c30u;

    // 0x2a2c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a2c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a2c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a2c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a2c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2c3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a2c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2a2c40: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2a2c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2a2c44: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2a2c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2a2c48: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x2a2c48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2c4c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a2c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2c50: 0xc041968  jal         func_1065A0
    ctx->pc = 0x2A2C50u;
    SET_GPR_U32(ctx, 31, 0x2A2C58u);
    ctx->pc = 0x1065A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1065A0u, 0x2A2C50u, 0x2A2C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C58u;
label_2a2c58:
    // 0x2a2c58: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x2a2c58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a2c5c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A2C5Cu;
    {
        const bool branch_taken_0x2a2c5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2c5c) {
            ctx->pc = 0x2A2CA4u;
            goto label_2a2ca4;
        }
    }
    ctx->pc = 0x2A2C64u;
    // 0x2a2c64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a2c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2c68: 0xc041db8  jal         func_1076E0
    ctx->pc = 0x2A2C68u;
    SET_GPR_U32(ctx, 31, 0x2A2C70u);
    ctx->pc = 0x1076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076E0u, 0x2A2C68u, 0x2A2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C70u;
label_2a2c70:
    // 0x2a2c70: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2c74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a2c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a2c78: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2a2c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2c7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2c80: 0xc041db0  jal         func_1076C0
    ctx->pc = 0x2A2C80u;
    SET_GPR_U32(ctx, 31, 0x2A2C88u);
    ctx->pc = 0x1076C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076C0u, 0x2A2C80u, 0x2A2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C88u;
label_2a2c88:
    // 0x2a2c88: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a2c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2c8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a2c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c94: 0xc041d84  jal         func_107610
    ctx->pc = 0x2A2C94u;
    SET_GPR_U32(ctx, 31, 0x2A2C9Cu);
    ctx->pc = 0x107610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107610u, 0x2A2C94u, 0x2A2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C9Cu;
label_2a2c9c:
    // 0x2a2c9c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A2C9Cu;
    {
        const bool branch_taken_0x2a2c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2c9c) {
            ctx->pc = 0x2A2CDCu;
            goto label_2a2cdc;
        }
    }
    ctx->pc = 0x2A2CA4u;
label_2a2ca4:
    // 0x2a2ca4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a2ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2ca8: 0xc041db0  jal         func_1076C0
    ctx->pc = 0x2A2CA8u;
    SET_GPR_U32(ctx, 31, 0x2A2CB0u);
    ctx->pc = 0x1076C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076C0u, 0x2A2CA8u, 0x2A2CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CB0u;
label_2a2cb0:
    // 0x2a2cb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a2cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2cb4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a2cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2cb8: 0xc041968  jal         func_1065A0
    ctx->pc = 0x2A2CB8u;
    SET_GPR_U32(ctx, 31, 0x2A2CC0u);
    ctx->pc = 0x1065A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1065A0u, 0x2A2CB8u, 0x2A2CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CC0u;
label_2a2cc0:
    // 0x2a2cc0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2cc4: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x2a2cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a2cc8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2cd0: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2a2cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2cd4: 0xc0a8b3c  jal         func_2A2CF0
    ctx->pc = 0x2A2CD4u;
    SET_GPR_U32(ctx, 31, 0x2A2CDCu);
    ctx->pc = 0x2A2CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CF0u, 0x2A2CD4u, 0x2A2CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CDCu;
label_2a2cdc:
    // 0x2a2cdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a2cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2ce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2ce4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a2ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a2ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2CF0u;
}
