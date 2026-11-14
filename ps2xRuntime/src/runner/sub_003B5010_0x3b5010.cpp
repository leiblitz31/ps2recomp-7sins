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

// Function: sub_003B5010
// Address: 0x3b5010 - 0x3b5040
void sub_003B5010_0x3b5010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5010_0x3b5010");
#endif

    switch (ctx->pc) {
        case 0x3b502cu: goto label_3b502c;
        default: break;
    }

    ctx->pc = 0x3b5010u;

    // 0x3b5010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b5010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b5014: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b5014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b5018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b5018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b501c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3b501cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x3b5020: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x3b5020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
    // 0x3b5024: 0xc104284  jal         func_410A10
    ctx->pc = 0x3B5024u;
    SET_GPR_U32(ctx, 31, 0x3B502Cu);
    ctx->pc = 0x3B5028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5024u;
    // 0x3b5028: 0x8e04052c  lw          $a0, 0x52C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x3B5024u, 0x3B502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B502Cu;
label_3b502c:
    // 0x3b502c: 0xae00052c  sw          $zero, 0x52C($s0)
    ctx->pc = 0x3b502cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1324), GPR_U32(ctx, 0));
    // 0x3b5030: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b5030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5038: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5038u;
        // 0x3b503c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5040u;
}
