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

// Function: sub_002B6700
// Address: 0x2b6700 - 0x2b6780
void sub_002B6700_0x2b6700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6700_0x2b6700");
#endif

    switch (ctx->pc) {
        case 0x2b6734u: goto label_2b6734;
        case 0x2b6744u: goto label_2b6744;
        case 0x2b6764u: goto label_2b6764;
        default: break;
    }

    ctx->pc = 0x2b6700u;

    // 0x2b6700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6708: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b6708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b670c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b670cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b6710: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6714: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B6714u;
    {
        const bool branch_taken_0x2b6714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6714) {
            ctx->pc = 0x2B6764u;
            goto label_2b6764;
        }
    }
    ctx->pc = 0x2B671Cu;
    // 0x2b671c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b671cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6724: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b6724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6728: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b6728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b672c: 0xc0ada0c  jal         func_2B6830
    ctx->pc = 0x2B672Cu;
    SET_GPR_U32(ctx, 31, 0x2B6734u);
    ctx->pc = 0x2B6830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6830u, 0x2B672Cu, 0x2B6734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6734u;
label_2b6734:
    // 0x2b6734: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b6738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b673c: 0xc0ad9e0  jal         func_2B6780
    ctx->pc = 0x2B673Cu;
    SET_GPR_U32(ctx, 31, 0x2B6744u);
    ctx->pc = 0x2B6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6780u, 0x2B673Cu, 0x2B6744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6744u;
label_2b6744:
    // 0x2b6744: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b6744u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6748: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b6748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b674c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b674cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b6750: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6750u;
    {
        const bool branch_taken_0x2b6750 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b6750) {
            ctx->pc = 0x2B6764u;
            goto label_2b6764;
        }
    }
    ctx->pc = 0x2B6758u;
    // 0x2b6758: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b675c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B675Cu;
    SET_GPR_U32(ctx, 31, 0x2B6764u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B675Cu, 0x2B6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6764u;
label_2b6764:
    // 0x2b6764: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b676c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b676cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6770: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6778u;
    // 0x2b6778: 0x0  nop
    ctx->pc = 0x2b6778u;
    // NOP
    // 0x2b677c: 0x0  nop
    ctx->pc = 0x2b677cu;
    // NOP
    ctx->pc = 0x2b6780u;
}
