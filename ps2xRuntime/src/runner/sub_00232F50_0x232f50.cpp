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

// Function: sub_00232F50
// Address: 0x232f50 - 0x232fe0
void sub_00232F50_0x232f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232F50_0x232f50");
#endif

    switch (ctx->pc) {
        case 0x232f94u: goto label_232f94;
        case 0x232fa4u: goto label_232fa4;
        case 0x232fc4u: goto label_232fc4;
        default: break;
    }

    ctx->pc = 0x232f50u;

    // 0x232f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232f58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x232f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x232f5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x232f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x232f60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232f64: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x232F64u;
    {
        const bool branch_taken_0x232f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f64) {
            ctx->pc = 0x232FC4u;
            goto label_232fc4;
        }
    }
    ctx->pc = 0x232F6Cu;
    // 0x232f6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x232f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x232f70: 0x24635380  addiu       $v1, $v1, 0x5380
    ctx->pc = 0x232f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21376));
    // 0x232f74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232f78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x232f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x232f7c: 0xaf80bb88  sw          $zero, -0x4478($gp)
    ctx->pc = 0x232f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949768), GPR_U32(ctx, 0));
    // 0x232f80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232f84: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x232f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x232f88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x232f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232f8c: 0xc08cb1c  jal         func_232C70
    ctx->pc = 0x232F8Cu;
    SET_GPR_U32(ctx, 31, 0x232F94u);
    ctx->pc = 0x232C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C70u, 0x232F8Cu, 0x232F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F94u;
label_232f94:
    // 0x232f94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x232f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f9c: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x232F9Cu;
    SET_GPR_U32(ctx, 31, 0x232FA4u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x232F9Cu, 0x232FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FA4u;
label_232fa4:
    // 0x232fa4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x232fa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232fa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x232fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x232fac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x232facu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x232fb0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232FB0u;
    {
        const bool branch_taken_0x232fb0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x232fb0) {
            ctx->pc = 0x232FC4u;
            goto label_232fc4;
        }
    }
    ctx->pc = 0x232FB8u;
    // 0x232fb8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x232fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232fbc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x232FBCu;
    SET_GPR_U32(ctx, 31, 0x232FC4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x232FBCu, 0x232FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FC4u;
label_232fc4:
    // 0x232fc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232fcc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x232fccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x232fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x232FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232FD8u;
    // 0x232fd8: 0x0  nop
    ctx->pc = 0x232fd8u;
    // NOP
    // 0x232fdc: 0x0  nop
    ctx->pc = 0x232fdcu;
    // NOP
    ctx->pc = 0x232fe0u;
}
