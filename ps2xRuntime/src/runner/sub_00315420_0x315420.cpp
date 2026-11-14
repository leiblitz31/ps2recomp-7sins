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

// Function: sub_00315420
// Address: 0x315420 - 0x315468
void sub_00315420_0x315420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315420_0x315420");
#endif

    switch (ctx->pc) {
        case 0x315448u: goto label_315448;
        default: break;
    }

    ctx->pc = 0x315420u;

    // 0x315420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x315420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x315424: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x315424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x315428: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x315428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31542c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31542cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x315430: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x315430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x315434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x315434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x315438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31543c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x31543cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x315440: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x315440u;
    SET_GPR_U32(ctx, 31, 0x315448u);
    ctx->pc = 0x315444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315440u;
    // 0x315444: 0x24a55468  addiu       $a1, $a1, 0x5468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x315440u, 0x315448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315448u;
label_315448:
    // 0x315448: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x315448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31544c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31544cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x315450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315454: 0x203100a  movz        $v0, $s0, $v1
    ctx->pc = 0x315454u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x315458: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x315458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31545c: 0x3e00008  jr          $ra
    ctx->pc = 0x31545Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31545Cu;
        // 0x315460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31545Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315464u;
    // 0x315464: 0x0  nop
    ctx->pc = 0x315464u;
    // NOP
    ctx->pc = 0x315468u;
}
