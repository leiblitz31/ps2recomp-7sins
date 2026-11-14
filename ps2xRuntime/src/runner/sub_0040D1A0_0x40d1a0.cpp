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

// Function: sub_0040D1A0
// Address: 0x40d1a0 - 0x40d1f0
void sub_0040D1A0_0x40d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D1A0_0x40d1a0");
#endif

    switch (ctx->pc) {
        case 0x40d1b4u: goto label_40d1b4;
        case 0x40d1d0u: goto label_40d1d0;
        case 0x40d1dcu: goto label_40d1dc;
        default: break;
    }

    ctx->pc = 0x40d1a0u;

    // 0x40d1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40d1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40d1a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40d1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40d1a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40d1ac: 0xc10480a  jal         func_412028
    ctx->pc = 0x40D1ACu;
    SET_GPR_U32(ctx, 31, 0x40D1B4u);
    ctx->pc = 0x40D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D1ACu;
    // 0x40d1b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x40D1ACu, 0x40D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D1B4u;
label_40d1b4:
    // 0x40d1b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x40D1B4u;
    {
        const bool branch_taken_0x40d1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D1B4u;
        // 0x40d1b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d1b4) {
            ctx->pc = 0x40D1E0u;
            goto label_40d1e0;
        }
    }
    ctx->pc = 0x40D1BCu;
    // 0x40d1bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40d1c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40d1c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x40d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x40d1c8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40D1C8u;
    SET_GPR_U32(ctx, 31, 0x40D1D0u);
    ctx->pc = 0x40D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D1C8u;
    // 0x40d1cc: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D1C8u, 0x40D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D1D0u;
label_40d1d0:
    // 0x40d1d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40d1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d1d4: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40D1D4u;
    SET_GPR_U32(ctx, 31, 0x40D1DCu);
    ctx->pc = 0x40D1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D1D4u;
    // 0x40d1d8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40D1D4u, 0x40D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D1DCu;
label_40d1dc:
    // 0x40d1dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40d1dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d1e0:
    // 0x40d1e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40d1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40d1e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40d1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40d1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x40D1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D1E8u;
        // 0x40d1ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D1F0u;
}
