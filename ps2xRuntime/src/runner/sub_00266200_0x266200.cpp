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

// Function: sub_00266200
// Address: 0x266200 - 0x266260
void sub_00266200_0x266200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266200_0x266200");
#endif

    switch (ctx->pc) {
        case 0x26621cu: goto label_26621c;
        case 0x26622cu: goto label_26622c;
        case 0x266240u: goto label_266240;
        default: break;
    }

    ctx->pc = 0x266200u;

    // 0x266200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x266200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x266204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26620c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26620cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x266210: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x266210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266214: 0xc0998dc  jal         func_266370
    ctx->pc = 0x266214u;
    SET_GPR_U32(ctx, 31, 0x26621Cu);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x266214u, 0x26621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26621Cu;
label_26621c:
    // 0x26621c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26621cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266220: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x266220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266224: 0xc0998c4  jal         func_266310
    ctx->pc = 0x266224u;
    SET_GPR_U32(ctx, 31, 0x26622Cu);
    ctx->pc = 0x266310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266310u, 0x266224u, 0x26622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26622Cu;
label_26622c:
    // 0x26622c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266230: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x266230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266234: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x266234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266238: 0xc099898  jal         func_266260
    ctx->pc = 0x266238u;
    SET_GPR_U32(ctx, 31, 0x266240u);
    ctx->pc = 0x266260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266260u, 0x266238u, 0x266240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266240u;
label_266240:
    // 0x266240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x266240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266248: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x266248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26624c: 0x3e00008  jr          $ra
    ctx->pc = 0x26624Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26624Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266254u;
    // 0x266254: 0x0  nop
    ctx->pc = 0x266254u;
    // NOP
    // 0x266258: 0x0  nop
    ctx->pc = 0x266258u;
    // NOP
    // 0x26625c: 0x0  nop
    ctx->pc = 0x26625cu;
    // NOP
    ctx->pc = 0x266260u;
}
