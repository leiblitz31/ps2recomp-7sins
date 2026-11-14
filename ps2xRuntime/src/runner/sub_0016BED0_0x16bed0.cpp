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

// Function: sub_0016BED0
// Address: 0x16bed0 - 0x16bf50
void sub_0016BED0_0x16bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BED0_0x16bed0");
#endif

    switch (ctx->pc) {
        case 0x16bee8u: goto label_16bee8;
        case 0x16befcu: goto label_16befc;
        case 0x16bf14u: goto label_16bf14;
        case 0x16bf24u: goto label_16bf24;
        case 0x16bf34u: goto label_16bf34;
        default: break;
    }

    ctx->pc = 0x16bed0u;

    // 0x16bed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16bed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bed8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x16bedc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16bee0: 0xc088560  jal         func_221580
    ctx->pc = 0x16BEE0u;
    SET_GPR_U32(ctx, 31, 0x16BEE8u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x16BEE0u, 0x16BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BEE8u;
label_16bee8:
    // 0x16bee8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16beec: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x16beecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x16bef0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x16bef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16bef4: 0xc040924  jal         func_102490
    ctx->pc = 0x16BEF4u;
    SET_GPR_U32(ctx, 31, 0x16BEFCu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16BEF4u, 0x16BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BEFCu;
label_16befc:
    // 0x16befc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bf00: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x16bf00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x16bf04: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16bf08: 0x24050567  addiu       $a1, $zero, 0x567
    ctx->pc = 0x16bf08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
    // 0x16bf0c: 0xc040924  jal         func_102490
    ctx->pc = 0x16BF0Cu;
    SET_GPR_U32(ctx, 31, 0x16BF14u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16BF0Cu, 0x16BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF14u;
label_16bf14:
    // 0x16bf14: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x16bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16bf18: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x16bf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16bf1c: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x16BF1Cu;
    SET_GPR_U32(ctx, 31, 0x16BF24u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x16BF1Cu, 0x16BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF24u;
label_16bf24:
    // 0x16bf24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16bf28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bf2c: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x16BF2Cu;
    SET_GPR_U32(ctx, 31, 0x16BF34u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x16BF2Cu, 0x16BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF34u;
label_16bf34:
    // 0x16bf34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16bf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16bf3c: 0x3e00008  jr          $ra
    ctx->pc = 0x16BF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BF44u;
    // 0x16bf44: 0x0  nop
    ctx->pc = 0x16bf44u;
    // NOP
    // 0x16bf48: 0x0  nop
    ctx->pc = 0x16bf48u;
    // NOP
    // 0x16bf4c: 0x0  nop
    ctx->pc = 0x16bf4cu;
    // NOP
    ctx->pc = 0x16bf50u;
}
