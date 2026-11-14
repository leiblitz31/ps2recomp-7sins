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

// Function: sub_00215280
// Address: 0x215280 - 0x2152e0
void sub_00215280_0x215280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215280_0x215280");
#endif

    switch (ctx->pc) {
        case 0x215298u: goto label_215298;
        case 0x2152b8u: goto label_2152b8;
        default: break;
    }

    ctx->pc = 0x215280u;

    // 0x215280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x215288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21528c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x21528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215290: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x215290u;
    SET_GPR_U32(ctx, 31, 0x215298u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x215290u, 0x215298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215298u;
label_215298:
    // 0x215298: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x215298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x21529c: 0x246351f0  addiu       $v1, $v1, 0x51F0
    ctx->pc = 0x21529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20976));
    // 0x2152a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2152a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2152a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2152a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2152a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2152a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2152ac: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2152acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2152b0: 0xc084fa4  jal         func_213E90
    ctx->pc = 0x2152B0u;
    SET_GPR_U32(ctx, 31, 0x2152B8u);
    ctx->pc = 0x213E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213E90u, 0x2152B0u, 0x2152B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2152B8u;
label_2152b8:
    // 0x2152b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2152b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2152bc: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2152bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2152c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2152c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2152c4: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2152c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2152c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2152c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2152cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2152ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2152d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2152d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2152d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2152D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2152D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2152DCu;
    // 0x2152dc: 0x0  nop
    ctx->pc = 0x2152dcu;
    // NOP
    ctx->pc = 0x2152e0u;
}
