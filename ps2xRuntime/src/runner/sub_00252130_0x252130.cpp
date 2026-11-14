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

// Function: sub_00252130
// Address: 0x252130 - 0x2521a0
void sub_00252130_0x252130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252130_0x252130");
#endif

    switch (ctx->pc) {
        case 0x252168u: goto label_252168;
        case 0x252180u: goto label_252180;
        default: break;
    }

    ctx->pc = 0x252130u;

    // 0x252130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x252130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x252134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25213c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25213cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x252140: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x252140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x252144: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x252144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x252148: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x252148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25214c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x25214cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x252150: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x252150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252154: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x252154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252158: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x252158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25215c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x25215cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x252160: 0xc094868  jal         func_2521A0
    ctx->pc = 0x252160u;
    SET_GPR_U32(ctx, 31, 0x252168u);
    ctx->pc = 0x2521A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2521A0u, 0x252160u, 0x252168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252168u;
label_252168:
    // 0x252168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25216c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252174: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x252174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252178: 0xc094270  jal         func_2509C0
    ctx->pc = 0x252178u;
    SET_GPR_U32(ctx, 31, 0x252180u);
    ctx->pc = 0x2509C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2509C0u, 0x252178u, 0x252180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252180u;
label_252180:
    // 0x252180: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x252180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252184: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x252184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x252188: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25218c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25218cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252194: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x252194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x252198: 0x3e00008  jr          $ra
    ctx->pc = 0x252198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2521A0u;
}
