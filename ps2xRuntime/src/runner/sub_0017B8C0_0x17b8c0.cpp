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

// Function: sub_0017B8C0
// Address: 0x17b8c0 - 0x17b920
void sub_0017B8C0_0x17b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B8C0_0x17b8c0");
#endif

    switch (ctx->pc) {
        case 0x17b8ecu: goto label_17b8ec;
        case 0x17b90cu: goto label_17b90c;
        default: break;
    }

    ctx->pc = 0x17b8c0u;

    // 0x17b8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b8c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17b8cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17b8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x17b8d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b8d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17B8D4u;
    {
        const bool branch_taken_0x17b8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b8d4) {
            ctx->pc = 0x17B90Cu;
            goto label_17b90c;
        }
    }
    ctx->pc = 0x17B8DCu;
    // 0x17b8dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b8e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8e4: 0xc05ee48  jal         func_17B920
    ctx->pc = 0x17B8E4u;
    SET_GPR_U32(ctx, 31, 0x17B8ECu);
    ctx->pc = 0x17B920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B920u, 0x17B8E4u, 0x17B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8ECu;
label_17b8ec:
    // 0x17b8ec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x17b8ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b8f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17b8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17b8f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17b8f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17b8f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B8F8u;
    {
        const bool branch_taken_0x17b8f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17b8f8) {
            ctx->pc = 0x17B90Cu;
            goto label_17b90c;
        }
    }
    ctx->pc = 0x17B900u;
    // 0x17b900: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b904: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x17B904u;
    SET_GPR_U32(ctx, 31, 0x17B90Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x17B904u, 0x17B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B90Cu;
label_17b90c:
    // 0x17b90c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b914: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17b914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b918: 0x3e00008  jr          $ra
    ctx->pc = 0x17B918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B920u;
}
