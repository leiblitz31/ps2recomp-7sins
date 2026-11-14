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

// Function: sub_001CECD0
// Address: 0x1cecd0 - 0x1ced40
void sub_001CECD0_0x1cecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CECD0_0x1cecd0");
#endif

    switch (ctx->pc) {
        case 0x1ced10u: goto label_1ced10;
        case 0x1ced1cu: goto label_1ced1c;
        default: break;
    }

    ctx->pc = 0x1cecd0u;

    // 0x1cecd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cecd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cecd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cecdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cece0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1cece0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1cece4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1cece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cece8: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x1cece8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1cecec: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1cececu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cecf0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1cecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1cecf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cecf8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cecfc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1cecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ced00: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1ced00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ced04: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1ced04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ced08: 0xc073b50  jal         func_1CED40
    ctx->pc = 0x1CED08u;
    SET_GPR_U32(ctx, 31, 0x1CED10u);
    ctx->pc = 0x1CED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED40u, 0x1CED08u, 0x1CED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED10u;
label_1ced10:
    // 0x1ced10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ced10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced14: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1CED14u;
    SET_GPR_U32(ctx, 31, 0x1CED1Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1CED14u, 0x1CED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED1Cu;
label_1ced1c:
    // 0x1ced1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ced1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ced20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ced20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ced24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ced24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ced28: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ced28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ced2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CED2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CED2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CED34u;
    // 0x1ced34: 0x0  nop
    ctx->pc = 0x1ced34u;
    // NOP
    // 0x1ced38: 0x0  nop
    ctx->pc = 0x1ced38u;
    // NOP
    // 0x1ced3c: 0x0  nop
    ctx->pc = 0x1ced3cu;
    // NOP
    ctx->pc = 0x1ced40u;
}
