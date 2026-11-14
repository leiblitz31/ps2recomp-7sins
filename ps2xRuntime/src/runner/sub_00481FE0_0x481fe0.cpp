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

// Function: sub_00481FE0
// Address: 0x481fe0 - 0x482030
void sub_00481FE0_0x481fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481FE0_0x481fe0");
#endif

    switch (ctx->pc) {
        case 0x481ff8u: goto label_481ff8;
        case 0x48201cu: goto label_48201c;
        default: break;
    }

    ctx->pc = 0x481fe0u;

    // 0x481fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481fe8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x481fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x481fec: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x481fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x481ff0: 0xc120894  jal         func_482250
    ctx->pc = 0x481FF0u;
    SET_GPR_U32(ctx, 31, 0x481FF8u);
    ctx->pc = 0x482250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482250u, 0x481FF0u, 0x481FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481FF8u;
label_481ff8:
    // 0x481ff8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x481ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x481ffc: 0xa3a00018  sb          $zero, 0x18($sp)
    ctx->pc = 0x481ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x482000: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x482000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482004: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x482004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x482008: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x482008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x48200c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x48200cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x482010: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x482010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482014: 0xc12080c  jal         func_482030
    ctx->pc = 0x482014u;
    SET_GPR_U32(ctx, 31, 0x48201Cu);
    ctx->pc = 0x482030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482030u, 0x482014u, 0x48201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48201Cu;
label_48201c:
    // 0x48201c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482024: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x482024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x482028: 0x3e00008  jr          $ra
    ctx->pc = 0x482028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482030u;
}
