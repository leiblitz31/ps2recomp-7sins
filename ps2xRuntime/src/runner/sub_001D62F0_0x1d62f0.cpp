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

// Function: sub_001D62F0
// Address: 0x1d62f0 - 0x1d6370
void sub_001D62F0_0x1d62f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D62F0_0x1d62f0");
#endif

    switch (ctx->pc) {
        case 0x1d6324u: goto label_1d6324;
        case 0x1d6334u: goto label_1d6334;
        case 0x1d6354u: goto label_1d6354;
        default: break;
    }

    ctx->pc = 0x1d62f0u;

    // 0x1d62f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d62f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d62f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d62f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d62f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d62fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d62fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d6300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6304: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D6304u;
    {
        const bool branch_taken_0x1d6304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6304) {
            ctx->pc = 0x1D6354u;
            goto label_1d6354;
        }
    }
    ctx->pc = 0x1D630Cu;
    // 0x1d630c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6314: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d6314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6318: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1d6318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d631c: 0xc075904  jal         func_1D6410
    ctx->pc = 0x1D631Cu;
    SET_GPR_U32(ctx, 31, 0x1D6324u);
    ctx->pc = 0x1D6410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6410u, 0x1D631Cu, 0x1D6324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6324u;
label_1d6324:
    // 0x1d6324: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d632c: 0xc0758dc  jal         func_1D6370
    ctx->pc = 0x1D632Cu;
    SET_GPR_U32(ctx, 31, 0x1D6334u);
    ctx->pc = 0x1D6370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6370u, 0x1D632Cu, 0x1D6334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6334u;
label_1d6334:
    // 0x1d6334: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d6334u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6338: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d633c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d633cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6340: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6340u;
    {
        const bool branch_taken_0x1d6340 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6340) {
            ctx->pc = 0x1D6354u;
            goto label_1d6354;
        }
    }
    ctx->pc = 0x1D6348u;
    // 0x1d6348: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d634c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D634Cu;
    SET_GPR_U32(ctx, 31, 0x1D6354u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D634Cu, 0x1D6354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6354u;
label_1d6354:
    // 0x1d6354: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d635c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d635cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d6360: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6368u;
    // 0x1d6368: 0x0  nop
    ctx->pc = 0x1d6368u;
    // NOP
    // 0x1d636c: 0x0  nop
    ctx->pc = 0x1d636cu;
    // NOP
    ctx->pc = 0x1d6370u;
}
