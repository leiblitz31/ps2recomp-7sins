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

// Function: sub_001452A0
// Address: 0x1452a0 - 0x1452e0
void sub_001452A0_0x1452a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001452A0_0x1452a0");
#endif

    switch (ctx->pc) {
        case 0x1452b8u: goto label_1452b8;
        default: break;
    }

    ctx->pc = 0x1452a0u;

    // 0x1452a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1452a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1452a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1452a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1452a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1452a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1452ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1452acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1452b0: 0xc0514b8  jal         func_1452E0
    ctx->pc = 0x1452B0u;
    SET_GPR_U32(ctx, 31, 0x1452B8u);
    ctx->pc = 0x1452E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452E0u, 0x1452B0u, 0x1452B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452B8u;
label_1452b8:
    // 0x1452b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1452b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1452bc: 0x246338a0  addiu       $v1, $v1, 0x38A0
    ctx->pc = 0x1452bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14496));
    // 0x1452c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1452c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1452c4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1452c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1452c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1452c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1452cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1452ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1452d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1452d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1452d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1452D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1452D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1452DCu;
    // 0x1452dc: 0x0  nop
    ctx->pc = 0x1452dcu;
    // NOP
    ctx->pc = 0x1452e0u;
}
