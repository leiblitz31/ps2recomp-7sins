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

// Function: sub_003029A0
// Address: 0x3029a0 - 0x3029e8
void sub_003029A0_0x3029a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003029A0_0x3029a0");
#endif

    switch (ctx->pc) {
        case 0x3029a0u: goto label_3029a0;
        case 0x3029a4u: goto label_3029a4;
        case 0x3029a8u: goto label_3029a8;
        case 0x3029acu: goto label_3029ac;
        case 0x3029b0u: goto label_3029b0;
        case 0x3029b4u: goto label_3029b4;
        case 0x3029b8u: goto label_3029b8;
        case 0x3029bcu: goto label_3029bc;
        case 0x3029c0u: goto label_3029c0;
        case 0x3029c4u: goto label_3029c4;
        case 0x3029c8u: goto label_3029c8;
        case 0x3029ccu: goto label_3029cc;
        case 0x3029d0u: goto label_3029d0;
        case 0x3029d4u: goto label_3029d4;
        case 0x3029d8u: goto label_3029d8;
        case 0x3029dcu: goto label_3029dc;
        case 0x3029e0u: goto label_3029e0;
        case 0x3029e4u: goto label_3029e4;
        default: break;
    }

    ctx->pc = 0x3029a0u;

label_3029a0:
    // 0x3029a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3029a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3029a4:
    // 0x3029a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3029a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3029a8:
    // 0x3029a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3029a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3029ac:
    // 0x3029ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3029b0:
    if (ctx->pc == 0x3029B0u) {
        ctx->pc = 0x3029B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029ACu;
        // 0x3029b0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3029B4u;
        goto label_3029b4;
    }
    ctx->pc = 0x3029ACu;
    {
        const bool branch_taken_0x3029ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3029B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029ACu;
        // 0x3029b0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3029ac) {
            ctx->pc = 0x3029CCu;
            goto label_3029cc;
        }
    }
    ctx->pc = 0x3029B4u;
label_3029b4:
    // 0x3029b4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3029b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3029b8:
    // 0x3029b8: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3029b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3029bc:
    // 0x3029bc: 0x8c5c2b00  lw          $gp, 0x2B00($v0)
    ctx->pc = 0x3029bcu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_3029c0:
    // 0x3029c0: 0x60f809  jalr        $v1
label_3029c4:
    if (ctx->pc == 0x3029C4u) {
        ctx->pc = 0x3029C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029C0u;
        // 0x3029c4: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3029C8u;
        goto label_3029c8;
    }
    ctx->pc = 0x3029C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3029C8u);
        ctx->pc = 0x3029C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029C0u;
        // 0x3029c4: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3029C0u, 0x3029C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3029C8u;
label_3029c8:
    // 0x3029c8: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x3029c8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3029cc:
    // 0x3029cc: 0xf  sync
    ctx->pc = 0x3029ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3029d0:
    // 0x3029d0: 0x42000038  ei
    ctx->pc = 0x3029d0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3029d4:
    // 0x3029d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3029d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3029d8:
    // 0x3029d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3029d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3029dc:
    // 0x3029dc: 0x3e00008  jr          $ra
label_3029e0:
    if (ctx->pc == 0x3029E0u) {
        ctx->pc = 0x3029E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029DCu;
        // 0x3029e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3029E4u;
        goto label_3029e4;
    }
    ctx->pc = 0x3029DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3029E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029DCu;
        // 0x3029e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3029DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3029E4u;
label_3029e4:
    // 0x3029e4: 0x0  nop
    ctx->pc = 0x3029e4u;
    // NOP
    ctx->pc = 0x3029e8u;
}
