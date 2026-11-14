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

// Function: sub_0020B520
// Address: 0x20b520 - 0x20b590
void sub_0020B520_0x20b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B520_0x20b520");
#endif

    switch (ctx->pc) {
        case 0x20b560u: goto label_20b560;
        case 0x20b56cu: goto label_20b56c;
        default: break;
    }

    ctx->pc = 0x20b520u;

    // 0x20b520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20b520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20b524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20b524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20b528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20b528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20b52c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b530: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x20b530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x20b534: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20b534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b538: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x20b538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x20b53c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x20b53cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20b540: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x20b540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x20b544: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20b548: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20b548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b54c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b550: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x20b550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b554: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x20b554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b558: 0xc073b50  jal         func_1CED40
    ctx->pc = 0x20B558u;
    SET_GPR_U32(ctx, 31, 0x20B560u);
    ctx->pc = 0x1CED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED40u, 0x20B558u, 0x20B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B560u;
label_20b560:
    // 0x20b560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b564: 0xc119c5c  jal         func_467170
    ctx->pc = 0x20B564u;
    SET_GPR_U32(ctx, 31, 0x20B56Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x20B564u, 0x20B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B56Cu;
label_20b56c:
    // 0x20b56c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20b56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20b574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b578: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20b578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20b57c: 0x3e00008  jr          $ra
    ctx->pc = 0x20B57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B584u;
    // 0x20b584: 0x0  nop
    ctx->pc = 0x20b584u;
    // NOP
    // 0x20b588: 0x0  nop
    ctx->pc = 0x20b588u;
    // NOP
    // 0x20b58c: 0x0  nop
    ctx->pc = 0x20b58cu;
    // NOP
    ctx->pc = 0x20b590u;
}
