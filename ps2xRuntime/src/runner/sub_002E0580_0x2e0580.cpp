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

// Function: sub_002E0580
// Address: 0x2e0580 - 0x2e05d0
void sub_002E0580_0x2e0580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0580_0x2e0580");
#endif

    switch (ctx->pc) {
        case 0x2e05a4u: goto label_2e05a4;
        case 0x2e05b4u: goto label_2e05b4;
        default: break;
    }

    ctx->pc = 0x2e0580u;

    // 0x2e0580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e0580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e0584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e0588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e058c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e058cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e0590: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2e0590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2e0594: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e0594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0598: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2e0598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e059c: 0xc0b8174  jal         func_2E05D0
    ctx->pc = 0x2E059Cu;
    SET_GPR_U32(ctx, 31, 0x2E05A4u);
    ctx->pc = 0x2E05D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E05D0u, 0x2E059Cu, 0x2E05A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05A4u;
label_2e05a4:
    // 0x2e05a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e05a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e05a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e05a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05ac: 0xc0b8144  jal         func_2E0510
    ctx->pc = 0x2E05ACu;
    SET_GPR_U32(ctx, 31, 0x2E05B4u);
    ctx->pc = 0x2E0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0510u, 0x2E05ACu, 0x2E05B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05B4u;
label_2e05b4:
    // 0x2e05b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e05b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e05b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e05b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e05bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E05BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E05BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E05C4u;
    // 0x2e05c4: 0x0  nop
    ctx->pc = 0x2e05c4u;
    // NOP
    // 0x2e05c8: 0x0  nop
    ctx->pc = 0x2e05c8u;
    // NOP
    // 0x2e05cc: 0x0  nop
    ctx->pc = 0x2e05ccu;
    // NOP
    ctx->pc = 0x2e05d0u;
}
