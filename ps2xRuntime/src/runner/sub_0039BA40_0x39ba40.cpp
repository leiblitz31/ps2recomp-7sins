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

// Function: sub_0039BA40
// Address: 0x39ba40 - 0x39ba88
void sub_0039BA40_0x39ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BA40_0x39ba40");
#endif

    switch (ctx->pc) {
        case 0x39ba6cu: goto label_39ba6c;
        default: break;
    }

    ctx->pc = 0x39ba40u;

    // 0x39ba40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39ba44: 0x8f82a9e4  lw          $v0, -0x561C($gp)
    ctx->pc = 0x39ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945252)));
    // 0x39ba48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39ba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x39ba4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39ba50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ba50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ba54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39ba58: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x39ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x39ba5c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39BA5Cu;
    {
        const bool branch_taken_0x39ba5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA5Cu;
        // 0x39ba60: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ba5c) {
            ctx->pc = 0x39BA6Cu;
            goto label_39ba6c;
        }
    }
    ctx->pc = 0x39BA64u;
    // 0x39ba64: 0xc106794  jal         func_419E50
    ctx->pc = 0x39BA64u;
    SET_GPR_U32(ctx, 31, 0x39BA6Cu);
    ctx->pc = 0x39BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BA64u;
    // 0x39ba68: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x39BA64u, 0x39BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA6Cu;
label_39ba6c:
    // 0x39ba6c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x39ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x39ba70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39ba70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ba74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39ba74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39ba78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39ba78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ba7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ba7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ba80: 0x3e00008  jr          $ra
    ctx->pc = 0x39BA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA80u;
        // 0x39ba84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BA88u;
}
