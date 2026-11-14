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

// Function: sub_001BE3C0
// Address: 0x1be3c0 - 0x1be440
void sub_001BE3C0_0x1be3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE3C0_0x1be3c0");
#endif

    switch (ctx->pc) {
        case 0x1be3f4u: goto label_1be3f4;
        case 0x1be404u: goto label_1be404;
        case 0x1be424u: goto label_1be424;
        default: break;
    }

    ctx->pc = 0x1be3c0u;

    // 0x1be3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be3c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be3c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1be3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1be3cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1be3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1be3d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be3d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BE3D4u;
    {
        const bool branch_taken_0x1be3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be3d4) {
            ctx->pc = 0x1BE424u;
            goto label_1be424;
        }
    }
    ctx->pc = 0x1BE3DCu;
    // 0x1be3dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1be3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be3e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be3e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1be3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be3e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1be3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1be3ec: 0xc0560f8  jal         func_1583E0
    ctx->pc = 0x1BE3ECu;
    SET_GPR_U32(ctx, 31, 0x1BE3F4u);
    ctx->pc = 0x1583E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1583E0u, 0x1BE3ECu, 0x1BE3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3F4u;
label_1be3f4:
    // 0x1be3f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1be3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be3f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3fc: 0xc06f910  jal         func_1BE440
    ctx->pc = 0x1BE3FCu;
    SET_GPR_U32(ctx, 31, 0x1BE404u);
    ctx->pc = 0x1BE440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE440u, 0x1BE3FCu, 0x1BE404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE404u;
label_1be404:
    // 0x1be404: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1be404u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be408: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1be408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1be40c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1be40cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1be410: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE410u;
    {
        const bool branch_taken_0x1be410 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1be410) {
            ctx->pc = 0x1BE424u;
            goto label_1be424;
        }
    }
    ctx->pc = 0x1BE418u;
    // 0x1be418: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1be418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be41c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1BE41Cu;
    SET_GPR_U32(ctx, 31, 0x1BE424u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1BE41Cu, 0x1BE424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE424u;
label_1be424:
    // 0x1be424: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be42c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1be42cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1be430: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE438u;
    // 0x1be438: 0x0  nop
    ctx->pc = 0x1be438u;
    // NOP
    // 0x1be43c: 0x0  nop
    ctx->pc = 0x1be43cu;
    // NOP
    ctx->pc = 0x1be440u;
}
