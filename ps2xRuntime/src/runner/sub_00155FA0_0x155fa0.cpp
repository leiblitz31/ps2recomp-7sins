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

// Function: sub_00155FA0
// Address: 0x155fa0 - 0x156030
void sub_00155FA0_0x155fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155FA0_0x155fa0");
#endif

    switch (ctx->pc) {
        case 0x155fbcu: goto label_155fbc;
        case 0x156000u: goto label_156000;
        default: break;
    }

    ctx->pc = 0x155fa0u;

    // 0x155fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x155fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x155fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155fa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x155fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x155fac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x155facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x155fb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x155fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155fb4: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x155FB4u;
    SET_GPR_U32(ctx, 31, 0x155FBCu);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x155FB4u, 0x155FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FBCu;
label_155fbc:
    // 0x155fbc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x155fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x155fc0: 0x246339f0  addiu       $v1, $v1, 0x39F0
    ctx->pc = 0x155fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14832));
    // 0x155fc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x155fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155fc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x155fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x155fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155fd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x155fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155fd4: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x155fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x155fd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x155fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155fdc: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x155fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x155fe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x155fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155fe4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x155fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x155fe8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x155fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155fec: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x155fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x155ff0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x155ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155ff4: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x155ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x155ff8: 0xc0558ac  jal         func_1562B0
    ctx->pc = 0x155FF8u;
    SET_GPR_U32(ctx, 31, 0x156000u);
    ctx->pc = 0x1562B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562B0u, 0x155FF8u, 0x156000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156000u;
label_156000:
    // 0x156000: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x156000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156004: 0xa0400044  sb          $zero, 0x44($v0)
    ctx->pc = 0x156004u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x156008: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x156008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15600c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156010: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x156010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x156014: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x156014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156018: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x156018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x15601c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156024: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x156024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x156028: 0x3e00008  jr          $ra
    ctx->pc = 0x156028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156030u;
}
