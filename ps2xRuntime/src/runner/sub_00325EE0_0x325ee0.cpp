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

// Function: sub_00325EE0
// Address: 0x325ee0 - 0x325f30
void sub_00325EE0_0x325ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325EE0_0x325ee0");
#endif

    switch (ctx->pc) {
        case 0x325ef8u: goto label_325ef8;
        default: break;
    }

    ctx->pc = 0x325ee0u;

    // 0x325ee0: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x325ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x325ee4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x325ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x325ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325eec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x325eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325ef0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x325ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325ef4: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x325ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_325ef8:
    // 0x325ef8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x325ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x325efc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x325efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x325f00: 0x50680008  beql        $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x325F00u;
    {
        const bool branch_taken_0x325f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x325f00) {
            ctx->pc = 0x325F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325F00u;
            // 0x325f04: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325F24u;
            goto label_325f24;
        }
    }
    ctx->pc = 0x325F08u;
    // 0x325f08: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x325f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x325f0c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x325f0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325f10: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x325f10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x325f14: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x325F14u;
    {
        const bool branch_taken_0x325f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325f14) {
            ctx->pc = 0x325F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325F14u;
            // 0x325f18: 0x61180  sll         $v0, $a2, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325ef8;
        }
    }
    ctx->pc = 0x325F1Cu;
    // 0x325f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x325f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f20: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x325f20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_325f24:
    // 0x325f24: 0x3e00008  jr          $ra
    ctx->pc = 0x325F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F24u;
        // 0x325f28: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325F2Cu;
    // 0x325f2c: 0x0  nop
    ctx->pc = 0x325f2cu;
    // NOP
    ctx->pc = 0x325f30u;
}
