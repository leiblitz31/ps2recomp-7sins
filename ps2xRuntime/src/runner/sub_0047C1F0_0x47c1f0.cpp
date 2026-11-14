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

// Function: sub_0047C1F0
// Address: 0x47c1f0 - 0x47c250
void sub_0047C1F0_0x47c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C1F0_0x47c1f0");
#endif

    switch (ctx->pc) {
        case 0x47c20cu: goto label_47c20c;
        case 0x47c21cu: goto label_47c21c;
        case 0x47c230u: goto label_47c230;
        default: break;
    }

    ctx->pc = 0x47c1f0u;

    // 0x47c1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47c1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47c1f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47c1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47c1f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47c1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47c1fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x47c1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x47c200: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47c200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47c204: 0xc11f000  jal         func_47C000
    ctx->pc = 0x47C204u;
    SET_GPR_U32(ctx, 31, 0x47C20Cu);
    ctx->pc = 0x47C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C000u, 0x47C204u, 0x47C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C20Cu;
label_47c20c:
    // 0x47c20c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47c20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c210: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47c210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47c214: 0xc11f0c0  jal         func_47C300
    ctx->pc = 0x47C214u;
    SET_GPR_U32(ctx, 31, 0x47C21Cu);
    ctx->pc = 0x47C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C300u, 0x47C214u, 0x47C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C21Cu;
label_47c21c:
    // 0x47c21c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47c220: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47c220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c224: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x47c224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c228: 0xc11f094  jal         func_47C250
    ctx->pc = 0x47C228u;
    SET_GPR_U32(ctx, 31, 0x47C230u);
    ctx->pc = 0x47C250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C250u, 0x47C228u, 0x47C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C230u;
label_47c230:
    // 0x47c230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47c230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47c234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47c234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47c238: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47c238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47c23c: 0x3e00008  jr          $ra
    ctx->pc = 0x47C23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C244u;
    // 0x47c244: 0x0  nop
    ctx->pc = 0x47c244u;
    // NOP
    // 0x47c248: 0x0  nop
    ctx->pc = 0x47c248u;
    // NOP
    // 0x47c24c: 0x0  nop
    ctx->pc = 0x47c24cu;
    // NOP
    ctx->pc = 0x47c250u;
}
