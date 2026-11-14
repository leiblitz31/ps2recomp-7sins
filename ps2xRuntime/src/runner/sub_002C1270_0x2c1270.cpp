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

// Function: sub_002C1270
// Address: 0x2c1270 - 0x2c12b0
void sub_002C1270_0x2c1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1270_0x2c1270");
#endif

    switch (ctx->pc) {
        case 0x2c1298u: goto label_2c1298;
        default: break;
    }

    ctx->pc = 0x2c1270u;

    // 0x2c1270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c1270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c1274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1278: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2c1278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2c127c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2c127cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2c1280: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2c1280u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1284: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2c1284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1288: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2c1288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c128c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2c128cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2c1290: 0xc0b04ac  jal         func_2C12B0
    ctx->pc = 0x2C1290u;
    SET_GPR_U32(ctx, 31, 0x2C1298u);
    ctx->pc = 0x2C12B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C12B0u, 0x2C1290u, 0x2C1298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1298u;
label_2c1298:
    // 0x2c1298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c129c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2c129cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c12a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C12A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C12A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C12A8u;
    // 0x2c12a8: 0x0  nop
    ctx->pc = 0x2c12a8u;
    // NOP
    // 0x2c12ac: 0x0  nop
    ctx->pc = 0x2c12acu;
    // NOP
    ctx->pc = 0x2c12b0u;
}
