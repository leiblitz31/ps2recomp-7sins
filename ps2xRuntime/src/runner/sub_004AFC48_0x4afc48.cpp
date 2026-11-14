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

// Function: sub_004AFC48
// Address: 0x4afc48 - 0x4afc78
void sub_004AFC48_0x4afc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFC48_0x4afc48");
#endif

    ctx->pc = 0x4afc48u;

    // 0x4afc48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4afc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afc4c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x4afc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x4afc50: 0x24a31080  addiu       $v1, $a1, 0x1080
    ctx->pc = 0x4afc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4224));
    // 0x4afc54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4afc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4afc58: 0x8c640280  lw          $a0, 0x280($v1)
    ctx->pc = 0x4afc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x4afc5c: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x4afc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x4afc60: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AFC60u;
    {
        const bool branch_taken_0x4afc60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AFC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFC60u;
        // 0x4afc64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afc60) {
            ctx->pc = 0x4AFC6Cu;
            goto label_4afc6c;
        }
    }
    ctx->pc = 0x4AFC68u;
    // 0x4afc68: 0x8ca20f40  lw          $v0, 0xF40($a1)
    ctx->pc = 0x4afc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3904)));
label_4afc6c:
    // 0x4afc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFC74u;
    // 0x4afc74: 0x0  nop
    ctx->pc = 0x4afc74u;
    // NOP
    ctx->pc = 0x4afc78u;
}
