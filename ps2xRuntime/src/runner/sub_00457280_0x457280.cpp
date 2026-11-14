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

// Function: sub_00457280
// Address: 0x457280 - 0x4572d0
void sub_00457280_0x457280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457280_0x457280");
#endif

    switch (ctx->pc) {
        case 0x457298u: goto label_457298;
        case 0x4572bcu: goto label_4572bc;
        default: break;
    }

    ctx->pc = 0x457280u;

    // 0x457280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x457280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x457284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x457284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x457288: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x457288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x45728c: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x45728cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x457290: 0xc115d3c  jal         func_4574F0
    ctx->pc = 0x457290u;
    SET_GPR_U32(ctx, 31, 0x457298u);
    ctx->pc = 0x4574F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4574F0u, 0x457290u, 0x457298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457298u;
label_457298:
    // 0x457298: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x457298u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x45729c: 0xa3a00018  sb          $zero, 0x18($sp)
    ctx->pc = 0x45729cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x4572a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4572a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4572a4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x4572a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x4572a8: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x4572a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4572ac: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x4572acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x4572b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4572b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4572b4: 0xc115cb4  jal         func_4572D0
    ctx->pc = 0x4572B4u;
    SET_GPR_U32(ctx, 31, 0x4572BCu);
    ctx->pc = 0x4572D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4572D0u, 0x4572B4u, 0x4572BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4572BCu;
label_4572bc:
    // 0x4572bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4572bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4572c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4572c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4572c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4572c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4572c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4572C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4572C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4572D0u;
}
