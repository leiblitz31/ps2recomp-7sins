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

// Function: sub_00290780
// Address: 0x290780 - 0x290800
void sub_00290780_0x290780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290780_0x290780");
#endif

    switch (ctx->pc) {
        case 0x2907b4u: goto label_2907b4;
        case 0x2907c4u: goto label_2907c4;
        case 0x2907e4u: goto label_2907e4;
        default: break;
    }

    ctx->pc = 0x290780u;

    // 0x290780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x290784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x290788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29078c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x29078cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x290790: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290794: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x290794u;
    {
        const bool branch_taken_0x290794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290794) {
            ctx->pc = 0x2907E4u;
            goto label_2907e4;
        }
    }
    ctx->pc = 0x29079Cu;
    // 0x29079c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x29079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2907a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2907a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2907a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2907a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2907a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2907a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2907ac: 0xc0a4168  jal         func_2905A0
    ctx->pc = 0x2907ACu;
    SET_GPR_U32(ctx, 31, 0x2907B4u);
    ctx->pc = 0x2905A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2905A0u, 0x2907ACu, 0x2907B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907B4u;
label_2907b4:
    // 0x2907b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2907b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2907b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2907b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907bc: 0xc0a4200  jal         func_290800
    ctx->pc = 0x2907BCu;
    SET_GPR_U32(ctx, 31, 0x2907C4u);
    ctx->pc = 0x290800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290800u, 0x2907BCu, 0x2907C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907C4u;
label_2907c4:
    // 0x2907c4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2907c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2907c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2907c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2907cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2907ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2907d0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2907D0u;
    {
        const bool branch_taken_0x2907d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2907d0) {
            ctx->pc = 0x2907E4u;
            goto label_2907e4;
        }
    }
    ctx->pc = 0x2907D8u;
    // 0x2907d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2907d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2907dc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2907DCu;
    SET_GPR_U32(ctx, 31, 0x2907E4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2907DCu, 0x2907E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907E4u;
label_2907e4:
    // 0x2907e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2907e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2907e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2907e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2907ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2907ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2907f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2907F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2907F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2907F8u;
    // 0x2907f8: 0x0  nop
    ctx->pc = 0x2907f8u;
    // NOP
    // 0x2907fc: 0x0  nop
    ctx->pc = 0x2907fcu;
    // NOP
    ctx->pc = 0x290800u;
}
