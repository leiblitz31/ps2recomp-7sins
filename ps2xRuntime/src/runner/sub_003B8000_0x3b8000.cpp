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

// Function: sub_003B8000
// Address: 0x3b8000 - 0x3b8048
void sub_003B8000_0x3b8000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8000_0x3b8000");
#endif

    switch (ctx->pc) {
        case 0x3b8020u: goto label_3b8020;
        default: break;
    }

    ctx->pc = 0x3b8000u;

    // 0x3b8000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b8000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b8004: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b8004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b8008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b8008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b800c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b800cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b8010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b8014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b8014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8018: 0xc0ed374  jal         func_3B4DD0
    ctx->pc = 0x3B8018u;
    SET_GPR_U32(ctx, 31, 0x3B8020u);
    ctx->pc = 0x3B801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8018u;
    // 0x3b801c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4DD0u, 0x3B8018u, 0x3B8020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8020u;
label_3b8020:
    // 0x3b8020: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b8020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b8024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b8024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8028: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b8028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b802c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b802cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3b8030: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b8030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8034: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b8034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b8038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b8038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b803c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B803Cu;
        // 0x3b8040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B803Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8044u;
    // 0x3b8044: 0x0  nop
    ctx->pc = 0x3b8044u;
    // NOP
    ctx->pc = 0x3b8048u;
}
