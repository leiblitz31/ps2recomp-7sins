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

// Function: sub_00137F50
// Address: 0x137f50 - 0x137fd0
void sub_00137F50_0x137f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137F50_0x137f50");
#endif

    switch (ctx->pc) {
        case 0x137f84u: goto label_137f84;
        case 0x137f94u: goto label_137f94;
        case 0x137fb4u: goto label_137fb4;
        default: break;
    }

    ctx->pc = 0x137f50u;

    // 0x137f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137f58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x137f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x137f5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x137f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x137f60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f64: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x137F64u;
    {
        const bool branch_taken_0x137f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137f64) {
            ctx->pc = 0x137FB4u;
            goto label_137fb4;
        }
    }
    ctx->pc = 0x137F6Cu;
    // 0x137f6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x137f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x137f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137f78: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x137f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x137f7c: 0xc04e020  jal         func_138080
    ctx->pc = 0x137F7Cu;
    SET_GPR_U32(ctx, 31, 0x137F84u);
    ctx->pc = 0x138080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138080u, 0x137F7Cu, 0x137F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F84u;
label_137f84:
    // 0x137f84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x137f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f8c: 0xc04dff4  jal         func_137FD0
    ctx->pc = 0x137F8Cu;
    SET_GPR_U32(ctx, 31, 0x137F94u);
    ctx->pc = 0x137FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137FD0u, 0x137F8Cu, 0x137F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F94u;
label_137f94:
    // 0x137f94: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x137f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137f98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x137f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x137f9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x137f9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x137fa0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137FA0u;
    {
        const bool branch_taken_0x137fa0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x137fa0) {
            ctx->pc = 0x137FB4u;
            goto label_137fb4;
        }
    }
    ctx->pc = 0x137FA8u;
    // 0x137fa8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x137fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137fac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x137FACu;
    SET_GPR_U32(ctx, 31, 0x137FB4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x137FACu, 0x137FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FB4u;
label_137fb4:
    // 0x137fb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137fbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x137fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x137fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x137FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137FC8u;
    // 0x137fc8: 0x0  nop
    ctx->pc = 0x137fc8u;
    // NOP
    // 0x137fcc: 0x0  nop
    ctx->pc = 0x137fccu;
    // NOP
    ctx->pc = 0x137fd0u;
}
