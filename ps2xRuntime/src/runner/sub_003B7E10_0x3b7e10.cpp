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

// Function: sub_003B7E10
// Address: 0x3b7e10 - 0x3b7e80
void sub_003B7E10_0x3b7e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7E10_0x3b7e10");
#endif

    switch (ctx->pc) {
        case 0x3b7e2cu: goto label_3b7e2c;
        case 0x3b7e44u: goto label_3b7e44;
        case 0x3b7e54u: goto label_3b7e54;
        default: break;
    }

    ctx->pc = 0x3b7e10u;

    // 0x3b7e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b7e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b7e14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b7e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b7e18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b7e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b7e1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b7e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b7e24: 0xc0ed254  jal         func_3B4950
    ctx->pc = 0x3B7E24u;
    SET_GPR_U32(ctx, 31, 0x3B7E2Cu);
    ctx->pc = 0x3B7E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7E24u;
    // 0x3b7e28: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4950u, 0x3B7E24u, 0x3B7E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7E2Cu;
label_3b7e2c:
    // 0x3b7e2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B7E2Cu;
    {
        const bool branch_taken_0x3b7e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E2Cu;
        // 0x3b7e30: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e2c) {
            ctx->pc = 0x3B7E4Cu;
            goto label_3b7e4c;
        }
    }
    ctx->pc = 0x3B7E34u;
    // 0x3b7e34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b7e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7e38: 0x24a57e10  addiu       $a1, $a1, 0x7E10
    ctx->pc = 0x3b7e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32272));
    // 0x3b7e3c: 0xc0ede40  jal         func_3B7900
    ctx->pc = 0x3B7E3Cu;
    SET_GPR_U32(ctx, 31, 0x3B7E44u);
    ctx->pc = 0x3B7E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7E3Cu;
    // 0x3b7e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7900u, 0x3B7E3Cu, 0x3B7E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7E44u;
label_3b7e44:
    // 0x3b7e44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B7E44u;
    {
        const bool branch_taken_0x3b7e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E44u;
        // 0x3b7e48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e44) {
            ctx->pc = 0x3B7E6Cu;
            goto label_3b7e6c;
        }
    }
    ctx->pc = 0x3B7E4Cu;
label_3b7e4c:
    // 0x3b7e4c: 0xc0ed258  jal         func_3B4960
    ctx->pc = 0x3B7E4Cu;
    SET_GPR_U32(ctx, 31, 0x3B7E54u);
    ctx->pc = 0x3B7E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7E4Cu;
    // 0x3b7e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4960u, 0x3B7E4Cu, 0x3B7E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7E54u;
label_3b7e54:
    // 0x3b7e54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B7E54u;
    {
        const bool branch_taken_0x3b7e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E54u;
        // 0x3b7e58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e54) {
            ctx->pc = 0x3B7E6Cu;
            goto label_3b7e6c;
        }
    }
    ctx->pc = 0x3B7E5Cu;
    // 0x3b7e5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b7e60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b7e64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b7e68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b7e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b7e6c:
    // 0x3b7e6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b7e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7e70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b7e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7e78: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E78u;
        // 0x3b7e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7E80u;
}
