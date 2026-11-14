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

// Function: sub_0032AE38
// Address: 0x32ae38 - 0x32aea0
void sub_0032AE38_0x32ae38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AE38_0x32ae38");
#endif

    switch (ctx->pc) {
        case 0x32ae38u: goto label_32ae38;
        case 0x32ae3cu: goto label_32ae3c;
        case 0x32ae40u: goto label_32ae40;
        case 0x32ae44u: goto label_32ae44;
        case 0x32ae48u: goto label_32ae48;
        case 0x32ae4cu: goto label_32ae4c;
        case 0x32ae50u: goto label_32ae50;
        case 0x32ae54u: goto label_32ae54;
        case 0x32ae58u: goto label_32ae58;
        case 0x32ae5cu: goto label_32ae5c;
        case 0x32ae60u: goto label_32ae60;
        case 0x32ae64u: goto label_32ae64;
        case 0x32ae68u: goto label_32ae68;
        case 0x32ae6cu: goto label_32ae6c;
        case 0x32ae70u: goto label_32ae70;
        case 0x32ae74u: goto label_32ae74;
        case 0x32ae78u: goto label_32ae78;
        case 0x32ae7cu: goto label_32ae7c;
        case 0x32ae80u: goto label_32ae80;
        case 0x32ae84u: goto label_32ae84;
        case 0x32ae88u: goto label_32ae88;
        case 0x32ae8cu: goto label_32ae8c;
        case 0x32ae90u: goto label_32ae90;
        case 0x32ae94u: goto label_32ae94;
        case 0x32ae98u: goto label_32ae98;
        case 0x32ae9cu: goto label_32ae9c;
        default: break;
    }

    ctx->pc = 0x32ae38u;

label_32ae38:
    // 0x32ae38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32ae38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32ae3c:
    // 0x32ae3c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_32ae40:
    // 0x32ae40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32ae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_32ae44:
    // 0x32ae44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ae44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32ae48:
    // 0x32ae48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ae48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32ae4c:
    // 0x32ae4c: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x32ae4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_32ae50:
    // 0x32ae50: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x32ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_32ae54:
    // 0x32ae54: 0xa5880b  movn        $s1, $a1, $a1
    ctx->pc = 0x32ae54u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
label_32ae58:
    // 0x32ae58: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x32ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_32ae5c:
    // 0x32ae5c: 0x2240018  mult        $zero, $s1, $a0
    ctx->pc = 0x32ae5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_32ae60:
    // 0x32ae60: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x32ae60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_32ae64:
    // 0x32ae64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32ae68:
    // 0x32ae68: 0x2012  mflo        $a0
    ctx->pc = 0x32ae68u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_32ae6c:
    // 0x32ae6c: 0x40f809  jalr        $v0
label_32ae70:
    if (ctx->pc == 0x32AE70u) {
        ctx->pc = 0x32AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE6Cu;
        // 0x32ae70: 0x34a50131  ori         $a1, $a1, 0x131 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)305);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE74u;
        goto label_32ae74;
    }
    ctx->pc = 0x32AE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AE74u);
        ctx->pc = 0x32AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE6Cu;
        // 0x32ae70: 0x34a50131  ori         $a1, $a1, 0x131 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)305);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AE6Cu, 0x32AE74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AE74u;
label_32ae74:
    // 0x32ae74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_32ae78:
    // 0x32ae78: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x32ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_32ae7c:
    // 0x32ae7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32ae7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ae80:
    // 0x32ae80: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x32ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_32ae84:
    // 0x32ae84: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_32ae88:
    // 0x32ae88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32ae88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32ae8c:
    // 0x32ae8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32ae8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32ae90:
    // 0x32ae90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ae90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32ae94:
    // 0x32ae94: 0x3e00008  jr          $ra
label_32ae98:
    if (ctx->pc == 0x32AE98u) {
        ctx->pc = 0x32AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE94u;
        // 0x32ae98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE9Cu;
        goto label_32ae9c;
    }
    ctx->pc = 0x32AE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE94u;
        // 0x32ae98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AE9Cu;
label_32ae9c:
    // 0x32ae9c: 0x0  nop
    ctx->pc = 0x32ae9cu;
    // NOP
    ctx->pc = 0x32aea0u;
}
