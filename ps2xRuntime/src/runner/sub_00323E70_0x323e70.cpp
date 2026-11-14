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

// Function: sub_00323E70
// Address: 0x323e70 - 0x323ef0
void sub_00323E70_0x323e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323E70_0x323e70");
#endif

    switch (ctx->pc) {
        case 0x323e70u: goto label_323e70;
        case 0x323e74u: goto label_323e74;
        case 0x323e78u: goto label_323e78;
        case 0x323e7cu: goto label_323e7c;
        case 0x323e80u: goto label_323e80;
        case 0x323e84u: goto label_323e84;
        case 0x323e88u: goto label_323e88;
        case 0x323e8cu: goto label_323e8c;
        case 0x323e90u: goto label_323e90;
        case 0x323e94u: goto label_323e94;
        case 0x323e98u: goto label_323e98;
        case 0x323e9cu: goto label_323e9c;
        case 0x323ea0u: goto label_323ea0;
        case 0x323ea4u: goto label_323ea4;
        case 0x323ea8u: goto label_323ea8;
        case 0x323eacu: goto label_323eac;
        case 0x323eb0u: goto label_323eb0;
        case 0x323eb4u: goto label_323eb4;
        case 0x323eb8u: goto label_323eb8;
        case 0x323ebcu: goto label_323ebc;
        case 0x323ec0u: goto label_323ec0;
        case 0x323ec4u: goto label_323ec4;
        case 0x323ec8u: goto label_323ec8;
        case 0x323eccu: goto label_323ecc;
        case 0x323ed0u: goto label_323ed0;
        case 0x323ed4u: goto label_323ed4;
        case 0x323ed8u: goto label_323ed8;
        case 0x323edcu: goto label_323edc;
        case 0x323ee0u: goto label_323ee0;
        case 0x323ee4u: goto label_323ee4;
        case 0x323ee8u: goto label_323ee8;
        case 0x323eecu: goto label_323eec;
        default: break;
    }

    ctx->pc = 0x323e70u;

label_323e70:
    // 0x323e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_323e74:
    // 0x323e74: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x323e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_323e78:
    // 0x323e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_323e7c:
    // 0x323e7c: 0x8c62b1ec  lw          $v0, -0x4E14($v1)
    ctx->pc = 0x323e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947308)));
label_323e80:
    // 0x323e80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_323e84:
    // 0x323e84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x323e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_323e88:
    // 0x323e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323e8c:
    // 0x323e8c: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x323e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_323e90:
    // 0x323e90: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x323e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_323e94:
    // 0x323e94: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_323e98:
    if (ctx->pc == 0x323E98u) {
        ctx->pc = 0x323E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323E94u;
        // 0x323e98: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323E9Cu;
        goto label_323e9c;
    }
    ctx->pc = 0x323E94u;
    {
        const bool branch_taken_0x323e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x323e94) {
            ctx->pc = 0x323E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323E94u;
            // 0x323e98: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323EA8u;
            goto label_323ea8;
        }
    }
    ctx->pc = 0x323E9Cu;
label_323e9c:
    // 0x323e9c: 0xc10822c  jal         func_4208B0
label_323ea0:
    if (ctx->pc == 0x323EA0u) {
        ctx->pc = 0x323EA4u;
        goto label_323ea4;
    }
    ctx->pc = 0x323E9Cu;
    SET_GPR_U32(ctx, 31, 0x323EA4u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x323E9Cu, 0x323EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323EA4u;
label_323ea4:
    // 0x323ea4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x323ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_323ea8:
    // 0x323ea8: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_323eac:
    if (ctx->pc == 0x323EACu) {
        ctx->pc = 0x323EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EA8u;
        // 0x323eac: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323EB0u;
        goto label_323eb0;
    }
    ctx->pc = 0x323EA8u;
    {
        const bool branch_taken_0x323ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x323ea8) {
            ctx->pc = 0x323EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323EA8u;
            // 0x323eac: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323ED4u;
            goto label_323ed4;
        }
    }
    ctx->pc = 0x323EB0u;
label_323eb0:
    // 0x323eb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x323eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_323eb4:
    // 0x323eb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x323eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_323eb8:
    // 0x323eb8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_323ebc:
    if (ctx->pc == 0x323EBCu) {
        ctx->pc = 0x323EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EB8u;
        // 0x323ebc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323EC0u;
        goto label_323ec0;
    }
    ctx->pc = 0x323EB8u;
    {
        const bool branch_taken_0x323eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EB8u;
        // 0x323ebc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323eb8) {
            ctx->pc = 0x323ED0u;
            goto label_323ed0;
        }
    }
    ctx->pc = 0x323EC0u;
label_323ec0:
    // 0x323ec0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x323ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_323ec4:
    // 0x323ec4: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x323ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_323ec8:
    // 0x323ec8: 0x40f809  jalr        $v0
label_323ecc:
    if (ctx->pc == 0x323ECCu) {
        ctx->pc = 0x323ED0u;
        goto label_323ed0;
    }
    ctx->pc = 0x323EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323ED0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323EC8u, 0x323ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323ED0u;
label_323ed0:
    // 0x323ed0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x323ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_323ed4:
    // 0x323ed4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x323ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_323ed8:
    // 0x323ed8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x323ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_323edc:
    // 0x323edc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x323edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_323ee0:
    // 0x323ee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_323ee4:
    // 0x323ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323ee8:
    // 0x323ee8: 0x3e00008  jr          $ra
label_323eec:
    if (ctx->pc == 0x323EECu) {
        ctx->pc = 0x323EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EE8u;
        // 0x323eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323EF0u;
        goto label_fallthrough_0x323ee8;
    }
    ctx->pc = 0x323EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EE8u;
        // 0x323eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x323ee8:
    ctx->pc = 0x323EF0u;
}
