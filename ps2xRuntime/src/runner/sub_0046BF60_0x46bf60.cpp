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

// Function: sub_0046BF60
// Address: 0x46bf60 - 0x46bfb0
void sub_0046BF60_0x46bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BF60_0x46bf60");
#endif

    switch (ctx->pc) {
        case 0x46bf78u: goto label_46bf78;
        case 0x46bf88u: goto label_46bf88;
        default: break;
    }

    ctx->pc = 0x46bf60u;

    // 0x46bf60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46bf64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46bf68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46bf6c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x46bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x46bf70: 0xc11b02c  jal         func_46C0B0
    ctx->pc = 0x46BF70u;
    SET_GPR_U32(ctx, 31, 0x46BF78u);
    ctx->pc = 0x46C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C0B0u, 0x46BF70u, 0x46BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BF78u;
label_46bf78:
    // 0x46bf78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bf7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46bf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46bf80: 0xc11afec  jal         func_46BFB0
    ctx->pc = 0x46BF80u;
    SET_GPR_U32(ctx, 31, 0x46BF88u);
    ctx->pc = 0x46BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFB0u, 0x46BF80u, 0x46BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BF88u;
label_46bf88:
    // 0x46bf88: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46bf8c: 0x24636cf8  addiu       $v1, $v1, 0x6CF8
    ctx->pc = 0x46bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27896));
    // 0x46bf90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bf94: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x46bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x46bf98: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bf9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46bfa0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46bfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x46BFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BFACu;
    // 0x46bfac: 0x0  nop
    ctx->pc = 0x46bfacu;
    // NOP
    ctx->pc = 0x46bfb0u;
}
