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

// Function: sub_004817D0
// Address: 0x4817d0 - 0x481810
void sub_004817D0_0x4817d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004817D0_0x4817d0");
#endif

    switch (ctx->pc) {
        case 0x4817f4u: goto label_4817f4;
        default: break;
    }

    ctx->pc = 0x4817d0u;

    // 0x4817d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4817d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4817d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4817d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4817d8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4817d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4817dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4817dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4817e0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4817e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x4817e4: 0x24a51810  addiu       $a1, $a1, 0x1810
    ctx->pc = 0x4817e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6160));
    // 0x4817e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4817e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4817ec: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x4817ECu;
    SET_GPR_U32(ctx, 31, 0x4817F4u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x4817ECu, 0x4817F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4817F4u;
label_4817f4:
    // 0x4817f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4817f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4817f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4817f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4817fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4817FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4817FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481804u;
    // 0x481804: 0x0  nop
    ctx->pc = 0x481804u;
    // NOP
    // 0x481808: 0x0  nop
    ctx->pc = 0x481808u;
    // NOP
    // 0x48180c: 0x0  nop
    ctx->pc = 0x48180cu;
    // NOP
    ctx->pc = 0x481810u;
}
