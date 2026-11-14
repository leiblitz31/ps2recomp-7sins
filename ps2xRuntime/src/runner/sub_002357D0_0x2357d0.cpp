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

// Function: sub_002357D0
// Address: 0x2357d0 - 0x235830
void sub_002357D0_0x2357d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002357D0_0x2357d0");
#endif

    switch (ctx->pc) {
        case 0x235818u: goto label_235818;
        default: break;
    }

    ctx->pc = 0x2357d0u;

    // 0x2357d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2357d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2357d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2357d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2357d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2357d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2357dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2357dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2357e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2357e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2357e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2357e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2357e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2357e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2357ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2357ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2357f0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2357f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2357f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2357f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2357f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2357f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2357fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2357fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235800: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x235800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x235804: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235808: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x235808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23580c: 0x27859d1c  addiu       $a1, $gp, -0x62E4
    ctx->pc = 0x23580cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941980));
    // 0x235810: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x235810u;
    SET_GPR_U32(ctx, 31, 0x235818u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x235810u, 0x235818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235818u;
label_235818:
    // 0x235818: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23581c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23581cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235820: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x235820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x235824: 0x3e00008  jr          $ra
    ctx->pc = 0x235824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23582Cu;
    // 0x23582c: 0x0  nop
    ctx->pc = 0x23582cu;
    // NOP
    ctx->pc = 0x235830u;
}
