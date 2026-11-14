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

// Function: sub_00163140
// Address: 0x163140 - 0x1631c0
void sub_00163140_0x163140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163140_0x163140");
#endif

    switch (ctx->pc) {
        case 0x163174u: goto label_163174;
        case 0x163184u: goto label_163184;
        case 0x1631a4u: goto label_1631a4;
        default: break;
    }

    ctx->pc = 0x163140u;

    // 0x163140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163148: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x163148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16314c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x16314cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x163150: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163154: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x163154u;
    {
        const bool branch_taken_0x163154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163154) {
            ctx->pc = 0x1631A4u;
            goto label_1631a4;
        }
    }
    ctx->pc = 0x16315Cu;
    // 0x16315c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16315cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163160: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163164: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x163164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163168: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x163168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16316c: 0xc058c9c  jal         func_163270
    ctx->pc = 0x16316Cu;
    SET_GPR_U32(ctx, 31, 0x163174u);
    ctx->pc = 0x163270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163270u, 0x16316Cu, 0x163174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163174u;
label_163174:
    // 0x163174: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16317c: 0xc058c70  jal         func_1631C0
    ctx->pc = 0x16317Cu;
    SET_GPR_U32(ctx, 31, 0x163184u);
    ctx->pc = 0x1631C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1631C0u, 0x16317Cu, 0x163184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163184u;
label_163184:
    // 0x163184: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x163184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163188: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x163188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16318c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16318cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x163190: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163190u;
    {
        const bool branch_taken_0x163190 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x163190) {
            ctx->pc = 0x1631A4u;
            goto label_1631a4;
        }
    }
    ctx->pc = 0x163198u;
    // 0x163198: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16319c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x16319Cu;
    SET_GPR_U32(ctx, 31, 0x1631A4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x16319Cu, 0x1631A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1631A4u;
label_1631a4:
    // 0x1631a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1631a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1631a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1631a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1631ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1631acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1631b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1631B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1631B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1631B8u;
    // 0x1631b8: 0x0  nop
    ctx->pc = 0x1631b8u;
    // NOP
    // 0x1631bc: 0x0  nop
    ctx->pc = 0x1631bcu;
    // NOP
    ctx->pc = 0x1631c0u;
}
