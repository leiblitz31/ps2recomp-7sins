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

// Function: sub_0022BB30
// Address: 0x22bb30 - 0x22bb90
void sub_0022BB30_0x22bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BB30_0x22bb30");
#endif

    switch (ctx->pc) {
        case 0x22bb54u: goto label_22bb54;
        case 0x22bb70u: goto label_22bb70;
        default: break;
    }

    ctx->pc = 0x22bb30u;

    // 0x22bb30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22bb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22bb34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22bb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22bb38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22bb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22bb3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22bb40: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22bb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22bb44: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22bb48: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22bb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bb4c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22BB4Cu;
    SET_GPR_U32(ctx, 31, 0x22BB54u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22BB4Cu, 0x22BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB54u;
label_22bb54:
    // 0x22bb54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22bb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb58: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22BB58u;
    {
        const bool branch_taken_0x22bb58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bb58) {
            ctx->pc = 0x22BB74u;
            goto label_22bb74;
        }
    }
    ctx->pc = 0x22BB60u;
    // 0x22bb60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb64: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22bb68: 0xc08aee4  jal         func_22BB90
    ctx->pc = 0x22BB68u;
    SET_GPR_U32(ctx, 31, 0x22BB70u);
    ctx->pc = 0x22BB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB90u, 0x22BB68u, 0x22BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB70u;
label_22bb70:
    // 0x22bb70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22bb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22bb74:
    // 0x22bb74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22bb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bb78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22bb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bb7c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22bb7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22bb80: 0x3e00008  jr          $ra
    ctx->pc = 0x22BB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BB88u;
    // 0x22bb88: 0x0  nop
    ctx->pc = 0x22bb88u;
    // NOP
    // 0x22bb8c: 0x0  nop
    ctx->pc = 0x22bb8cu;
    // NOP
    ctx->pc = 0x22bb90u;
}
