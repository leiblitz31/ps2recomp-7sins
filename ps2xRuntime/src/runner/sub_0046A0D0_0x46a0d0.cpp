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

// Function: sub_0046A0D0
// Address: 0x46a0d0 - 0x46a150
void sub_0046A0D0_0x46a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A0D0_0x46a0d0");
#endif

    switch (ctx->pc) {
        case 0x46a110u: goto label_46a110;
        case 0x46a130u: goto label_46a130;
        default: break;
    }

    ctx->pc = 0x46a0d0u;

    // 0x46a0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46a0d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a0d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46a0dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x46a0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x46a0e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a0e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x46A0E4u;
    {
        const bool branch_taken_0x46a0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a0e4) {
            ctx->pc = 0x46A130u;
            goto label_46a130;
        }
    }
    ctx->pc = 0x46A0ECu;
    // 0x46a0ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46a0f0: 0x24636cc8  addiu       $v1, $v1, 0x6CC8
    ctx->pc = 0x46a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27848));
    // 0x46a0f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a0f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46a0fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a100: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46a100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46a104: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46a104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46a108: 0xc11a694  jal         func_469A50
    ctx->pc = 0x46A108u;
    SET_GPR_U32(ctx, 31, 0x46A110u);
    ctx->pc = 0x469A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469A50u, 0x46A108u, 0x46A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A110u;
label_46a110:
    // 0x46a110: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x46a110u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a114: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x46a114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x46a118: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x46a118u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x46a11c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46A11Cu;
    {
        const bool branch_taken_0x46a11c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46a11c) {
            ctx->pc = 0x46A130u;
            goto label_46a130;
        }
    }
    ctx->pc = 0x46A124u;
    // 0x46a124: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46a124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a128: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x46A128u;
    SET_GPR_U32(ctx, 31, 0x46A130u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x46A128u, 0x46A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A130u;
label_46a130:
    // 0x46a130: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a138: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46a138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46a13c: 0x3e00008  jr          $ra
    ctx->pc = 0x46A13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A144u;
    // 0x46a144: 0x0  nop
    ctx->pc = 0x46a144u;
    // NOP
    // 0x46a148: 0x0  nop
    ctx->pc = 0x46a148u;
    // NOP
    // 0x46a14c: 0x0  nop
    ctx->pc = 0x46a14cu;
    // NOP
    ctx->pc = 0x46a150u;
}
