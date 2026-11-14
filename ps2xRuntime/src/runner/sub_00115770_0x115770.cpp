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

// Function: sub_00115770
// Address: 0x115770 - 0x1157b0
void sub_00115770_0x115770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115770_0x115770");
#endif

    switch (ctx->pc) {
        case 0x11578cu: goto label_11578c;
        case 0x11579cu: goto label_11579c;
        default: break;
    }

    ctx->pc = 0x115770u;

    // 0x115770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115778: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x115778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11577c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11577cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x115780: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x115780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115784: 0xc045578  jal         func_1155E0
    ctx->pc = 0x115784u;
    SET_GPR_U32(ctx, 31, 0x11578Cu);
    ctx->pc = 0x1155E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E0u, 0x115784u, 0x11578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11578Cu;
label_11578c:
    // 0x11578c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11578cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115790: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x115790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115794: 0xc0455a8  jal         func_1156A0
    ctx->pc = 0x115794u;
    SET_GPR_U32(ctx, 31, 0x11579Cu);
    ctx->pc = 0x1156A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156A0u, 0x115794u, 0x11579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11579Cu;
label_11579c:
    // 0x11579c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11579cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1157a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1157a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1157a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1157A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1157A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1157ACu;
    // 0x1157ac: 0x0  nop
    ctx->pc = 0x1157acu;
    // NOP
    ctx->pc = 0x1157b0u;
}
