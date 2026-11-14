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

// Function: sub_001314E0
// Address: 0x1314e0 - 0x131570
void sub_001314E0_0x1314e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001314E0_0x1314e0");
#endif

    switch (ctx->pc) {
        case 0x131500u: goto label_131500;
        case 0x131514u: goto label_131514;
        case 0x13152cu: goto label_13152c;
        case 0x131538u: goto label_131538;
        default: break;
    }

    ctx->pc = 0x1314e0u;

    // 0x1314e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1314e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1314e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1314e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1314e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1314e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1314ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1314ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1314f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1314f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1314f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1314f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1314f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1314F8u;
    {
        const bool branch_taken_0x1314f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1314f8) {
            ctx->pc = 0x131540u;
            goto label_131540;
        }
    }
    ctx->pc = 0x131500u;
label_131500:
    // 0x131500: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x131500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131504: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x131504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x131508: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x131508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13150c: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x13150Cu;
    SET_GPR_U32(ctx, 31, 0x131514u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x13150Cu, 0x131514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131514u;
label_131514:
    // 0x131514: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x131514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131518: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x131518u;
    {
        const bool branch_taken_0x131518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131518) {
            ctx->pc = 0x13153Cu;
            goto label_13153c;
        }
    }
    ctx->pc = 0x131520u;
    // 0x131520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131524: 0xc04c55c  jal         func_131570
    ctx->pc = 0x131524u;
    SET_GPR_U32(ctx, 31, 0x13152Cu);
    ctx->pc = 0x131570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131570u, 0x131524u, 0x13152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13152Cu;
label_13152c:
    // 0x13152c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13152cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131530: 0xc119c5c  jal         func_467170
    ctx->pc = 0x131530u;
    SET_GPR_U32(ctx, 31, 0x131538u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x131530u, 0x131538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131538u;
label_131538:
    // 0x131538: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x131538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13153c:
    // 0x13153c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13153cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_131540:
    // 0x131540: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x131540u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x131544: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x131544u;
    {
        const bool branch_taken_0x131544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131544) {
            ctx->pc = 0x131500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131500;
        }
    }
    ctx->pc = 0x13154Cu;
    // 0x13154c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131558: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x131558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13155c: 0x3e00008  jr          $ra
    ctx->pc = 0x13155Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13155Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131564u;
    // 0x131564: 0x0  nop
    ctx->pc = 0x131564u;
    // NOP
    // 0x131568: 0x0  nop
    ctx->pc = 0x131568u;
    // NOP
    // 0x13156c: 0x0  nop
    ctx->pc = 0x13156cu;
    // NOP
    ctx->pc = 0x131570u;
}
