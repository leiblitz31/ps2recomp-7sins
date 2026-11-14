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

// Function: sub_00260340
// Address: 0x260340 - 0x260390
void sub_00260340_0x260340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260340_0x260340");
#endif

    switch (ctx->pc) {
        case 0x26036cu: goto label_26036c;
        case 0x260378u: goto label_260378;
        default: break;
    }

    ctx->pc = 0x260340u;

    // 0x260340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x260340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x260344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x260348: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x260348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26034c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x26034cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x260350: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x260350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260354: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x260354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260358: 0x2446fff9  addiu       $a2, $v0, -0x7
    ctx->pc = 0x260358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x26035c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x26035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x260360: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x260360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x260364: 0xc078840  jal         func_1E2100
    ctx->pc = 0x260364u;
    SET_GPR_U32(ctx, 31, 0x26036Cu);
    ctx->pc = 0x1E2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2100u, 0x260364u, 0x26036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26036Cu;
label_26036c:
    // 0x26036c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x26036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x260370: 0xc078ae0  jal         func_1E2B80
    ctx->pc = 0x260370u;
    SET_GPR_U32(ctx, 31, 0x260378u);
    ctx->pc = 0x1E2B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B80u, 0x260370u, 0x260378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260378u;
label_260378:
    // 0x260378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26037c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26037cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x260380: 0x3e00008  jr          $ra
    ctx->pc = 0x260380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260388u;
    // 0x260388: 0x0  nop
    ctx->pc = 0x260388u;
    // NOP
    // 0x26038c: 0x0  nop
    ctx->pc = 0x26038cu;
    // NOP
    ctx->pc = 0x260390u;
}
