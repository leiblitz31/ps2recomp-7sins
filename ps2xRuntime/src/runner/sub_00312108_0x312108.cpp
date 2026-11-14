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

// Function: sub_00312108
// Address: 0x312108 - 0x312180
void sub_00312108_0x312108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312108_0x312108");
#endif

    switch (ctx->pc) {
        case 0x312134u: goto label_312134;
        default: break;
    }

    ctx->pc = 0x312108u;

    // 0x312108: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x312108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31210c: 0x8f83a574  lw          $v1, -0x5A8C($gp)
    ctx->pc = 0x31210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944116)));
    // 0x312110: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x312110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x312114: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x312118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31211c: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x31211cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x312120: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x312120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x312124: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x312124u;
    {
        const bool branch_taken_0x312124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312124u;
        // 0x312128: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312124) {
            ctx->pc = 0x312160u;
            goto label_312160;
        }
    }
    ctx->pc = 0x31212Cu;
    // 0x31212c: 0xc0e69e4  jal         func_39A790
    ctx->pc = 0x31212Cu;
    SET_GPR_U32(ctx, 31, 0x312134u);
    ctx->pc = 0x312130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31212Cu;
    // 0x312130: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x31212Cu, 0x312134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312134u;
label_312134:
    // 0x312134: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x312134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x312138: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x312138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x31213c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x31213cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312140: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x312140u;
    {
        const bool branch_taken_0x312140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312140u;
        // 0x312144: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312140) {
            ctx->pc = 0x312164u;
            goto label_312164;
        }
    }
    ctx->pc = 0x312148u;
    // 0x312148: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x312148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31214c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31214cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x312150: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x312150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x312154: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x312154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x312158: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x312158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31215c: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x31215cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_312160:
    // 0x312160: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x312160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_312164:
    // 0x312164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312168: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x312168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31216c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31216cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312170: 0x3e00008  jr          $ra
    ctx->pc = 0x312170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312170u;
        // 0x312174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312178u;
    // 0x312178: 0x3e00008  jr          $ra
    ctx->pc = 0x312178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312178u;
        // 0x31217c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312180u;
}
