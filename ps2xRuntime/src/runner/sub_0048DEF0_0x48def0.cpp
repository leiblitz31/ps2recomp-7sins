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

// Function: sub_0048DEF0
// Address: 0x48def0 - 0x48df40
void sub_0048DEF0_0x48def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DEF0_0x48def0");
#endif

    switch (ctx->pc) {
        case 0x48df08u: goto label_48df08;
        case 0x48df2cu: goto label_48df2c;
        default: break;
    }

    ctx->pc = 0x48def0u;

    // 0x48def0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48def0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48def4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48def4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48def8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48def8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48defc: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x48defcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x48df00: 0xc123858  jal         func_48E160
    ctx->pc = 0x48DF00u;
    SET_GPR_U32(ctx, 31, 0x48DF08u);
    ctx->pc = 0x48E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E160u, 0x48DF00u, 0x48DF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DF08u;
label_48df08:
    // 0x48df08: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x48df08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x48df0c: 0xa3a00018  sb          $zero, 0x18($sp)
    ctx->pc = 0x48df0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x48df10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48df10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48df14: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x48df14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x48df18: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x48df18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x48df1c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x48df1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x48df20: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x48df20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48df24: 0xc1237d0  jal         func_48DF40
    ctx->pc = 0x48DF24u;
    SET_GPR_U32(ctx, 31, 0x48DF2Cu);
    ctx->pc = 0x48DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DF40u, 0x48DF24u, 0x48DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DF2Cu;
label_48df2c:
    // 0x48df2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48df30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48df30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48df34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48df34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48df38: 0x3e00008  jr          $ra
    ctx->pc = 0x48DF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DF40u;
}
