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

// Function: sub_0022A4F0
// Address: 0x22a4f0 - 0x22a540
void sub_0022A4F0_0x22a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A4F0_0x22a4f0");
#endif

    switch (ctx->pc) {
        case 0x22a514u: goto label_22a514;
        case 0x22a524u: goto label_22a524;
        default: break;
    }

    ctx->pc = 0x22a4f0u;

    // 0x22a4f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a4f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22a4fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22a500: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x22a500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x22a504: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22a504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a508: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22a508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a50c: 0xc08a950  jal         func_22A540
    ctx->pc = 0x22A50Cu;
    SET_GPR_U32(ctx, 31, 0x22A514u);
    ctx->pc = 0x22A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A540u, 0x22A50Cu, 0x22A514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A514u;
label_22a514:
    // 0x22a514: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22a514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a518: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22a518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a51c: 0xc08a1d4  jal         func_228750
    ctx->pc = 0x22A51Cu;
    SET_GPR_U32(ctx, 31, 0x22A524u);
    ctx->pc = 0x228750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228750u, 0x22A51Cu, 0x22A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A524u;
label_22a524:
    // 0x22a524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a528: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22a528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22a52c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A534u;
    // 0x22a534: 0x0  nop
    ctx->pc = 0x22a534u;
    // NOP
    // 0x22a538: 0x0  nop
    ctx->pc = 0x22a538u;
    // NOP
    // 0x22a53c: 0x0  nop
    ctx->pc = 0x22a53cu;
    // NOP
    ctx->pc = 0x22a540u;
}
