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

// Function: sub_002FDFF0
// Address: 0x2fdff0 - 0x2fe080
void sub_002FDFF0_0x2fdff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDFF0_0x2fdff0");
#endif

    switch (ctx->pc) {
        case 0x2fe000u: goto label_2fe000;
        case 0x2fe024u: goto label_2fe024;
        case 0x2fe030u: goto label_2fe030;
        case 0x2fe054u: goto label_2fe054;
        default: break;
    }

    ctx->pc = 0x2fdff0u;

    // 0x2fdff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdff8: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2FDFF8u;
    SET_GPR_U32(ctx, 31, 0x2FE000u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2FDFF8u, 0x2FE000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE000u;
label_2fe000:
    // 0x2fe000: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fe000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fe004: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2fe004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fe008: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x2fe008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x2fe00c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2fe00cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x2fe010: 0xf  sync
    ctx->pc = 0x2fe010u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fe014: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE014u;
    {
        const bool branch_taken_0x2fe014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE014u;
        // 0x2fe018: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe014) {
            ctx->pc = 0x2FE028u;
            goto label_2fe028;
        }
    }
    ctx->pc = 0x2FE01Cu;
    // 0x2fe01c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2FE01Cu;
    SET_GPR_U32(ctx, 31, 0x2FE024u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2FE01Cu, 0x2FE024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE024u;
label_2fe024:
    // 0x2fe024: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fe024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_2fe028:
    // 0x2fe028: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x2fe028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x2fe02c: 0x0  nop
    ctx->pc = 0x2fe02cu;
    // NOP
label_2fe030:
    // 0x2fe030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fe030u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f000
    // 0x2fe034: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2fe034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2fe038: 0x0  nop
    ctx->pc = 0x2fe038u;
    // NOP
    // 0x2fe03c: 0x0  nop
    ctx->pc = 0x2fe03cu;
    // NOP
    // 0x2fe040: 0x0  nop
    ctx->pc = 0x2fe040u;
    // NOP
    // 0x2fe044: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FE044u;
    {
        const bool branch_taken_0x2fe044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe044) {
            ctx->pc = 0x2FE030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe030;
        }
    }
    ctx->pc = 0x2FE04Cu;
    // 0x2fe04c: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2FE04Cu;
    SET_GPR_U32(ctx, 31, 0x2FE054u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2FE04Cu, 0x2FE054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE054u;
label_2fe054:
    // 0x2fe054: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fe054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fe058: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2fe058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fe05c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x2fe05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x2fe060: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2fe060u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x2fe064: 0xf  sync
    ctx->pc = 0x2fe064u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fe068: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE068u;
    {
        const bool branch_taken_0x2fe068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE068u;
        // 0x2fe06c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe068) {
            ctx->pc = 0x2FE078u;
            goto label_2fe078;
        }
    }
    ctx->pc = 0x2FE070u;
    // 0x2fe070: 0x80c1f1c  j           func_307C70
    ctx->pc = 0x2FE070u;
    ctx->pc = 0x2FE074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE070u;
    // 0x2fe074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    sub_00307C70_0x307c70(rdram, ctx, runtime); return;
    ctx->pc = 0x2FE078u;
label_2fe078:
    // 0x2fe078: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE078u;
        // 0x2fe07c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE080u;
}
