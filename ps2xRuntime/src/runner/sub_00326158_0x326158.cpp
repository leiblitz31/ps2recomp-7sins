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

// Function: sub_00326158
// Address: 0x326158 - 0x3261a8
void sub_00326158_0x326158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326158_0x326158");
#endif

    switch (ctx->pc) {
        case 0x326170u: goto label_326170;
        default: break;
    }

    ctx->pc = 0x326158u;

    // 0x326158: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x326158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x32615c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x32615cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x326160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326164: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x326164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326168: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x326168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32616c: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x32616cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_326170:
    // 0x326170: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x326170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x326174: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x326174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x326178: 0x50680008  beql        $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x326178u;
    {
        const bool branch_taken_0x326178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x326178) {
            ctx->pc = 0x32617Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326178u;
            // 0x32617c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32619Cu;
            goto label_32619c;
        }
    }
    ctx->pc = 0x326180u;
    // 0x326180: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x326180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x326184: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x326184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326188: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x326188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x32618c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32618Cu;
    {
        const bool branch_taken_0x32618c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32618c) {
            ctx->pc = 0x326190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32618Cu;
            // 0x326190: 0x61180  sll         $v0, $a2, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326170;
        }
    }
    ctx->pc = 0x326194u;
    // 0x326194: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326198: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x326198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_32619c:
    // 0x32619c: 0x3e00008  jr          $ra
    ctx->pc = 0x32619Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3261A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32619Cu;
        // 0x3261a0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32619Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3261A4u;
    // 0x3261a4: 0x0  nop
    ctx->pc = 0x3261a4u;
    // NOP
    ctx->pc = 0x3261a8u;
}
