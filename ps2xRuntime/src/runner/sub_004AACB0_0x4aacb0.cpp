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

// Function: sub_004AACB0
// Address: 0x4aacb0 - 0x4aad18
void sub_004AACB0_0x4aacb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AACB0_0x4aacb0");
#endif

    switch (ctx->pc) {
        case 0x4aacdcu: goto label_4aacdc;
        default: break;
    }

    ctx->pc = 0x4aacb0u;

    // 0x4aacb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aacb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aacb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4aacb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4aacb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4aacb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4aacbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aacbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aacc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4aacc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aacc4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4aacc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4aacc8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4aacc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4aaccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aacccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aacd0: 0x34a50804  ori         $a1, $a1, 0x804
    ctx->pc = 0x4aacd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2052);
    // 0x4aacd4: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x4AACD4u;
    SET_GPR_U32(ctx, 31, 0x4AACDCu);
    ctx->pc = 0x4AACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AACD4u;
    // 0x4aacd8: 0x248488f8  addiu       $a0, $a0, -0x7708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4AACD4u, 0x4AACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AACDCu;
label_4aacdc:
    // 0x4aacdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4aacdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aace0: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AACE0u;
    {
        const bool branch_taken_0x4aace0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aace0) {
            ctx->pc = 0x4AACE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AACE0u;
            // 0x4aace4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAD04u;
            goto label_4aad04;
        }
    }
    ctx->pc = 0x4AACE8u;
    // 0x4aace8: 0xacb10008  sw          $s1, 0x8($a1)
    ctx->pc = 0x4aace8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 17));
    // 0x4aacec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4aacecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aacf0: 0xacb00004  sw          $s0, 0x4($a1)
    ctx->pc = 0x4aacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x4aacf4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4aacf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4aacf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4aacf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aacfc: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x4aacfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x4aad00: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4aad00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_4aad04:
    // 0x4aad04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4aad04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aad08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4aad08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aad0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aad0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aad10: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAD10u;
        // 0x4aad14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAD18u;
}
