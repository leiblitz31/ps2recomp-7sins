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

// Function: sub_00242470
// Address: 0x242470 - 0x2424c0
void sub_00242470_0x242470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242470_0x242470");
#endif

    switch (ctx->pc) {
        case 0x242498u: goto label_242498;
        default: break;
    }

    ctx->pc = 0x242470u;

    // 0x242470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x242474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242478: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x242478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24247c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242480: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x242480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x242484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x242488: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x242488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x24248c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24248cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242490: 0xc044598  jal         func_111660
    ctx->pc = 0x242490u;
    SET_GPR_U32(ctx, 31, 0x242498u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x242490u, 0x242498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242498u;
label_242498:
    // 0x242498: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x242498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24249c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x24249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2424a0: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2424a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2424a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2424a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2424a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2424a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2424ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2424acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2424b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2424B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2424B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2424B8u;
    // 0x2424b8: 0x0  nop
    ctx->pc = 0x2424b8u;
    // NOP
    // 0x2424bc: 0x0  nop
    ctx->pc = 0x2424bcu;
    // NOP
    ctx->pc = 0x2424c0u;
}
