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

// Function: sub_00279CC0
// Address: 0x279cc0 - 0x279d20
void sub_00279CC0_0x279cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279CC0_0x279cc0");
#endif

    switch (ctx->pc) {
        case 0x279cdcu: goto label_279cdc;
        case 0x279cecu: goto label_279cec;
        case 0x279d00u: goto label_279d00;
        default: break;
    }

    ctx->pc = 0x279cc0u;

    // 0x279cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279ccc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x279cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x279cd0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x279cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279cd4: 0xc09e77c  jal         func_279DF0
    ctx->pc = 0x279CD4u;
    SET_GPR_U32(ctx, 31, 0x279CDCu);
    ctx->pc = 0x279DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279DF0u, 0x279CD4u, 0x279CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CDCu;
label_279cdc:
    // 0x279cdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x279cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ce0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x279ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279ce4: 0xc09e774  jal         func_279DD0
    ctx->pc = 0x279CE4u;
    SET_GPR_U32(ctx, 31, 0x279CECu);
    ctx->pc = 0x279DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279DD0u, 0x279CE4u, 0x279CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CECu;
label_279cec:
    // 0x279cec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x279cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279cf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x279cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279cf4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x279cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279cf8: 0xc09e748  jal         func_279D20
    ctx->pc = 0x279CF8u;
    SET_GPR_U32(ctx, 31, 0x279D00u);
    ctx->pc = 0x279D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279D20u, 0x279CF8u, 0x279D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D00u;
label_279d00:
    // 0x279d00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279d08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x279d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x279d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x279D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279D14u;
    // 0x279d14: 0x0  nop
    ctx->pc = 0x279d14u;
    // NOP
    // 0x279d18: 0x0  nop
    ctx->pc = 0x279d18u;
    // NOP
    // 0x279d1c: 0x0  nop
    ctx->pc = 0x279d1cu;
    // NOP
    ctx->pc = 0x279d20u;
}
