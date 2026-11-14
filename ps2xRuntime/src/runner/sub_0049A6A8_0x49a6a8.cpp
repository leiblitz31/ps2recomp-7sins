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

// Function: sub_0049A6A8
// Address: 0x49a6a8 - 0x49a718
void sub_0049A6A8_0x49a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A6A8_0x49a6a8");
#endif

    switch (ctx->pc) {
        case 0x49a6a8u: goto label_49a6a8;
        case 0x49a6acu: goto label_49a6ac;
        case 0x49a6b0u: goto label_49a6b0;
        case 0x49a6b4u: goto label_49a6b4;
        case 0x49a6b8u: goto label_49a6b8;
        case 0x49a6bcu: goto label_49a6bc;
        case 0x49a6c0u: goto label_49a6c0;
        case 0x49a6c4u: goto label_49a6c4;
        case 0x49a6c8u: goto label_49a6c8;
        case 0x49a6ccu: goto label_49a6cc;
        case 0x49a6d0u: goto label_49a6d0;
        case 0x49a6d4u: goto label_49a6d4;
        case 0x49a6d8u: goto label_49a6d8;
        case 0x49a6dcu: goto label_49a6dc;
        case 0x49a6e0u: goto label_49a6e0;
        case 0x49a6e4u: goto label_49a6e4;
        case 0x49a6e8u: goto label_49a6e8;
        case 0x49a6ecu: goto label_49a6ec;
        case 0x49a6f0u: goto label_49a6f0;
        case 0x49a6f4u: goto label_49a6f4;
        case 0x49a6f8u: goto label_49a6f8;
        case 0x49a6fcu: goto label_49a6fc;
        case 0x49a700u: goto label_49a700;
        case 0x49a704u: goto label_49a704;
        case 0x49a708u: goto label_49a708;
        case 0x49a70cu: goto label_49a70c;
        case 0x49a710u: goto label_49a710;
        case 0x49a714u: goto label_49a714;
        default: break;
    }

    ctx->pc = 0x49a6a8u;

label_49a6a8:
    // 0x49a6a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49a6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49a6ac:
    // 0x49a6ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49a6b0:
    // 0x49a6b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x49a6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_49a6b4:
    // 0x49a6b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49a6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a6b8:
    // 0x49a6b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49a6bc:
    // 0x49a6bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x49a6bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49a6c0:
    // 0x49a6c0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_49a6c4:
    if (ctx->pc == 0x49A6C4u) {
        ctx->pc = 0x49A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6C0u;
        // 0x49a6c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A6C8u;
        goto label_49a6c8;
    }
    ctx->pc = 0x49A6C0u;
    {
        const bool branch_taken_0x49a6c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6C0u;
        // 0x49a6c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a6c0) {
            ctx->pc = 0x49A6F8u;
            goto label_49a6f8;
        }
    }
    ctx->pc = 0x49A6C8u;
label_49a6c8:
    // 0x49a6c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49a6cc:
    // 0x49a6cc: 0x0  nop
    ctx->pc = 0x49a6ccu;
    // NOP
label_49a6d0:
    // 0x49a6d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49a6d4:
    // 0x49a6d4: 0x40f809  jalr        $v0
label_49a6d8:
    if (ctx->pc == 0x49A6D8u) {
        ctx->pc = 0x49A6DCu;
        goto label_49a6dc;
    }
    ctx->pc = 0x49A6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49A6DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A6D4u, 0x49A6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49A6DCu;
label_49a6dc:
    // 0x49a6dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_49a6e0:
    if (ctx->pc == 0x49A6E0u) {
        ctx->pc = 0x49A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6DCu;
        // 0x49a6e0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A6E4u;
        goto label_49a6e4;
    }
    ctx->pc = 0x49A6DCu;
    {
        const bool branch_taken_0x49a6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6DCu;
        // 0x49a6e0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a6dc) {
            ctx->pc = 0x49A6ECu;
            goto label_49a6ec;
        }
    }
    ctx->pc = 0x49A6E4u;
label_49a6e4:
    // 0x49a6e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_49a6e8:
    if (ctx->pc == 0x49A6E8u) {
        ctx->pc = 0x49A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6E4u;
        // 0x49a6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A6ECu;
        goto label_49a6ec;
    }
    ctx->pc = 0x49A6E4u;
    {
        const bool branch_taken_0x49a6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6E4u;
        // 0x49a6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a6e4) {
            ctx->pc = 0x49A6FCu;
            goto label_49a6fc;
        }
    }
    ctx->pc = 0x49A6ECu;
label_49a6ec:
    // 0x49a6ec: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x49a6ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_49a6f0:
    // 0x49a6f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_49a6f4:
    if (ctx->pc == 0x49A6F4u) {
        ctx->pc = 0x49A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6F0u;
        // 0x49a6f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A6F8u;
        goto label_49a6f8;
    }
    ctx->pc = 0x49A6F0u;
    {
        const bool branch_taken_0x49a6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6F0u;
        // 0x49a6f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a6f0) {
            ctx->pc = 0x49A6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a6d0;
        }
    }
    ctx->pc = 0x49A6F8u;
label_49a6f8:
    // 0x49a6f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49a6fc:
    // 0x49a6fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49a6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49a700:
    // 0x49a700: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49a700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49a704:
    // 0x49a704: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x49a704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a708:
    // 0x49a708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a70c:
    // 0x49a70c: 0x3e00008  jr          $ra
label_49a710:
    if (ctx->pc == 0x49A710u) {
        ctx->pc = 0x49A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A70Cu;
        // 0x49a710: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A714u;
        goto label_49a714;
    }
    ctx->pc = 0x49A70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A70Cu;
        // 0x49a710: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A714u;
label_49a714:
    // 0x49a714: 0x0  nop
    ctx->pc = 0x49a714u;
    // NOP
    ctx->pc = 0x49a718u;
}
