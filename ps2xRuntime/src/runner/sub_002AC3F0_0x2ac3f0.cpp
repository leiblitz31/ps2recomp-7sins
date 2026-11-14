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

// Function: sub_002AC3F0
// Address: 0x2ac3f0 - 0x2ac470
void sub_002AC3F0_0x2ac3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC3F0_0x2ac3f0");
#endif

    switch (ctx->pc) {
        case 0x2ac424u: goto label_2ac424;
        case 0x2ac434u: goto label_2ac434;
        case 0x2ac454u: goto label_2ac454;
        default: break;
    }

    ctx->pc = 0x2ac3f0u;

    // 0x2ac3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac3f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac3f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ac3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ac3fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2ac3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ac400: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac404: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AC404u;
    {
        const bool branch_taken_0x2ac404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac404) {
            ctx->pc = 0x2AC454u;
            goto label_2ac454;
        }
    }
    ctx->pc = 0x2AC40Cu;
    // 0x2ac40c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ac40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac410: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac414: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ac414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac418: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2ac418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ac41c: 0xc0ab148  jal         func_2AC520
    ctx->pc = 0x2AC41Cu;
    SET_GPR_U32(ctx, 31, 0x2AC424u);
    ctx->pc = 0x2AC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC520u, 0x2AC41Cu, 0x2AC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC424u;
label_2ac424:
    // 0x2ac424: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac42c: 0xc0ab11c  jal         func_2AC470
    ctx->pc = 0x2AC42Cu;
    SET_GPR_U32(ctx, 31, 0x2AC434u);
    ctx->pc = 0x2AC470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC470u, 0x2AC42Cu, 0x2AC434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC434u;
label_2ac434:
    // 0x2ac434: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2ac434u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac438: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ac438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ac43c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ac43cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ac440: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC440u;
    {
        const bool branch_taken_0x2ac440 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ac440) {
            ctx->pc = 0x2AC454u;
            goto label_2ac454;
        }
    }
    ctx->pc = 0x2AC448u;
    // 0x2ac448: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac44c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2AC44Cu;
    SET_GPR_U32(ctx, 31, 0x2AC454u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2AC44Cu, 0x2AC454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC454u;
label_2ac454:
    // 0x2ac454: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac45c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac45cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac460: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC468u;
    // 0x2ac468: 0x0  nop
    ctx->pc = 0x2ac468u;
    // NOP
    // 0x2ac46c: 0x0  nop
    ctx->pc = 0x2ac46cu;
    // NOP
    ctx->pc = 0x2ac470u;
}
