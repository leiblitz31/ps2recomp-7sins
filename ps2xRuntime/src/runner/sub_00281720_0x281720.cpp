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

// Function: sub_00281720
// Address: 0x281720 - 0x281770
void sub_00281720_0x281720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281720_0x281720");
#endif

    switch (ctx->pc) {
        case 0x281744u: goto label_281744;
        default: break;
    }

    ctx->pc = 0x281720u;

    // 0x281720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x281728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28172c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28172cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x281730: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x281730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x281734: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x281734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281738: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x281738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28173c: 0xc0a05dc  jal         func_281770
    ctx->pc = 0x28173Cu;
    SET_GPR_U32(ctx, 31, 0x281744u);
    ctx->pc = 0x281770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281770u, 0x28173Cu, 0x281744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281744u;
label_281744:
    // 0x281744: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x281744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281748: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x281748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28174c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281750: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x281750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x281754: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x281754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28175c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28175cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281760: 0x3e00008  jr          $ra
    ctx->pc = 0x281760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281768u;
    // 0x281768: 0x0  nop
    ctx->pc = 0x281768u;
    // NOP
    // 0x28176c: 0x0  nop
    ctx->pc = 0x28176cu;
    // NOP
    ctx->pc = 0x281770u;
}
