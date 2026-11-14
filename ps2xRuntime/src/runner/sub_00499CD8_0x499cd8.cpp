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

// Function: sub_00499CD8
// Address: 0x499cd8 - 0x499d68
void sub_00499CD8_0x499cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499CD8_0x499cd8");
#endif

    switch (ctx->pc) {
        case 0x499d30u: goto label_499d30;
        case 0x499d40u: goto label_499d40;
        case 0x499d4cu: goto label_499d4c;
        default: break;
    }

    ctx->pc = 0x499cd8u;

    // 0x499cd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x499cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x499cdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x499cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499ce0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x499ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x499ce4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x499ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x499ce8: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x499CE8u;
    {
        const bool branch_taken_0x499ce8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x499CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499CE8u;
        // 0x499cec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499ce8) {
            ctx->pc = 0x499D08u;
            goto label_499d08;
        }
    }
    ctx->pc = 0x499CF0u;
    // 0x499cf0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x499cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x499cf4: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x499cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x499cf8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x499cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x499cfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x499CFCu;
    {
        const bool branch_taken_0x499cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499CFCu;
        // 0x499d00: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499cfc) {
            ctx->pc = 0x499D18u;
            goto label_499d18;
        }
    }
    ctx->pc = 0x499D04u;
    // 0x499d04: 0x0  nop
    ctx->pc = 0x499d04u;
    // NOP
label_499d08:
    // 0x499d08: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x499d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x499d0c: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x499d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x499d10: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x499d10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x499d14: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x499d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_499d18:
    // 0x499d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x499d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x499d1c: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x499d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x499d20: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x499d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x499d24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x499d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x499d28: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x499D28u;
    SET_GPR_U32(ctx, 31, 0x499D30u);
    ctx->pc = 0x499D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499D28u;
    // 0x499d2c: 0x24a52018  addiu       $a1, $a1, 0x2018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x499D28u, 0x499D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499D30u;
label_499d30:
    // 0x499d30: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x499D30u;
    {
        const bool branch_taken_0x499d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499d30) {
            ctx->pc = 0x499D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499D30u;
            // 0x499d34: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499D50u;
            goto label_499d50;
        }
    }
    ctx->pc = 0x499D38u;
    // 0x499d38: 0xc127d08  jal         func_49F420
    ctx->pc = 0x499D38u;
    SET_GPR_U32(ctx, 31, 0x499D40u);
    ctx->pc = 0x499D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499D38u;
    // 0x499d3c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x499D38u, 0x499D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499D40u;
label_499d40:
    // 0x499d40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x499d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499d44: 0xc127b5a  jal         func_49ED68
    ctx->pc = 0x499D44u;
    SET_GPR_U32(ctx, 31, 0x499D4Cu);
    ctx->pc = 0x499D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499D44u;
    // 0x499d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49ED68u, 0x499D44u, 0x499D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499D4Cu;
label_499d4c:
    // 0x499d4c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x499d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_499d50:
    // 0x499d50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x499d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499d54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x499d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x499D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D5Cu;
        // 0x499d60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499D64u;
    // 0x499d64: 0x0  nop
    ctx->pc = 0x499d64u;
    // NOP
    ctx->pc = 0x499d68u;
}
