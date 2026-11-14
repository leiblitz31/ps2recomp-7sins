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

// Function: sub_00470130
// Address: 0x470130 - 0x470170
void sub_00470130_0x470130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470130_0x470130");
#endif

    ctx->pc = 0x470130u;

    // 0x470130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x470130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x470134: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x470134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x470138: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x470138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47013c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x470140: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x470140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x470144: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x470144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x470148: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x470148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x47014c: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x47014cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x470150: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x470150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x470154: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x470154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x470158: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x470158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x47015c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x470160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x470160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x470164: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x470164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x470168: 0x3e00008  jr          $ra
    ctx->pc = 0x470168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470170u;
}
