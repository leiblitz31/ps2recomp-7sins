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

// Function: sub_002854C0
// Address: 0x2854c0 - 0x285530
void sub_002854C0_0x2854c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002854C0_0x2854c0");
#endif

    switch (ctx->pc) {
        case 0x2854e0u: goto label_2854e0;
        case 0x2854f4u: goto label_2854f4;
        case 0x285508u: goto label_285508;
        default: break;
    }

    ctx->pc = 0x2854c0u;

    // 0x2854c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2854c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2854c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2854c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2854c8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2854c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2854cc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2854ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2854d0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2854d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2854d4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2854d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2854d8: 0xc0a1568  jal         func_2855A0
    ctx->pc = 0x2854D8u;
    SET_GPR_U32(ctx, 31, 0x2854E0u);
    ctx->pc = 0x2855A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2855A0u, 0x2854D8u, 0x2854E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2854E0u;
label_2854e0:
    // 0x2854e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2854e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2854e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2854e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2854e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2854e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2854ec: 0xc0a154c  jal         func_285530
    ctx->pc = 0x2854ECu;
    SET_GPR_U32(ctx, 31, 0x2854F4u);
    ctx->pc = 0x285530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285530u, 0x2854ECu, 0x2854F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2854F4u;
label_2854f4:
    // 0x2854f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2854f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2854f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2854f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2854fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2854fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285500: 0xc0a37c8  jal         func_28DF20
    ctx->pc = 0x285500u;
    SET_GPR_U32(ctx, 31, 0x285508u);
    ctx->pc = 0x28DF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DF20u, 0x285500u, 0x285508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285508u;
label_285508:
    // 0x285508: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x285508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28550c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28550cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x285510: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x285510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285518: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x285518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28551c: 0x3e00008  jr          $ra
    ctx->pc = 0x28551Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28551Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285524u;
    // 0x285524: 0x0  nop
    ctx->pc = 0x285524u;
    // NOP
    // 0x285528: 0x0  nop
    ctx->pc = 0x285528u;
    // NOP
    // 0x28552c: 0x0  nop
    ctx->pc = 0x28552cu;
    // NOP
    ctx->pc = 0x285530u;
}
