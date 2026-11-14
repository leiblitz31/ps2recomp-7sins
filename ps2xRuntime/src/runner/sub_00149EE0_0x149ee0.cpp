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

// Function: sub_00149EE0
// Address: 0x149ee0 - 0x149f20
void sub_00149EE0_0x149ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149EE0_0x149ee0");
#endif

    switch (ctx->pc) {
        case 0x149ef8u: goto label_149ef8;
        case 0x149f0cu: goto label_149f0c;
        default: break;
    }

    ctx->pc = 0x149ee0u;

    // 0x149ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149ee8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x149ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x149eec: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x149eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x149ef0: 0xc052848  jal         func_14A120
    ctx->pc = 0x149EF0u;
    SET_GPR_U32(ctx, 31, 0x149EF8u);
    ctx->pc = 0x14A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A120u, 0x149EF0u, 0x149EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149EF8u;
label_149ef8:
    // 0x149ef8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x149ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149efc: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x149efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x149f00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x149f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f04: 0xc0527c8  jal         func_149F20
    ctx->pc = 0x149F04u;
    SET_GPR_U32(ctx, 31, 0x149F0Cu);
    ctx->pc = 0x149F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149F20u, 0x149F04u, 0x149F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F0Cu;
label_149f0c:
    // 0x149f0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149f14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x149f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x149f18: 0x3e00008  jr          $ra
    ctx->pc = 0x149F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149F20u;
}
