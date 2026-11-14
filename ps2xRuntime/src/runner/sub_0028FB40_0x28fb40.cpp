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

// Function: sub_0028FB40
// Address: 0x28fb40 - 0x28fba0
void sub_0028FB40_0x28fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FB40_0x28fb40");
#endif

    switch (ctx->pc) {
        case 0x28fb64u: goto label_28fb64;
        case 0x28fb80u: goto label_28fb80;
        default: break;
    }

    ctx->pc = 0x28fb40u;

    // 0x28fb40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28fb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28fb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28fb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28fb48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28fb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28fb4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28fb50: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28fb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28fb54: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x28fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x28fb58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x28fb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fb5c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x28FB5Cu;
    SET_GPR_U32(ctx, 31, 0x28FB64u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x28FB5Cu, 0x28FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB64u;
label_28fb64:
    // 0x28fb64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28fb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb68: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FB68u;
    {
        const bool branch_taken_0x28fb68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fb68) {
            ctx->pc = 0x28FB84u;
            goto label_28fb84;
        }
    }
    ctx->pc = 0x28FB70u;
    // 0x28fb70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb74: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28fb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fb78: 0xc0a3ee8  jal         func_28FBA0
    ctx->pc = 0x28FB78u;
    SET_GPR_U32(ctx, 31, 0x28FB80u);
    ctx->pc = 0x28FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FBA0u, 0x28FB78u, 0x28FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB80u;
label_28fb80:
    // 0x28fb80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28fb80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28fb84:
    // 0x28fb84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28fb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fb88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28fb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fb8c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28fb8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28fb90: 0x3e00008  jr          $ra
    ctx->pc = 0x28FB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FB98u;
    // 0x28fb98: 0x0  nop
    ctx->pc = 0x28fb98u;
    // NOP
    // 0x28fb9c: 0x0  nop
    ctx->pc = 0x28fb9cu;
    // NOP
    ctx->pc = 0x28fba0u;
}
