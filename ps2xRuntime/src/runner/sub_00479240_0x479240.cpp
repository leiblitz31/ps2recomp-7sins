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

// Function: sub_00479240
// Address: 0x479240 - 0x4792c0
void sub_00479240_0x479240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479240_0x479240");
#endif

    switch (ctx->pc) {
        case 0x479278u: goto label_479278;
        case 0x479294u: goto label_479294;
        default: break;
    }

    ctx->pc = 0x479240u;

    // 0x479240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x479240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x479244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x479244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x479248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47924c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x47924cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x479250: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x479250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x479254: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x479254u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x479258: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x479258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47925c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x47925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479260: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x479260u;
    {
        const bool branch_taken_0x479260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x479260) {
            ctx->pc = 0x4792A4u;
            goto label_4792a4;
        }
    }
    ctx->pc = 0x479268u;
    // 0x479268: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x479268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47926c: 0x24700008  addiu       $s0, $v1, 0x8
    ctx->pc = 0x47926cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x479270: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x479270u;
    {
        const bool branch_taken_0x479270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479270) {
            ctx->pc = 0x479298u;
            goto label_479298;
        }
    }
    ctx->pc = 0x479278u;
label_479278:
    // 0x479278: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x479278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47927c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47927cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479280: 0x6e060000  ldr         $a2, 0x0($s0)
    ctx->pc = 0x479280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x479284: 0x6a060007  ldl         $a2, 0x7($s0)
    ctx->pc = 0x479284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x479288: 0x83a70040  lb          $a3, 0x40($sp)
    ctx->pc = 0x479288u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47928c: 0xc11e4b0  jal         func_4792C0
    ctx->pc = 0x47928Cu;
    SET_GPR_U32(ctx, 31, 0x479294u);
    ctx->pc = 0x4792C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4792C0u, 0x47928Cu, 0x479294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479294u;
label_479294:
    // 0x479294: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x479294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_479298:
    // 0x479298: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x479298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47929c: 0x1603fff6  bne         $s0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x47929Cu;
    {
        const bool branch_taken_0x47929c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x47929c) {
            ctx->pc = 0x479278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_479278;
        }
    }
    ctx->pc = 0x4792A4u;
label_4792a4:
    // 0x4792a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4792a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4792a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4792a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4792ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4792acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4792b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4792B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4792B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4792B8u;
    // 0x4792b8: 0x0  nop
    ctx->pc = 0x4792b8u;
    // NOP
    // 0x4792bc: 0x0  nop
    ctx->pc = 0x4792bcu;
    // NOP
    ctx->pc = 0x4792c0u;
}
