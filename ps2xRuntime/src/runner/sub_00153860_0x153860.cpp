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

// Function: sub_00153860
// Address: 0x153860 - 0x1538d0
void sub_00153860_0x153860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153860_0x153860");
#endif

    switch (ctx->pc) {
        case 0x153894u: goto label_153894;
        case 0x1538b4u: goto label_1538b4;
        default: break;
    }

    ctx->pc = 0x153860u;

    // 0x153860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x153868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15386c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15386cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x153870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153874: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x153874u;
    {
        const bool branch_taken_0x153874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153874) {
            ctx->pc = 0x1538B4u;
            goto label_1538b4;
        }
    }
    ctx->pc = 0x15387Cu;
    // 0x15387c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153880: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x153880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153884: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x153884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153888: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x153888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15388c: 0xc0555c8  jal         func_155720
    ctx->pc = 0x15388Cu;
    SET_GPR_U32(ctx, 31, 0x153894u);
    ctx->pc = 0x155720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155720u, 0x15388Cu, 0x153894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153894u;
label_153894:
    // 0x153894: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x153894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153898: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x153898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15389c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15389cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1538a0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1538A0u;
    {
        const bool branch_taken_0x1538a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1538a0) {
            ctx->pc = 0x1538B4u;
            goto label_1538b4;
        }
    }
    ctx->pc = 0x1538A8u;
    // 0x1538a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1538a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1538ac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1538ACu;
    SET_GPR_U32(ctx, 31, 0x1538B4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1538ACu, 0x1538B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1538B4u;
label_1538b4:
    // 0x1538b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1538b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1538b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1538b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1538bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1538bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1538c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1538C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1538C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1538C8u;
    // 0x1538c8: 0x0  nop
    ctx->pc = 0x1538c8u;
    // NOP
    // 0x1538cc: 0x0  nop
    ctx->pc = 0x1538ccu;
    // NOP
    ctx->pc = 0x1538d0u;
}
