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

// Function: sub_002546F0
// Address: 0x2546f0 - 0x254730
void sub_002546F0_0x2546f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002546F0_0x2546f0");
#endif

    switch (ctx->pc) {
        case 0x254718u: goto label_254718;
        default: break;
    }

    ctx->pc = 0x2546f0u;

    // 0x2546f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2546f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2546f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2546f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2546f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2546f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2546fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2546fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x254700: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x254700u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x254704: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x254704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254708: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x254708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25470c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x25470cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x254710: 0xc0951cc  jal         func_254730
    ctx->pc = 0x254710u;
    SET_GPR_U32(ctx, 31, 0x254718u);
    ctx->pc = 0x254730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254730u, 0x254710u, 0x254718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254718u;
label_254718:
    // 0x254718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25471c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25471cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x254720: 0x3e00008  jr          $ra
    ctx->pc = 0x254720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254728u;
    // 0x254728: 0x0  nop
    ctx->pc = 0x254728u;
    // NOP
    // 0x25472c: 0x0  nop
    ctx->pc = 0x25472cu;
    // NOP
    ctx->pc = 0x254730u;
}
