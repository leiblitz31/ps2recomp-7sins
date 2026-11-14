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

// Function: sub_002C1230
// Address: 0x2c1230 - 0x2c1270
void sub_002C1230_0x2c1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1230_0x2c1230");
#endif

    switch (ctx->pc) {
        case 0x2c1254u: goto label_2c1254;
        default: break;
    }

    ctx->pc = 0x2c1230u;

    // 0x2c1230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c1234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c1238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c123c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2c123cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2c1240: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c1240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1244: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2c1244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c1248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c124c: 0xc0b049c  jal         func_2C1270
    ctx->pc = 0x2C124Cu;
    SET_GPR_U32(ctx, 31, 0x2C1254u);
    ctx->pc = 0x2C1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1270u, 0x2C124Cu, 0x2C1254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1254u;
label_2c1254:
    // 0x2c1254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1258: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c1258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c125c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C125Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C125Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1264u;
    // 0x2c1264: 0x0  nop
    ctx->pc = 0x2c1264u;
    // NOP
    // 0x2c1268: 0x0  nop
    ctx->pc = 0x2c1268u;
    // NOP
    // 0x2c126c: 0x0  nop
    ctx->pc = 0x2c126cu;
    // NOP
    ctx->pc = 0x2c1270u;
}
