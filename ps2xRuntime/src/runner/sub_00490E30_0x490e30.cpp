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

// Function: sub_00490E30
// Address: 0x490e30 - 0x490eb0
void sub_00490E30_0x490e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490E30_0x490e30");
#endif

    switch (ctx->pc) {
        case 0x490e64u: goto label_490e64;
        case 0x490e74u: goto label_490e74;
        case 0x490e94u: goto label_490e94;
        default: break;
    }

    ctx->pc = 0x490e30u;

    // 0x490e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x490e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x490e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490e38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x490e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x490e3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x490e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x490e40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490e44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x490E44u;
    {
        const bool branch_taken_0x490e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490e44) {
            ctx->pc = 0x490E94u;
            goto label_490e94;
        }
    }
    ctx->pc = 0x490E4Cu;
    // 0x490e4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x490e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490e50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490e54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x490e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x490e58: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x490e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x490e5c: 0xc1243ac  jal         func_490EB0
    ctx->pc = 0x490E5Cu;
    SET_GPR_U32(ctx, 31, 0x490E64u);
    ctx->pc = 0x490EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490EB0u, 0x490E5Cu, 0x490E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490E64u;
label_490e64:
    // 0x490e64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490e68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x490e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490e6c: 0xc124298  jal         func_490A60
    ctx->pc = 0x490E6Cu;
    SET_GPR_U32(ctx, 31, 0x490E74u);
    ctx->pc = 0x490A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490A60u, 0x490E6Cu, 0x490E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490E74u;
label_490e74:
    // 0x490e74: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x490e74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490e78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x490e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x490e7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x490e7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x490e80: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x490E80u;
    {
        const bool branch_taken_0x490e80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x490e80) {
            ctx->pc = 0x490E94u;
            goto label_490e94;
        }
    }
    ctx->pc = 0x490E88u;
    // 0x490e88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490e8c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x490E8Cu;
    SET_GPR_U32(ctx, 31, 0x490E94u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x490E8Cu, 0x490E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490E94u;
label_490e94:
    // 0x490e94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490e9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x490e9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x490ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x490EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490EA8u;
    // 0x490ea8: 0x0  nop
    ctx->pc = 0x490ea8u;
    // NOP
    // 0x490eac: 0x0  nop
    ctx->pc = 0x490eacu;
    // NOP
    ctx->pc = 0x490eb0u;
}
