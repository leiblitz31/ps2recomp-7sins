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

// Function: sub_00245380
// Address: 0x245380 - 0x2453d0
void sub_00245380_0x245380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245380_0x245380");
#endif

    switch (ctx->pc) {
        case 0x2453a4u: goto label_2453a4;
        default: break;
    }

    ctx->pc = 0x245380u;

    // 0x245380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x245380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x245384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245388: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x245388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24538c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24538cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x245390: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x245390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x245394: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x245394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245398: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x245398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24539c: 0xc0914f4  jal         func_2453D0
    ctx->pc = 0x24539Cu;
    SET_GPR_U32(ctx, 31, 0x2453A4u);
    ctx->pc = 0x2453D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2453D0u, 0x24539Cu, 0x2453A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2453A4u;
label_2453a4:
    // 0x2453a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2453a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2453a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2453a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2453ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2453acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2453b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2453b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2453b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2453b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2453b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2453b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2453bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2453BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2453BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2453C4u;
    // 0x2453c4: 0x0  nop
    ctx->pc = 0x2453c4u;
    // NOP
    // 0x2453c8: 0x0  nop
    ctx->pc = 0x2453c8u;
    // NOP
    // 0x2453cc: 0x0  nop
    ctx->pc = 0x2453ccu;
    // NOP
    ctx->pc = 0x2453d0u;
}
