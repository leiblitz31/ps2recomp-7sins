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

// Function: sub_0049EE38
// Address: 0x49ee38 - 0x49ee90
void sub_0049EE38_0x49ee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EE38_0x49ee38");
#endif

    switch (ctx->pc) {
        case 0x49ee68u: goto label_49ee68;
        default: break;
    }

    ctx->pc = 0x49ee38u;

    // 0x49ee38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49ee38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49ee3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49ee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ee40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49ee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x49ee44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ee48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49ee48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ee4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x49ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x49ee50: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x49EE50u;
    {
        const bool branch_taken_0x49ee50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x49EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE50u;
        // 0x49ee54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee50) {
            ctx->pc = 0x49EE80u;
            goto label_49ee80;
        }
    }
    ctx->pc = 0x49EE58u;
    // 0x49ee58: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x49ee5c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x49ee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49ee60: 0xc127c22  jal         func_49F088
    ctx->pc = 0x49EE60u;
    SET_GPR_U32(ctx, 31, 0x49EE68u);
    ctx->pc = 0x49EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EE60u;
    // 0x49ee64: 0x24848330  addiu       $a0, $a0, -0x7CD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F088u, 0x49EE60u, 0x49EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EE68u;
label_49ee68:
    // 0x49ee68: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x49EE68u;
    {
        const bool branch_taken_0x49ee68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ee68) {
            ctx->pc = 0x49EE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49EE68u;
            // 0x49ee6c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49EE78u;
            goto label_49ee78;
        }
    }
    ctx->pc = 0x49EE70u;
    // 0x49ee70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x49EE70u;
    {
        const bool branch_taken_0x49ee70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE70u;
        // 0x49ee74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee70) {
            ctx->pc = 0x49EE80u;
            goto label_49ee80;
        }
    }
    ctx->pc = 0x49EE78u;
label_49ee78:
    // 0x49ee78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x49ee78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x49ee7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49ee7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49ee80:
    // 0x49ee80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49ee80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ee84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ee84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ee88: 0x3e00008  jr          $ra
    ctx->pc = 0x49EE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE88u;
        // 0x49ee8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EE90u;
}
