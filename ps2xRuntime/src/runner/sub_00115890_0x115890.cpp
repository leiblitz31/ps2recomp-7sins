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

// Function: sub_00115890
// Address: 0x115890 - 0x1158e0
void sub_00115890_0x115890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115890_0x115890");
#endif

    switch (ctx->pc) {
        case 0x1158b8u: goto label_1158b8;
        case 0x1158ccu: goto label_1158cc;
        default: break;
    }

    ctx->pc = 0x115890u;

    // 0x115890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x115890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x115894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115898: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x115898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x11589c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x11589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1158a0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1158a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1158a4: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1158a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1158a8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1158a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1158ac: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1158acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1158b0: 0xc045dc4  jal         func_117710
    ctx->pc = 0x1158B0u;
    SET_GPR_U32(ctx, 31, 0x1158B8u);
    ctx->pc = 0x117710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117710u, 0x1158B0u, 0x1158B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158B8u;
label_1158b8:
    // 0x1158b8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1158b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1158bc: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x1158bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1158c0: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1158c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1158c4: 0xc045638  jal         func_1158E0
    ctx->pc = 0x1158C4u;
    SET_GPR_U32(ctx, 31, 0x1158CCu);
    ctx->pc = 0x1158E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158E0u, 0x1158C4u, 0x1158CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158CCu;
label_1158cc:
    // 0x1158cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1158ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1158d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1158d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1158d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1158D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1158D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1158DCu;
    // 0x1158dc: 0x0  nop
    ctx->pc = 0x1158dcu;
    // NOP
    ctx->pc = 0x1158e0u;
}
