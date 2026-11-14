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

// Function: sub_001803F0
// Address: 0x1803f0 - 0x180470
void sub_001803F0_0x1803f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001803F0_0x1803f0");
#endif

    switch (ctx->pc) {
        case 0x180418u: goto label_180418;
        case 0x180428u: goto label_180428;
        default: break;
    }

    ctx->pc = 0x1803f0u;

    // 0x1803f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1803f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1803f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1803f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1803f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1803f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1803fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1803fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180400: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x180400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x180404: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x180404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x180408: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x180408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x18040c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x18040cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180410: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x180410u;
    {
        const bool branch_taken_0x180410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180410) {
            ctx->pc = 0x18043Cu;
            goto label_18043c;
        }
    }
    ctx->pc = 0x180418u;
label_180418:
    // 0x180418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18041c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18041cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180420: 0xc06011c  jal         func_180470
    ctx->pc = 0x180420u;
    SET_GPR_U32(ctx, 31, 0x180428u);
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x180420u, 0x180428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180428u;
label_180428:
    // 0x180428: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x180428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18042c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x18042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x180430: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x180430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x180434: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x180434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x180438: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x180438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18043c:
    // 0x18043c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x18043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180440: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x180440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180444: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x180444u;
    {
        const bool branch_taken_0x180444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x180444) {
            ctx->pc = 0x180418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180418;
        }
    }
    ctx->pc = 0x18044Cu;
    // 0x18044c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18044cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180450: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x180450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18045c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18045cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x180460: 0x3e00008  jr          $ra
    ctx->pc = 0x180460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180468u;
    // 0x180468: 0x0  nop
    ctx->pc = 0x180468u;
    // NOP
    // 0x18046c: 0x0  nop
    ctx->pc = 0x18046cu;
    // NOP
    ctx->pc = 0x180470u;
}
