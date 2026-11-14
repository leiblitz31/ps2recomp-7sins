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

// Function: sub_002CB040
// Address: 0x2cb040 - 0x2cb0c0
void sub_002CB040_0x2cb040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB040_0x2cb040");
#endif

    switch (ctx->pc) {
        case 0x2cb074u: goto label_2cb074;
        case 0x2cb084u: goto label_2cb084;
        case 0x2cb0a4u: goto label_2cb0a4;
        default: break;
    }

    ctx->pc = 0x2cb040u;

    // 0x2cb040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb048: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cb048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cb04c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2cb04cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cb050: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb054: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CB054u;
    {
        const bool branch_taken_0x2cb054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb054) {
            ctx->pc = 0x2CB0A4u;
            goto label_2cb0a4;
        }
    }
    ctx->pc = 0x2CB05Cu;
    // 0x2cb05c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2cb05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb064: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cb064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb068: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cb068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cb06c: 0xc0b2c5c  jal         func_2CB170
    ctx->pc = 0x2CB06Cu;
    SET_GPR_U32(ctx, 31, 0x2CB074u);
    ctx->pc = 0x2CB170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB170u, 0x2CB06Cu, 0x2CB074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB074u;
label_2cb074:
    // 0x2cb074: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cb074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb07c: 0xc0b2c30  jal         func_2CB0C0
    ctx->pc = 0x2CB07Cu;
    SET_GPR_U32(ctx, 31, 0x2CB084u);
    ctx->pc = 0x2CB0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB0C0u, 0x2CB07Cu, 0x2CB084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB084u;
label_2cb084:
    // 0x2cb084: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2cb084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb088: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cb088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cb08c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cb08cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cb090: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB090u;
    {
        const bool branch_taken_0x2cb090 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cb090) {
            ctx->pc = 0x2CB0A4u;
            goto label_2cb0a4;
        }
    }
    ctx->pc = 0x2CB098u;
    // 0x2cb098: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cb098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb09c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2CB09Cu;
    SET_GPR_U32(ctx, 31, 0x2CB0A4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2CB09Cu, 0x2CB0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB0A4u;
label_2cb0a4:
    // 0x2cb0a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb0ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cb0acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cb0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB0B8u;
    // 0x2cb0b8: 0x0  nop
    ctx->pc = 0x2cb0b8u;
    // NOP
    // 0x2cb0bc: 0x0  nop
    ctx->pc = 0x2cb0bcu;
    // NOP
    ctx->pc = 0x2cb0c0u;
}
