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

// Function: sub_00227B80
// Address: 0x227b80 - 0x227c00
void sub_00227B80_0x227b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227B80_0x227b80");
#endif

    switch (ctx->pc) {
        case 0x227ba0u: goto label_227ba0;
        case 0x227bb0u: goto label_227bb0;
        case 0x227bc8u: goto label_227bc8;
        case 0x227be0u: goto label_227be0;
        default: break;
    }

    ctx->pc = 0x227b80u;

    // 0x227b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x227b8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x227b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x227b90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x227b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227b94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x227b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227b98: 0xc089f00  jal         func_227C00
    ctx->pc = 0x227B98u;
    SET_GPR_U32(ctx, 31, 0x227BA0u);
    ctx->pc = 0x227C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C00u, 0x227B98u, 0x227BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BA0u;
label_227ba0:
    // 0x227ba0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x227ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x227ba4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x227ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227ba8: 0xc089ea4  jal         func_227A90
    ctx->pc = 0x227BA8u;
    SET_GPR_U32(ctx, 31, 0x227BB0u);
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x227BA8u, 0x227BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BB0u;
label_227bb0:
    // 0x227bb0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x227bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x227bb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x227bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227bb8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x227bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227bbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x227bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227bc0: 0xc089e9c  jal         func_227A70
    ctx->pc = 0x227BC0u;
    SET_GPR_U32(ctx, 31, 0x227BC8u);
    ctx->pc = 0x227A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A70u, 0x227BC0u, 0x227BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BC8u;
label_227bc8:
    // 0x227bc8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x227bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x227bcc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x227bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227bd0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x227bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227bd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x227bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227bd8: 0xc089e94  jal         func_227A50
    ctx->pc = 0x227BD8u;
    SET_GPR_U32(ctx, 31, 0x227BE0u);
    ctx->pc = 0x227A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A50u, 0x227BD8u, 0x227BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BE0u;
label_227be0:
    // 0x227be0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x227be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x227be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227bec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x227becu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x227bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x227BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227BF8u;
    // 0x227bf8: 0x0  nop
    ctx->pc = 0x227bf8u;
    // NOP
    // 0x227bfc: 0x0  nop
    ctx->pc = 0x227bfcu;
    // NOP
    ctx->pc = 0x227c00u;
}
