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

// Function: sub_00429D08
// Address: 0x429d08 - 0x429d88
void sub_00429D08_0x429d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429D08_0x429d08");
#endif

    switch (ctx->pc) {
        case 0x429d1cu: goto label_429d1c;
        case 0x429d60u: goto label_429d60;
        default: break;
    }

    ctx->pc = 0x429d08u;

    // 0x429d08: 0x3e00008  jr          $ra
    ctx->pc = 0x429D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429D08u;
        // 0x429d0c: 0xa384ade4  sb          $a0, -0x521C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294946276), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429D10u;
    // 0x429d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x429d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x429d14: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x429d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x429d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x429d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_429d1c:
    // 0x429d1c: 0x42000039  di
    ctx->pc = 0x429d1cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x429d20: 0x40f  sync.p
    ctx->pc = 0x429d20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x429d24: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x429d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x429d28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x429d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x429d2c: 0x0  nop
    ctx->pc = 0x429d2cu;
    // NOP
    // 0x429d30: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x429D30u;
    {
        const bool branch_taken_0x429d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x429d30) {
            ctx->pc = 0x429D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429d1c;
        }
    }
    ctx->pc = 0x429D38u;
    // 0x429d38: 0x9383be90  lbu         $v1, -0x4170($gp)
    ctx->pc = 0x429d38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
    // 0x429d3c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x429D3Cu;
    {
        const bool branch_taken_0x429d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x429D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429D3Cu;
        // 0x429d40: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429d3c) {
            ctx->pc = 0x429D70u;
            goto label_429d70;
        }
    }
    ctx->pc = 0x429D44u;
    // 0x429d44: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x429d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x429d48: 0x9043fff8  lbu         $v1, -0x8($v0)
    ctx->pc = 0x429d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x429d4c: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x429D4Cu;
    {
        const bool branch_taken_0x429d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x429D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429D4Cu;
        // 0x429d50: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429d4c) {
            ctx->pc = 0x429D70u;
            goto label_429d70;
        }
    }
    ctx->pc = 0x429D54u;
    // 0x429d54: 0xa380be90  sb          $zero, -0x4170($gp)
    ctx->pc = 0x429d54u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950544), (uint8_t)GPR_U32(ctx, 0));
    // 0x429d58: 0xc109d0e  jal         func_427438
    ctx->pc = 0x429D58u;
    SET_GPR_U32(ctx, 31, 0x429D60u);
    ctx->pc = 0x427438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427438u, 0x429D58u, 0x429D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429D60u;
label_429d60:
    // 0x429d60: 0x42000038  ei
    ctx->pc = 0x429d60u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x429d64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x429D64u;
    {
        const bool branch_taken_0x429d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429D64u;
        // 0x429d68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429d64) {
            ctx->pc = 0x429D78u;
            goto label_429d78;
        }
    }
    ctx->pc = 0x429D6Cu;
    // 0x429d6c: 0x0  nop
    ctx->pc = 0x429d6cu;
    // NOP
label_429d70:
    // 0x429d70: 0x42000038  ei
    ctx->pc = 0x429d70u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x429d74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x429d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429d78:
    // 0x429d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x429d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x429D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429D7Cu;
        // 0x429d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429D84u;
    // 0x429d84: 0x0  nop
    ctx->pc = 0x429d84u;
    // NOP
    ctx->pc = 0x429d88u;
}
