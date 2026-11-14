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

// Function: sub_004780C0
// Address: 0x4780c0 - 0x478140
void sub_004780C0_0x4780c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004780C0_0x4780c0");
#endif

    switch (ctx->pc) {
        case 0x4780f0u: goto label_4780f0;
        case 0x478120u: goto label_478120;
        default: break;
    }

    ctx->pc = 0x4780c0u;

    // 0x4780c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4780c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4780c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4780c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4780c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4780c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4780cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x4780ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x4780d0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4780d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4780d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4780d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4780d8: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x4780d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x4780dc: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4780DCu;
    {
        const bool branch_taken_0x4780dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4780dc) {
            ctx->pc = 0x478120u;
            goto label_478120;
        }
    }
    ctx->pc = 0x4780E4u;
    // 0x4780e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4780e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4780e8: 0xc11e7e4  jal         func_479F90
    ctx->pc = 0x4780E8u;
    SET_GPR_U32(ctx, 31, 0x4780F0u);
    ctx->pc = 0x479F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479F90u, 0x4780E8u, 0x4780F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4780F0u;
label_4780f0:
    // 0x4780f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4780F0u;
    {
        const bool branch_taken_0x4780f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4780f0) {
            ctx->pc = 0x478108u;
            goto label_478108;
        }
    }
    ctx->pc = 0x4780F8u;
    // 0x4780f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4780f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4780fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4780fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x478100: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x478100u;
    {
        const bool branch_taken_0x478100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478100) {
            ctx->pc = 0x478120u;
            goto label_478120;
        }
    }
    ctx->pc = 0x478108u;
label_478108:
    // 0x478108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x478108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47810c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x47810cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x478110: 0x24a59ee0  addiu       $a1, $a1, -0x6120
    ctx->pc = 0x478110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942432));
    // 0x478114: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x478114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x478118: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x478118u;
    SET_GPR_U32(ctx, 31, 0x478120u);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x478118u, 0x478120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478120u;
label_478120:
    // 0x478120: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x478120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x478124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x478124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x478128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47812c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x47812cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x478130: 0x3e00008  jr          $ra
    ctx->pc = 0x478130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478138u;
    // 0x478138: 0x0  nop
    ctx->pc = 0x478138u;
    // NOP
    // 0x47813c: 0x0  nop
    ctx->pc = 0x47813cu;
    // NOP
    ctx->pc = 0x478140u;
}
