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

// Function: sub_002139E0
// Address: 0x2139e0 - 0x213a30
void sub_002139E0_0x2139e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002139E0_0x2139e0");
#endif

    switch (ctx->pc) {
        case 0x213a1cu: goto label_213a1c;
        default: break;
    }

    ctx->pc = 0x2139e0u;

    // 0x2139e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2139e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2139e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2139e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2139e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2139e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2139ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2139ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2139f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2139f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2139f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2139F4u;
    {
        const bool branch_taken_0x2139f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2139f4) {
            ctx->pc = 0x213A1Cu;
            goto label_213a1c;
        }
    }
    ctx->pc = 0x2139FCu;
    // 0x2139fc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2139fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213a00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x213a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x213a04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x213a04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x213a08: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213A08u;
    {
        const bool branch_taken_0x213a08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x213a08) {
            ctx->pc = 0x213A1Cu;
            goto label_213a1c;
        }
    }
    ctx->pc = 0x213A10u;
    // 0x213a10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213a14: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x213A14u;
    SET_GPR_U32(ctx, 31, 0x213A1Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x213A14u, 0x213A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A1Cu;
label_213a1c:
    // 0x213a1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213a24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x213a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x213a28: 0x3e00008  jr          $ra
    ctx->pc = 0x213A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213A30u;
}
