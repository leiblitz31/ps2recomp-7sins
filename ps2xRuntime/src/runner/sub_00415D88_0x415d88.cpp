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

// Function: sub_00415D88
// Address: 0x415d88 - 0x415de0
void sub_00415D88_0x415d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415D88_0x415d88");
#endif

    switch (ctx->pc) {
        case 0x415dbcu: goto label_415dbc;
        case 0x415dc8u: goto label_415dc8;
        default: break;
    }

    ctx->pc = 0x415d88u;

label_415d88:
    // 0x415d88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x415d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x415d8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x415d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x415d90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x415d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x415d94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x415d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x415d9c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x415D9Cu;
    {
        const bool branch_taken_0x415d9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x415DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415D9Cu;
        // 0x415da0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415d9c) {
            ctx->pc = 0x415DC8u;
            goto label_415dc8;
        }
    }
    ctx->pc = 0x415DA4u;
    // 0x415da4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x415da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x415da8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x415da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x415dac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x415dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x415db0: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x415db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x415db4: 0xc105762  jal         func_415D88
    ctx->pc = 0x415DB4u;
    SET_GPR_U32(ctx, 31, 0x415DBCu);
    ctx->pc = 0x415DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415DB4u;
    // 0x415db8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415D88u;
    goto label_415d88;
    ctx->pc = 0x415DBCu;
label_415dbc:
    // 0x415dbc: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x415dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x415dc0: 0xc105762  jal         func_415D88
    ctx->pc = 0x415DC0u;
    SET_GPR_U32(ctx, 31, 0x415DC8u);
    ctx->pc = 0x415DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415DC0u;
    // 0x415dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415D88u;
    goto label_415d88;
    ctx->pc = 0x415DC8u;
label_415dc8:
    // 0x415dc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x415dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x415dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x415dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x415dd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x415dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x415dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x415dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x415DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415DD8u;
        // 0x415ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415DE0u;
}
