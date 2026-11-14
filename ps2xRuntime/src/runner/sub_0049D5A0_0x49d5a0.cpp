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

// Function: sub_0049D5A0
// Address: 0x49d5a0 - 0x49d610
void sub_0049D5A0_0x49d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049D5A0_0x49d5a0");
#endif

    switch (ctx->pc) {
        case 0x49d5a0u: goto label_49d5a0;
        case 0x49d5a4u: goto label_49d5a4;
        case 0x49d5a8u: goto label_49d5a8;
        case 0x49d5acu: goto label_49d5ac;
        case 0x49d5b0u: goto label_49d5b0;
        case 0x49d5b4u: goto label_49d5b4;
        case 0x49d5b8u: goto label_49d5b8;
        case 0x49d5bcu: goto label_49d5bc;
        case 0x49d5c0u: goto label_49d5c0;
        case 0x49d5c4u: goto label_49d5c4;
        case 0x49d5c8u: goto label_49d5c8;
        case 0x49d5ccu: goto label_49d5cc;
        case 0x49d5d0u: goto label_49d5d0;
        case 0x49d5d4u: goto label_49d5d4;
        case 0x49d5d8u: goto label_49d5d8;
        case 0x49d5dcu: goto label_49d5dc;
        case 0x49d5e0u: goto label_49d5e0;
        case 0x49d5e4u: goto label_49d5e4;
        case 0x49d5e8u: goto label_49d5e8;
        case 0x49d5ecu: goto label_49d5ec;
        case 0x49d5f0u: goto label_49d5f0;
        case 0x49d5f4u: goto label_49d5f4;
        case 0x49d5f8u: goto label_49d5f8;
        case 0x49d5fcu: goto label_49d5fc;
        case 0x49d600u: goto label_49d600;
        case 0x49d604u: goto label_49d604;
        case 0x49d608u: goto label_49d608;
        case 0x49d60cu: goto label_49d60c;
        default: break;
    }

    ctx->pc = 0x49d5a0u;

label_49d5a0:
    // 0x49d5a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49d5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49d5a4:
    // 0x49d5a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49d5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49d5a8:
    // 0x49d5a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x49d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_49d5ac:
    // 0x49d5ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49d5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d5b0:
    // 0x49d5b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49d5b4:
    // 0x49d5b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x49d5b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49d5b8:
    // 0x49d5b8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_49d5bc:
    if (ctx->pc == 0x49D5BCu) {
        ctx->pc = 0x49D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D5B8u;
        // 0x49d5bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D5C0u;
        goto label_49d5c0;
    }
    ctx->pc = 0x49D5B8u;
    {
        const bool branch_taken_0x49d5b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D5B8u;
        // 0x49d5bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d5b8) {
            ctx->pc = 0x49D5F0u;
            goto label_49d5f0;
        }
    }
    ctx->pc = 0x49D5C0u;
label_49d5c0:
    // 0x49d5c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49d5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49d5c4:
    // 0x49d5c4: 0x0  nop
    ctx->pc = 0x49d5c4u;
    // NOP
label_49d5c8:
    // 0x49d5c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49d5cc:
    // 0x49d5cc: 0x40f809  jalr        $v0
label_49d5d0:
    if (ctx->pc == 0x49D5D0u) {
        ctx->pc = 0x49D5D4u;
        goto label_49d5d4;
    }
    ctx->pc = 0x49D5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D5D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D5CCu, 0x49D5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D5D4u;
label_49d5d4:
    // 0x49d5d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_49d5d8:
    if (ctx->pc == 0x49D5D8u) {
        ctx->pc = 0x49D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D5D4u;
        // 0x49d5d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D5DCu;
        goto label_49d5dc;
    }
    ctx->pc = 0x49D5D4u;
    {
        const bool branch_taken_0x49d5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D5D4u;
        // 0x49d5d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d5d4) {
            ctx->pc = 0x49D5E4u;
            goto label_49d5e4;
        }
    }
    ctx->pc = 0x49D5DCu;
label_49d5dc:
    // 0x49d5dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_49d5e0:
    if (ctx->pc == 0x49D5E0u) {
        ctx->pc = 0x49D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D5DCu;
        // 0x49d5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D5E4u;
        goto label_49d5e4;
    }
    ctx->pc = 0x49D5DCu;
    {
        const bool branch_taken_0x49d5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D5DCu;
        // 0x49d5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d5dc) {
            ctx->pc = 0x49D5F4u;
            goto label_49d5f4;
        }
    }
    ctx->pc = 0x49D5E4u;
label_49d5e4:
    // 0x49d5e4: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x49d5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_49d5e8:
    // 0x49d5e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_49d5ec:
    if (ctx->pc == 0x49D5ECu) {
        ctx->pc = 0x49D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D5E8u;
        // 0x49d5ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D5F0u;
        goto label_49d5f0;
    }
    ctx->pc = 0x49D5E8u;
    {
        const bool branch_taken_0x49d5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D5E8u;
        // 0x49d5ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d5e8) {
            ctx->pc = 0x49D5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d5c8;
        }
    }
    ctx->pc = 0x49D5F0u;
label_49d5f0:
    // 0x49d5f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d5f4:
    // 0x49d5f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49d5f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49d5f8:
    // 0x49d5f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49d5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49d5fc:
    // 0x49d5fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x49d5fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49d600:
    // 0x49d600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49d600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49d604:
    // 0x49d604: 0x3e00008  jr          $ra
label_49d608:
    if (ctx->pc == 0x49D608u) {
        ctx->pc = 0x49D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D604u;
        // 0x49d608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D60Cu;
        goto label_49d60c;
    }
    ctx->pc = 0x49D604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D604u;
        // 0x49d608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D60Cu;
label_49d60c:
    // 0x49d60c: 0x0  nop
    ctx->pc = 0x49d60cu;
    // NOP
    ctx->pc = 0x49d610u;
}
