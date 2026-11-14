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

// Function: sub_00490490
// Address: 0x490490 - 0x4904e0
void sub_00490490_0x490490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490490_0x490490");
#endif

    switch (ctx->pc) {
        case 0x4904b8u: goto label_4904b8;
        case 0x4904ccu: goto label_4904cc;
        default: break;
    }

    ctx->pc = 0x490490u;

    // 0x490490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x490490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x490494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x490498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x49049c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x49049cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4904a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x4904a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x4904a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4904a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4904a8: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x4904a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4904ac: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4904acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4904b0: 0xc123a20  jal         func_48E880
    ctx->pc = 0x4904B0u;
    SET_GPR_U32(ctx, 31, 0x4904B8u);
    ctx->pc = 0x48E880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E880u, 0x4904B0u, 0x4904B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4904B8u;
label_4904b8:
    // 0x4904b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4904b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4904bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4904bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4904c0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x4904c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4904c4: 0xc123f94  jal         func_48FE50
    ctx->pc = 0x4904C4u;
    SET_GPR_U32(ctx, 31, 0x4904CCu);
    ctx->pc = 0x48FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FE50u, 0x4904C4u, 0x4904CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4904CCu;
label_4904cc:
    // 0x4904cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4904ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4904d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4904d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4904d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4904D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4904D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4904DCu;
    // 0x4904dc: 0x0  nop
    ctx->pc = 0x4904dcu;
    // NOP
    ctx->pc = 0x4904e0u;
}
