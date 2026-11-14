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

// Function: sub_0025B420
// Address: 0x25b420 - 0x25b480
void sub_0025B420_0x25b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B420_0x25b420");
#endif

    switch (ctx->pc) {
        case 0x25b444u: goto label_25b444;
        default: break;
    }

    ctx->pc = 0x25b420u;

    // 0x25b420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25b424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b42c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25b430: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25b430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25b434: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x25b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25b438: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25b438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b43c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x25B43Cu;
    SET_GPR_U32(ctx, 31, 0x25B444u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x25B43Cu, 0x25B444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B444u;
label_25b444:
    // 0x25b444: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x25b444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x25b448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B448u;
    {
        const bool branch_taken_0x25b448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b448) {
            ctx->pc = 0x25B460u;
            goto label_25b460;
        }
    }
    ctx->pc = 0x25B450u;
    // 0x25b450: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x25b450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b454: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25b454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b458: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x25b458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x25b45c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25b45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_25b460:
    // 0x25b460: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x25b460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x25b464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b46c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25b46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25b470: 0x3e00008  jr          $ra
    ctx->pc = 0x25B470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B478u;
    // 0x25b478: 0x0  nop
    ctx->pc = 0x25b478u;
    // NOP
    // 0x25b47c: 0x0  nop
    ctx->pc = 0x25b47cu;
    // NOP
    ctx->pc = 0x25b480u;
}
