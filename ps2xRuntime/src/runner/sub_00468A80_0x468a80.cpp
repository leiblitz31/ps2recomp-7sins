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

// Function: sub_00468A80
// Address: 0x468a80 - 0x468ac0
void sub_00468A80_0x468a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468A80_0x468a80");
#endif

    switch (ctx->pc) {
        case 0x468a98u: goto label_468a98;
        default: break;
    }

    ctx->pc = 0x468a80u;

    // 0x468a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x468a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x468a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x468a88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x468a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x468a8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x468a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468a90: 0xc11a294  jal         func_468A50
    ctx->pc = 0x468A90u;
    SET_GPR_U32(ctx, 31, 0x468A98u);
    ctx->pc = 0x468A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468A50u, 0x468A90u, 0x468A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468A98u;
label_468a98:
    // 0x468a98: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x468a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x468a9c: 0x24636c60  addiu       $v1, $v1, 0x6C60
    ctx->pc = 0x468a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27744));
    // 0x468aa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468aa4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x468aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x468aa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468ab0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x468ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x468ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x468AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468ABCu;
    // 0x468abc: 0x0  nop
    ctx->pc = 0x468abcu;
    // NOP
    ctx->pc = 0x468ac0u;
}
