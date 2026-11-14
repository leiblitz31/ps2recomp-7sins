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

// Function: sub_00133660
// Address: 0x133660 - 0x1336a0
void sub_00133660_0x133660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133660_0x133660");
#endif

    switch (ctx->pc) {
        case 0x133688u: goto label_133688;
        default: break;
    }

    ctx->pc = 0x133660u;

    // 0x133660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x133660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x133664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133668: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x133668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13366c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13366cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x133670: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x133670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x133674: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x133674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133678: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x133678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13367c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x13367cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x133680: 0xc04cda8  jal         func_1336A0
    ctx->pc = 0x133680u;
    SET_GPR_U32(ctx, 31, 0x133688u);
    ctx->pc = 0x1336A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1336A0u, 0x133680u, 0x133688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133688u;
label_133688:
    // 0x133688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13368c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13368cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x133690: 0x3e00008  jr          $ra
    ctx->pc = 0x133690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133698u;
    // 0x133698: 0x0  nop
    ctx->pc = 0x133698u;
    // NOP
    // 0x13369c: 0x0  nop
    ctx->pc = 0x13369cu;
    // NOP
    ctx->pc = 0x1336a0u;
}
