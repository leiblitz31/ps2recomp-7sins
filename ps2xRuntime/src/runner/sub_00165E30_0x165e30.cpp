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

// Function: sub_00165E30
// Address: 0x165e30 - 0x165eb0
void sub_00165E30_0x165e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165E30_0x165e30");
#endif

    switch (ctx->pc) {
        case 0x165e64u: goto label_165e64;
        case 0x165e74u: goto label_165e74;
        case 0x165e94u: goto label_165e94;
        default: break;
    }

    ctx->pc = 0x165e30u;

    // 0x165e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165e38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x165e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x165e3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x165e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x165e40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x165E44u;
    {
        const bool branch_taken_0x165e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165e44) {
            ctx->pc = 0x165E94u;
            goto label_165e94;
        }
    }
    ctx->pc = 0x165E4Cu;
    // 0x165e4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x165e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x165e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165e58: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x165e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x165e5c: 0xc0597d4  jal         func_165F50
    ctx->pc = 0x165E5Cu;
    SET_GPR_U32(ctx, 31, 0x165E64u);
    ctx->pc = 0x165F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F50u, 0x165E5Cu, 0x165E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E64u;
label_165e64:
    // 0x165e64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e6c: 0xc0597ac  jal         func_165EB0
    ctx->pc = 0x165E6Cu;
    SET_GPR_U32(ctx, 31, 0x165E74u);
    ctx->pc = 0x165EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EB0u, 0x165E6Cu, 0x165E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E74u;
label_165e74:
    // 0x165e74: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x165e74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165e78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x165e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x165e7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x165e7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x165e80: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165E80u;
    {
        const bool branch_taken_0x165e80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x165e80) {
            ctx->pc = 0x165E94u;
            goto label_165e94;
        }
    }
    ctx->pc = 0x165E88u;
    // 0x165e88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e8c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x165E8Cu;
    SET_GPR_U32(ctx, 31, 0x165E94u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x165E8Cu, 0x165E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E94u;
label_165e94:
    // 0x165e94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165e9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x165e9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x165ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x165EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165EA8u;
    // 0x165ea8: 0x0  nop
    ctx->pc = 0x165ea8u;
    // NOP
    // 0x165eac: 0x0  nop
    ctx->pc = 0x165eacu;
    // NOP
    ctx->pc = 0x165eb0u;
}
