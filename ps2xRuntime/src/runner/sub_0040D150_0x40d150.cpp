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

// Function: sub_0040D150
// Address: 0x40d150 - 0x40d1a0
void sub_0040D150_0x40d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D150_0x40d150");
#endif

    switch (ctx->pc) {
        case 0x40d164u: goto label_40d164;
        case 0x40d180u: goto label_40d180;
        case 0x40d18cu: goto label_40d18c;
        default: break;
    }

    ctx->pc = 0x40d150u;

    // 0x40d150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40d150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40d154: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40d154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40d158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40d158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40d15c: 0xc10480a  jal         func_412028
    ctx->pc = 0x40D15Cu;
    SET_GPR_U32(ctx, 31, 0x40D164u);
    ctx->pc = 0x40D160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D15Cu;
    // 0x40d160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x40D15Cu, 0x40D164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D164u;
label_40d164:
    // 0x40d164: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x40D164u;
    {
        const bool branch_taken_0x40d164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D164u;
        // 0x40d168: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d164) {
            ctx->pc = 0x40D190u;
            goto label_40d190;
        }
    }
    ctx->pc = 0x40D16Cu;
    // 0x40d16c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40d170: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40d174: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x40d174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x40d178: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40D178u;
    SET_GPR_U32(ctx, 31, 0x40D180u);
    ctx->pc = 0x40D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D178u;
    // 0x40d17c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D178u, 0x40D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D180u;
label_40d180:
    // 0x40d180: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40d180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d184: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40D184u;
    SET_GPR_U32(ctx, 31, 0x40D18Cu);
    ctx->pc = 0x40D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D184u;
    // 0x40d188: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40D184u, 0x40D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D18Cu;
label_40d18c:
    // 0x40d18c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40d18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d190:
    // 0x40d190: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40d190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40d194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40d194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40d198: 0x3e00008  jr          $ra
    ctx->pc = 0x40D198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D198u;
        // 0x40d19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D1A0u;
}
