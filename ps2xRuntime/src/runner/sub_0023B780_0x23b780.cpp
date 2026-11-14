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

// Function: sub_0023B780
// Address: 0x23b780 - 0x23b810
void sub_0023B780_0x23b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B780_0x23b780");
#endif

    switch (ctx->pc) {
        case 0x23b798u: goto label_23b798;
        case 0x23b7e4u: goto label_23b7e4;
        default: break;
    }

    ctx->pc = 0x23b780u;

    // 0x23b780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23b784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23b788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23b78c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b790: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x23B790u;
    SET_GPR_U32(ctx, 31, 0x23B798u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x23B790u, 0x23B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B798u;
label_23b798:
    // 0x23b798: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23b798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23b79c: 0x24635630  addiu       $v1, $v1, 0x5630
    ctx->pc = 0x23b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22064));
    // 0x23b7a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b7a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23b7a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b7ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b7b0: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x23b7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x23b7b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b7b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b7bc: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x23b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x23b7c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b7c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b7c8: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x23b7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x23b7cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b7d0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x23b7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x23b7d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b7d8: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x23b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x23b7dc: 0xc088560  jal         func_221580
    ctx->pc = 0x23B7DCu;
    SET_GPR_U32(ctx, 31, 0x23B7E4u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x23B7DCu, 0x23B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7E4u;
label_23b7e4:
    // 0x23b7e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b7e8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x23b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x23b7ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b7f0: 0xaf82bbe8  sw          $v0, -0x4418($gp)
    ctx->pc = 0x23b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949864), GPR_U32(ctx, 2));
    // 0x23b7f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b7fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23b7fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23b800: 0x3e00008  jr          $ra
    ctx->pc = 0x23B800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B808u;
    // 0x23b808: 0x0  nop
    ctx->pc = 0x23b808u;
    // NOP
    // 0x23b80c: 0x0  nop
    ctx->pc = 0x23b80cu;
    // NOP
    ctx->pc = 0x23b810u;
}
