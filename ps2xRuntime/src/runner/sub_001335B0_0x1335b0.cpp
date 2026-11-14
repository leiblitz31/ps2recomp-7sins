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

// Function: sub_001335B0
// Address: 0x1335b0 - 0x133620
void sub_001335B0_0x1335b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001335B0_0x1335b0");
#endif

    switch (ctx->pc) {
        case 0x1335f0u: goto label_1335f0;
        case 0x1335fcu: goto label_1335fc;
        default: break;
    }

    ctx->pc = 0x1335b0u;

    // 0x1335b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1335b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1335b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1335b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1335b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1335b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1335bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1335bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1335c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1335c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1335c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1335c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1335c8: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x1335c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1335cc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1335ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1335d0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1335d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1335d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1335d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1335d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1335d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1335dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1335dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1335e0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1335e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1335e4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1335e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1335e8: 0xc04cd88  jal         func_133620
    ctx->pc = 0x1335E8u;
    SET_GPR_U32(ctx, 31, 0x1335F0u);
    ctx->pc = 0x133620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133620u, 0x1335E8u, 0x1335F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335F0u;
label_1335f0:
    // 0x1335f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1335f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1335f4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1335F4u;
    SET_GPR_U32(ctx, 31, 0x1335FCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1335F4u, 0x1335FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335FCu;
label_1335fc:
    // 0x1335fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1335fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133608: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x133608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13360c: 0x3e00008  jr          $ra
    ctx->pc = 0x13360Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13360Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133614u;
    // 0x133614: 0x0  nop
    ctx->pc = 0x133614u;
    // NOP
    // 0x133618: 0x0  nop
    ctx->pc = 0x133618u;
    // NOP
    // 0x13361c: 0x0  nop
    ctx->pc = 0x13361cu;
    // NOP
    ctx->pc = 0x133620u;
}
