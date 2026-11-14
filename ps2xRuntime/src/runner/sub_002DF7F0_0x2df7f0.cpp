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

// Function: sub_002DF7F0
// Address: 0x2df7f0 - 0x2df860
void sub_002DF7F0_0x2df7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF7F0_0x2df7f0");
#endif

    switch (ctx->pc) {
        case 0x2df810u: goto label_2df810;
        case 0x2df824u: goto label_2df824;
        case 0x2df838u: goto label_2df838;
        default: break;
    }

    ctx->pc = 0x2df7f0u;

    // 0x2df7f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2df7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2df7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df7f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2df7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2df7fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2df7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2df800: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2df800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2df804: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2df804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df808: 0xc0b7e34  jal         func_2DF8D0
    ctx->pc = 0x2DF808u;
    SET_GPR_U32(ctx, 31, 0x2DF810u);
    ctx->pc = 0x2DF8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF8D0u, 0x2DF808u, 0x2DF810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF810u;
label_2df810:
    // 0x2df810: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2df810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df814: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2df814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2df818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df81c: 0xc0b7e18  jal         func_2DF860
    ctx->pc = 0x2DF81Cu;
    SET_GPR_U32(ctx, 31, 0x2DF824u);
    ctx->pc = 0x2DF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF860u, 0x2DF81Cu, 0x2DF824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF824u;
label_2df824:
    // 0x2df824: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2df824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df828: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2df828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df82c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2df82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df830: 0xc0b8ab0  jal         func_2E2AC0
    ctx->pc = 0x2DF830u;
    SET_GPR_U32(ctx, 31, 0x2DF838u);
    ctx->pc = 0x2E2AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2AC0u, 0x2DF830u, 0x2DF838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF838u;
label_2df838:
    // 0x2df838: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2df838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df83c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2df83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2df840: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2df840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df848: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2df848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df84c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF854u;
    // 0x2df854: 0x0  nop
    ctx->pc = 0x2df854u;
    // NOP
    // 0x2df858: 0x0  nop
    ctx->pc = 0x2df858u;
    // NOP
    // 0x2df85c: 0x0  nop
    ctx->pc = 0x2df85cu;
    // NOP
    ctx->pc = 0x2df860u;
}
