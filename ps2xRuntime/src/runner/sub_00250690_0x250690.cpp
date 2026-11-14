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

// Function: sub_00250690
// Address: 0x250690 - 0x2506e0
void sub_00250690_0x250690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250690_0x250690");
#endif

    switch (ctx->pc) {
        case 0x2506bcu: goto label_2506bc;
        default: break;
    }

    ctx->pc = 0x250690u;

    // 0x250690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x250698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25069c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x25069cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2506a0: 0x24635880  addiu       $v1, $v1, 0x5880
    ctx->pc = 0x2506a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22656));
    // 0x2506a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2506a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2506a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2506a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2506ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2506acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2506b0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2506b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2506b4: 0xc042230  jal         func_1088C0
    ctx->pc = 0x2506B4u;
    SET_GPR_U32(ctx, 31, 0x2506BCu);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x2506B4u, 0x2506BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2506BCu;
label_2506bc:
    // 0x2506bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2506bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2506c0: 0xaf82bbf8  sw          $v0, -0x4408($gp)
    ctx->pc = 0x2506c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949880), GPR_U32(ctx, 2));
    // 0x2506c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2506c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2506c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2506c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2506cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2506ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2506d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2506D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2506D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2506D8u;
    // 0x2506d8: 0x0  nop
    ctx->pc = 0x2506d8u;
    // NOP
    // 0x2506dc: 0x0  nop
    ctx->pc = 0x2506dcu;
    // NOP
    ctx->pc = 0x2506e0u;
}
