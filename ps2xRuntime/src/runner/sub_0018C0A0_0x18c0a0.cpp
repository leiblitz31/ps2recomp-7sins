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

// Function: sub_0018C0A0
// Address: 0x18c0a0 - 0x18c110
void sub_0018C0A0_0x18c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C0A0_0x18c0a0");
#endif

    switch (ctx->pc) {
        case 0x18c0bcu: goto label_18c0bc;
        case 0x18c0dcu: goto label_18c0dc;
        case 0x18c0ecu: goto label_18c0ec;
        default: break;
    }

    ctx->pc = 0x18c0a0u;

    // 0x18c0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c0a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c0a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c0ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c0b0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x18c0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x18c0b4: 0xc0557e8  jal         func_155FA0
    ctx->pc = 0x18C0B4u;
    SET_GPR_U32(ctx, 31, 0x18C0BCu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x18C0B4u, 0x18C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0BCu;
label_18c0bc:
    // 0x18c0bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x18c0c0: 0x246340b0  addiu       $v1, $v1, 0x40B0
    ctx->pc = 0x18c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16560));
    // 0x18c0c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c0c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18c0cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c0d0: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x18c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x18c0d4: 0xc0631d8  jal         func_18C760
    ctx->pc = 0x18C0D4u;
    SET_GPR_U32(ctx, 31, 0x18C0DCu);
    ctx->pc = 0x18C760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C760u, 0x18C0D4u, 0x18C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0DCu;
label_18c0dc:
    // 0x18c0dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c0e0: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x18c0e4: 0xc063180  jal         func_18C600
    ctx->pc = 0x18C0E4u;
    SET_GPR_U32(ctx, 31, 0x18C0ECu);
    ctx->pc = 0x18C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C600u, 0x18C0E4u, 0x18C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0ECu;
label_18c0ec:
    // 0x18c0ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c0f0: 0xa0400084  sb          $zero, 0x84($v0)
    ctx->pc = 0x18c0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c0f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c0fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18c0fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18c100: 0x3e00008  jr          $ra
    ctx->pc = 0x18C100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C108u;
    // 0x18c108: 0x0  nop
    ctx->pc = 0x18c108u;
    // NOP
    // 0x18c10c: 0x0  nop
    ctx->pc = 0x18c10cu;
    // NOP
    ctx->pc = 0x18c110u;
}
