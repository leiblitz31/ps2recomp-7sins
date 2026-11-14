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

// Function: sub_00308A10
// Address: 0x308a10 - 0x308a98
void sub_00308A10_0x308a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308A10_0x308a10");
#endif

    switch (ctx->pc) {
        case 0x308a40u: goto label_308a40;
        default: break;
    }

    ctx->pc = 0x308a10u;

    // 0x308a10: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x308a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308a14: 0x3c09004f  lui         $t1, 0x4F
    ctx->pc = 0x308a14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)79 << 16));
    // 0x308a18: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x308a18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x308a1c: 0x25252228  addiu       $a1, $t1, 0x2228
    ctx->pc = 0x308a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 8744));
    // 0x308a20: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x308a20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x308a24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x308a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308a28: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x308a28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x308a2c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x308a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x308a30: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x308a30u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4F2240u));
    // 0x308a34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x308A34u;
    {
        const bool branch_taken_0x308a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A34u;
        // 0x308a38: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a34) {
            ctx->pc = 0x308A44u;
            goto label_308a44;
        }
    }
    ctx->pc = 0x308A3Cu;
    // 0x308a3c: 0x0  nop
    ctx->pc = 0x308a3cu;
    // NOP
label_308a40:
    // 0x308a40: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x308a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_308a44:
    // 0x308a44: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x308A44u;
    {
        const bool branch_taken_0x308a44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x308a44) {
            ctx->pc = 0x308A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308A44u;
            // 0x308a48: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308A70u;
            goto label_308a70;
        }
    }
    ctx->pc = 0x308A4Cu;
    // 0x308a4c: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x308a4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x308a50: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x308a50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x308a54: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x308a54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x308a58: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x308a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x308a5c: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x308a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x308a60: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x308a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x308a64: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x308A64u;
    {
        const bool branch_taken_0x308a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308a64) {
            ctx->pc = 0x308A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308A64u;
            // 0x308a68: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308a40;
        }
    }
    ctx->pc = 0x308A6Cu;
    // 0x308a6c: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x308a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_308a70:
    // 0x308a70: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x308A70u;
    {
        const bool branch_taken_0x308a70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x308A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A70u;
        // 0x308a74: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a70) {
            ctx->pc = 0x308A7Cu;
            goto label_308a7c;
        }
    }
    ctx->pc = 0x308A78u;
    // 0x308a78: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x308a78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_308a7c:
    // 0x308a7c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308A7Cu;
    {
        const bool branch_taken_0x308a7c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x308A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A7Cu;
        // 0x308a80: 0x25222228  addiu       $v0, $t1, 0x2228 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 8744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a7c) {
            ctx->pc = 0x308A8Cu;
            goto label_308a8c;
        }
    }
    ctx->pc = 0x308A84u;
    // 0x308a84: 0x3e00008  jr          $ra
    ctx->pc = 0x308A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A84u;
        // 0x308a88: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308A8Cu;
label_308a8c:
    // 0x308a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x308A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A8Cu;
        // 0x308a90: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308A94u;
    // 0x308a94: 0x0  nop
    ctx->pc = 0x308a94u;
    // NOP
    ctx->pc = 0x308a98u;
}
