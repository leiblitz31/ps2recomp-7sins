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

// Function: sub_0041D700
// Address: 0x41d700 - 0x41d740
void sub_0041D700_0x41d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D700_0x41d700");
#endif

    switch (ctx->pc) {
        case 0x41d700u: goto label_41d700;
        case 0x41d704u: goto label_41d704;
        case 0x41d708u: goto label_41d708;
        case 0x41d70cu: goto label_41d70c;
        case 0x41d710u: goto label_41d710;
        case 0x41d714u: goto label_41d714;
        case 0x41d718u: goto label_41d718;
        case 0x41d71cu: goto label_41d71c;
        case 0x41d720u: goto label_41d720;
        case 0x41d724u: goto label_41d724;
        case 0x41d728u: goto label_41d728;
        case 0x41d72cu: goto label_41d72c;
        case 0x41d730u: goto label_41d730;
        case 0x41d734u: goto label_41d734;
        case 0x41d738u: goto label_41d738;
        case 0x41d73cu: goto label_41d73c;
        default: break;
    }

    ctx->pc = 0x41d700u;

label_41d700:
    // 0x41d700: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x41d700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_41d704:
    // 0x41d704: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41d704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41d708:
    // 0x41d708: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x41d708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_41d70c:
    // 0x41d70c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x41d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_41d710:
    // 0x41d710: 0x8ca2e904  lw          $v0, -0x16FC($a1)
    ctx->pc = 0x41d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961412)));
label_41d714:
    // 0x41d714: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x41d714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_41d718:
    // 0x41d718: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41d718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d71c:
    // 0x41d71c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41d71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41d720:
    // 0x41d720: 0x40f809  jalr        $v0
label_41d724:
    if (ctx->pc == 0x41D724u) {
        ctx->pc = 0x41D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D720u;
        // 0x41d724: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D728u;
        goto label_41d728;
    }
    ctx->pc = 0x41D720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D728u);
        ctx->pc = 0x41D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D720u;
        // 0x41d724: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D720u, 0x41D728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D728u;
label_41d728:
    // 0x41d728: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_41d72c:
    if (ctx->pc == 0x41D72Cu) {
        ctx->pc = 0x41D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D728u;
        // 0x41d72c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D730u;
        goto label_41d730;
    }
    ctx->pc = 0x41D728u;
    {
        const bool branch_taken_0x41d728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D728u;
        // 0x41d72c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d728) {
            ctx->pc = 0x41D734u;
            goto label_41d734;
        }
    }
    ctx->pc = 0x41D730u;
label_41d730:
    // 0x41d730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41d730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d734:
    // 0x41d734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41d734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41d738:
    // 0x41d738: 0x3e00008  jr          $ra
label_41d73c:
    if (ctx->pc == 0x41D73Cu) {
        ctx->pc = 0x41D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D738u;
        // 0x41d73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D740u;
        goto label_fallthrough_0x41d738;
    }
    ctx->pc = 0x41D738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D738u;
        // 0x41d73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41d738:
    ctx->pc = 0x41D740u;
}
