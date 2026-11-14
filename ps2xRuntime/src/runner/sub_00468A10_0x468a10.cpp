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

// Function: sub_00468A10
// Address: 0x468a10 - 0x468a50
void sub_00468A10_0x468a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468A10_0x468a10");
#endif

    switch (ctx->pc) {
        case 0x468a28u: goto label_468a28;
        default: break;
    }

    ctx->pc = 0x468a10u;

    // 0x468a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x468a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x468a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x468a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x468a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x468a1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x468a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468a20: 0xc11a294  jal         func_468A50
    ctx->pc = 0x468A20u;
    SET_GPR_U32(ctx, 31, 0x468A28u);
    ctx->pc = 0x468A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468A50u, 0x468A20u, 0x468A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468A28u;
label_468a28:
    // 0x468a28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x468a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x468a2c: 0x24636ca0  addiu       $v1, $v1, 0x6CA0
    ctx->pc = 0x468a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27808));
    // 0x468a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468a34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x468a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x468a38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468a40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x468a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x468a44: 0x3e00008  jr          $ra
    ctx->pc = 0x468A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468A4Cu;
    // 0x468a4c: 0x0  nop
    ctx->pc = 0x468a4cu;
    // NOP
    ctx->pc = 0x468a50u;
}
