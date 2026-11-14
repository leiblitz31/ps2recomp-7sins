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

// Function: sub_001C1480
// Address: 0x1c1480 - 0x1c1510
void sub_001C1480_0x1c1480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1480_0x1c1480");
#endif

    switch (ctx->pc) {
        case 0x1c14a4u: goto label_1c14a4;
        default: break;
    }

    ctx->pc = 0x1c1480u;

    // 0x1c1480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c1480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c1484: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c148c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c148cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c1490: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1c1490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1c1494: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c1494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1498: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c149c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C149Cu;
    {
        const bool branch_taken_0x1c149c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c149c) {
            ctx->pc = 0x1C14E0u;
            goto label_1c14e0;
        }
    }
    ctx->pc = 0x1C14A4u;
label_1c14a4:
    // 0x1c14a4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c14a8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c14ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c14acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c14b0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c14b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c14b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c14b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c14b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c14bc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c14c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c14c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c14c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c14c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c14cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c14d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C14D0u;
    {
        const bool branch_taken_0x1c14d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c14d0) {
            ctx->pc = 0x1C14DCu;
            goto label_1c14dc;
        }
    }
    ctx->pc = 0x1C14D8u;
    // 0x1c14d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c14d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c14dc:
    // 0x1c14dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c14dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c14e0:
    // 0x1c14e0: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1c14e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c14e4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C14E4u;
    {
        const bool branch_taken_0x1c14e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c14e4) {
            ctx->pc = 0x1C14A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c14a4;
        }
    }
    ctx->pc = 0x1C14ECu;
    // 0x1c14ec: 0x2201026  xor         $v0, $s1, $zero
    ctx->pc = 0x1c14ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 0));
    // 0x1c14f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c14f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c14f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c14f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c14f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c14f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c14fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c14fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c1500: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1508u;
    // 0x1c1508: 0x0  nop
    ctx->pc = 0x1c1508u;
    // NOP
    // 0x1c150c: 0x0  nop
    ctx->pc = 0x1c150cu;
    // NOP
    ctx->pc = 0x1c1510u;
}
