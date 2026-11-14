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

// Function: sub_00398E40
// Address: 0x398e40 - 0x398e88
void sub_00398E40_0x398e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398E40_0x398e40");
#endif

    switch (ctx->pc) {
        case 0x398e64u: goto label_398e64;
        default: break;
    }

    ctx->pc = 0x398e40u;

    // 0x398e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x398e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x398e44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x398e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x398e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x398e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e50: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x398e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x398e54: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x398E54u;
    {
        const bool branch_taken_0x398e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x398e54) {
            ctx->pc = 0x398E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398E54u;
            // 0x398e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398E74u;
            goto label_398e74;
        }
    }
    ctx->pc = 0x398E5Cu;
    // 0x398e5c: 0xc0e40c2  jal         func_390308
    ctx->pc = 0x398E5Cu;
    SET_GPR_U32(ctx, 31, 0x398E64u);
    ctx->pc = 0x390308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390308u, 0x398E5Cu, 0x398E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398E64u;
label_398e64:
    // 0x398e64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x398e64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e68: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x398E68u;
    {
        const bool branch_taken_0x398e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x398E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E68u;
        // 0x398e6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e68) {
            ctx->pc = 0x398E74u;
            goto label_398e74;
        }
    }
    ctx->pc = 0x398E70u;
    // 0x398e70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x398e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398e74:
    // 0x398e74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x398e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x398E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E7Cu;
        // 0x398e80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398E84u;
    // 0x398e84: 0x0  nop
    ctx->pc = 0x398e84u;
    // NOP
    ctx->pc = 0x398e88u;
}
