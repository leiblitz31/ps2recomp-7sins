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

// Function: sub_001230C0
// Address: 0x1230c0 - 0x123140
void sub_001230C0_0x1230c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001230C0_0x1230c0");
#endif

    switch (ctx->pc) {
        case 0x123120u: goto label_123120;
        default: break;
    }

    ctx->pc = 0x1230c0u;

    // 0x1230c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1230c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1230c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1230c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1230c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1230c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1230cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1230ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1230d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1230d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1230d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1230d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1230d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1230D8u;
    {
        const bool branch_taken_0x1230d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1230d8) {
            ctx->pc = 0x1230ECu;
            goto label_1230ec;
        }
    }
    ctx->pc = 0x1230E0u;
    // 0x1230e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1230e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1230e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1230E4u;
    {
        const bool branch_taken_0x1230e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1230e4) {
            ctx->pc = 0x12310Cu;
            goto label_12310c;
        }
    }
    ctx->pc = 0x1230ECu;
label_1230ec:
    // 0x1230ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1230ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1230f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1230f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1230f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1230f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1230f8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1230f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1230fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1230fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x123100: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x123104: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x123104u;
    {
        const bool branch_taken_0x123104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123104) {
            ctx->pc = 0x12312Cu;
            goto label_12312c;
        }
    }
    ctx->pc = 0x12310Cu;
label_12310c:
    // 0x12310c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123110: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x123110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123114: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x123114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123118: 0xc119204  jal         func_464810
    ctx->pc = 0x123118u;
    SET_GPR_U32(ctx, 31, 0x123120u);
    ctx->pc = 0x464810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464810u, 0x123118u, 0x123120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123120u;
label_123120:
    // 0x123120: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x123120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x123124: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x123124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x123128: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12312c:
    // 0x12312c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12312cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123130: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x123130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x123134: 0x3e00008  jr          $ra
    ctx->pc = 0x123134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12313Cu;
    // 0x12313c: 0x0  nop
    ctx->pc = 0x12313cu;
    // NOP
    ctx->pc = 0x123140u;
}
