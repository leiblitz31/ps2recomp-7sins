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

// Function: sub_0049A010
// Address: 0x49a010 - 0x49a068
void sub_0049A010_0x49a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A010_0x49a010");
#endif

    switch (ctx->pc) {
        case 0x49a038u: goto label_49a038;
        default: break;
    }

    ctx->pc = 0x49a010u;

    // 0x49a010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49a014: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49a014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49a018: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49a018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x49a01c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49a020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a024: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x49a024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49a028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49a02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49a02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a030: 0xc12732e  jal         func_49CCB8
    ctx->pc = 0x49A030u;
    SET_GPR_U32(ctx, 31, 0x49A038u);
    ctx->pc = 0x49A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A030u;
    // 0x49a034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49CCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49CCB8u, 0x49A030u, 0x49A038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A038u;
label_49a038:
    // 0x49a038: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49A038u;
    {
        const bool branch_taken_0x49a038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A038u;
        // 0x49a03c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a038) {
            ctx->pc = 0x49A04Cu;
            goto label_49a04c;
        }
    }
    ctx->pc = 0x49A040u;
    // 0x49a040: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x49a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x49a044: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49A044u;
    {
        const bool branch_taken_0x49a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A044u;
        // 0x49a048: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a044) {
            ctx->pc = 0x49A050u;
            goto label_49a050;
        }
    }
    ctx->pc = 0x49A04Cu;
label_49a04c:
    // 0x49a04c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49a04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a050:
    // 0x49a050: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49a050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49a054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a05c: 0x3e00008  jr          $ra
    ctx->pc = 0x49A05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A05Cu;
        // 0x49a060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A064u;
    // 0x49a064: 0x0  nop
    ctx->pc = 0x49a064u;
    // NOP
    ctx->pc = 0x49a068u;
}
