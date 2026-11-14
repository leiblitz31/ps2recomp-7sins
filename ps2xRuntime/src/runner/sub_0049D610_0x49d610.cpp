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

// Function: sub_0049D610
// Address: 0x49d610 - 0x49d680
void sub_0049D610_0x49d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049D610_0x49d610");
#endif

    switch (ctx->pc) {
        case 0x49d610u: goto label_49d610;
        case 0x49d614u: goto label_49d614;
        case 0x49d618u: goto label_49d618;
        case 0x49d61cu: goto label_49d61c;
        case 0x49d620u: goto label_49d620;
        case 0x49d624u: goto label_49d624;
        case 0x49d628u: goto label_49d628;
        case 0x49d62cu: goto label_49d62c;
        case 0x49d630u: goto label_49d630;
        case 0x49d634u: goto label_49d634;
        case 0x49d638u: goto label_49d638;
        case 0x49d63cu: goto label_49d63c;
        case 0x49d640u: goto label_49d640;
        case 0x49d644u: goto label_49d644;
        case 0x49d648u: goto label_49d648;
        case 0x49d64cu: goto label_49d64c;
        case 0x49d650u: goto label_49d650;
        case 0x49d654u: goto label_49d654;
        case 0x49d658u: goto label_49d658;
        case 0x49d65cu: goto label_49d65c;
        case 0x49d660u: goto label_49d660;
        case 0x49d664u: goto label_49d664;
        case 0x49d668u: goto label_49d668;
        case 0x49d66cu: goto label_49d66c;
        case 0x49d670u: goto label_49d670;
        case 0x49d674u: goto label_49d674;
        case 0x49d678u: goto label_49d678;
        case 0x49d67cu: goto label_49d67c;
        default: break;
    }

    ctx->pc = 0x49d610u;

label_49d610:
    // 0x49d610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49d614:
    // 0x49d614: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49d614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49d618:
    // 0x49d618: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x49d618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_49d61c:
    // 0x49d61c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49d61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d620:
    // 0x49d620: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49d620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49d624:
    // 0x49d624: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x49d624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49d628:
    // 0x49d628: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_49d62c:
    if (ctx->pc == 0x49D62Cu) {
        ctx->pc = 0x49D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D628u;
        // 0x49d62c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D630u;
        goto label_49d630;
    }
    ctx->pc = 0x49D628u;
    {
        const bool branch_taken_0x49d628 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D628u;
        // 0x49d62c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d628) {
            ctx->pc = 0x49D660u;
            goto label_49d660;
        }
    }
    ctx->pc = 0x49D630u;
label_49d630:
    // 0x49d630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49d630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49d634:
    // 0x49d634: 0x0  nop
    ctx->pc = 0x49d634u;
    // NOP
label_49d638:
    // 0x49d638: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49d638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49d63c:
    // 0x49d63c: 0x40f809  jalr        $v0
label_49d640:
    if (ctx->pc == 0x49D640u) {
        ctx->pc = 0x49D644u;
        goto label_49d644;
    }
    ctx->pc = 0x49D63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49D644u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D63Cu, 0x49D644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49D644u;
label_49d644:
    // 0x49d644: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_49d648:
    if (ctx->pc == 0x49D648u) {
        ctx->pc = 0x49D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D644u;
        // 0x49d648: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D64Cu;
        goto label_49d64c;
    }
    ctx->pc = 0x49D644u;
    {
        const bool branch_taken_0x49d644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D644u;
        // 0x49d648: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d644) {
            ctx->pc = 0x49D654u;
            goto label_49d654;
        }
    }
    ctx->pc = 0x49D64Cu;
label_49d64c:
    // 0x49d64c: 0x10000005  b           . + 4 + (0x5 << 2)
label_49d650:
    if (ctx->pc == 0x49D650u) {
        ctx->pc = 0x49D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D64Cu;
        // 0x49d650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D654u;
        goto label_49d654;
    }
    ctx->pc = 0x49D64Cu;
    {
        const bool branch_taken_0x49d64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D64Cu;
        // 0x49d650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d64c) {
            ctx->pc = 0x49D664u;
            goto label_49d664;
        }
    }
    ctx->pc = 0x49D654u;
label_49d654:
    // 0x49d654: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x49d654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_49d658:
    // 0x49d658: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_49d65c:
    if (ctx->pc == 0x49D65Cu) {
        ctx->pc = 0x49D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D658u;
        // 0x49d65c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D660u;
        goto label_49d660;
    }
    ctx->pc = 0x49D658u;
    {
        const bool branch_taken_0x49d658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D658u;
        // 0x49d65c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d658) {
            ctx->pc = 0x49D638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d638;
        }
    }
    ctx->pc = 0x49D660u;
label_49d660:
    // 0x49d660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d664:
    // 0x49d664: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49d664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49d668:
    // 0x49d668: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49d668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49d66c:
    // 0x49d66c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x49d66cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49d670:
    // 0x49d670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49d670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49d674:
    // 0x49d674: 0x3e00008  jr          $ra
label_49d678:
    if (ctx->pc == 0x49D678u) {
        ctx->pc = 0x49D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D674u;
        // 0x49d678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49D67Cu;
        goto label_49d67c;
    }
    ctx->pc = 0x49D674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D674u;
        // 0x49d678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D67Cu;
label_49d67c:
    // 0x49d67c: 0x0  nop
    ctx->pc = 0x49d67cu;
    // NOP
    ctx->pc = 0x49d680u;
}
