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

// Function: sub_00385058
// Address: 0x385058 - 0x3850b8
void sub_00385058_0x385058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385058_0x385058");
#endif

    switch (ctx->pc) {
        case 0x385080u: goto label_385080;
        case 0x385094u: goto label_385094;
        default: break;
    }

    ctx->pc = 0x385058u;

    // 0x385058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x385058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38505c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x38505cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x385060: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x385060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x385064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x385064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x385068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x385068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38506c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38506cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x385074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385078: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x385078u;
    SET_GPR_U32(ctx, 31, 0x385080u);
    ctx->pc = 0x38507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385078u;
    // 0x38507c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x385078u, 0x385080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385080u;
label_385080:
    // 0x385080: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x385080u;
    {
        const bool branch_taken_0x385080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385080u;
        // 0x385084: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385080) {
            ctx->pc = 0x3850A0u;
            goto label_3850a0;
        }
    }
    ctx->pc = 0x385088u;
    // 0x385088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x385088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38508c: 0xc103440  jal         func_40D100
    ctx->pc = 0x38508Cu;
    SET_GPR_U32(ctx, 31, 0x385094u);
    ctx->pc = 0x385090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38508Cu;
    // 0x385090: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x38508Cu, 0x385094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385094u;
label_385094:
    // 0x385094: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x385094u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x385098: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x385098u;
    {
        const bool branch_taken_0x385098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385098u;
        // 0x38509c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385098) {
            ctx->pc = 0x3850A4u;
            goto label_3850a4;
        }
    }
    ctx->pc = 0x3850A0u;
label_3850a0:
    // 0x3850a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3850a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3850a4:
    // 0x3850a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3850a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3850a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3850a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3850ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3850acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3850b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3850B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3850B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850B0u;
        // 0x3850b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3850B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3850B8u;
}
