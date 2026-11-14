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

// Function: sub_0013D7E0
// Address: 0x13d7e0 - 0x13d880
void sub_0013D7E0_0x13d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D7E0_0x13d7e0");
#endif

    switch (ctx->pc) {
        case 0x13d7f8u: goto label_13d7f8;
        case 0x13d834u: goto label_13d834;
        default: break;
    }

    ctx->pc = 0x13d7e0u;

    // 0x13d7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d7e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d7e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d7ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d7f0: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x13D7F0u;
    SET_GPR_U32(ctx, 31, 0x13D7F8u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x13D7F0u, 0x13D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D7F8u;
label_13d7f8:
    // 0x13d7f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x13d7fc: 0x246337f0  addiu       $v1, $v1, 0x37F0
    ctx->pc = 0x13d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14320));
    // 0x13d800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d804: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13d808: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13d808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d80c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d810: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x13d810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x13d814: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d818: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x13d818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x13d81c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d820: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x13d820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x13d824: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d828: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x13d828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x13d82c: 0xc091910  jal         func_246440
    ctx->pc = 0x13D82Cu;
    SET_GPR_U32(ctx, 31, 0x13D834u);
    ctx->pc = 0x246440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246440u, 0x13D82Cu, 0x13D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D834u;
label_13d834:
    // 0x13d834: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d838: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x13d838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x13d83c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d840: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x13d840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x13d844: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d848: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x13d848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x13d84c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d850: 0xaf82ba7c  sw          $v0, -0x4584($gp)
    ctx->pc = 0x13d850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949500), GPR_U32(ctx, 2));
    // 0x13d854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13d854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d858: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d85c: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x13d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x13d860: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d864: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x13d864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x13d868: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d86c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d870: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13d874: 0x3e00008  jr          $ra
    ctx->pc = 0x13D874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D87Cu;
    // 0x13d87c: 0x0  nop
    ctx->pc = 0x13d87cu;
    // NOP
    ctx->pc = 0x13d880u;
}
