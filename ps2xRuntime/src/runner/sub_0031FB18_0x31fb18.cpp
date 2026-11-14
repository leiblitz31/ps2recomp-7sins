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

// Function: sub_0031FB18
// Address: 0x31fb18 - 0x31fbd8
void sub_0031FB18_0x31fb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FB18_0x31fb18");
#endif

    switch (ctx->pc) {
        case 0x31fb58u: goto label_31fb58;
        case 0x31fb68u: goto label_31fb68;
        case 0x31fb88u: goto label_31fb88;
        default: break;
    }

    ctx->pc = 0x31fb18u;

    // 0x31fb18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31fb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31fb1c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31fb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x31fb20: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x31fb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x31fb24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31fb24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb28: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x31fb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x31fb2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31fb2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb30: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31fb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x31fb34: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31fb34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb38: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31fb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x31fb3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31fb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31fb40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31fb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31fb44: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x31fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x31fb48: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31FB48u;
    {
        const bool branch_taken_0x31fb48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB48u;
        // 0x31fb4c: 0x8eb30010  lw          $s3, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb48) {
            ctx->pc = 0x31FBACu;
            goto label_31fbac;
        }
    }
    ctx->pc = 0x31FB50u;
    // 0x31fb50: 0x26710004  addiu       $s1, $s3, 0x4
    ctx->pc = 0x31fb50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x31fb54: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x31fb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31fb58:
    // 0x31fb58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31fb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31fb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb60: 0xc10341a  jal         func_40D068
    ctx->pc = 0x31FB60u;
    SET_GPR_U32(ctx, 31, 0x31FB68u);
    ctx->pc = 0x31FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FB60u;
    // 0x31fb64: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x31FB60u, 0x31FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB68u;
label_31fb68:
    // 0x31fb68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31FB68u;
    {
        const bool branch_taken_0x31fb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB68u;
        // 0x31fb6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb68) {
            ctx->pc = 0x31FB90u;
            goto label_31fb90;
        }
    }
    ctx->pc = 0x31FB70u;
    // 0x31fb70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31fb74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31fb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31fb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31fb7c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x31fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x31fb80: 0xc103440  jal         func_40D100
    ctx->pc = 0x31FB80u;
    SET_GPR_U32(ctx, 31, 0x31FB88u);
    ctx->pc = 0x31FB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FB80u;
    // 0x31fb84: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31FB80u, 0x31FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB88u;
label_31fb88:
    // 0x31fb88: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FB88u;
    {
        const bool branch_taken_0x31fb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fb88) {
            ctx->pc = 0x31FB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FB88u;
            // 0x31fb8c: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FB98u;
            goto label_31fb98;
        }
    }
    ctx->pc = 0x31FB90u;
label_31fb90:
    // 0x31fb90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31FB90u;
    {
        const bool branch_taken_0x31fb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB90u;
        // 0x31fb94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb90) {
            ctx->pc = 0x31FBB0u;
            goto label_31fbb0;
        }
    }
    ctx->pc = 0x31FB98u;
label_31fb98:
    // 0x31fb98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31fb98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x31fb9c: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x31fb9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x31fba0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x31fba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31fba4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x31FBA4u;
    {
        const bool branch_taken_0x31fba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBA4u;
        // 0x31fba8: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fba4) {
            ctx->pc = 0x31FB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fb58;
        }
    }
    ctx->pc = 0x31FBACu;
label_31fbac:
    // 0x31fbac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31fbb0:
    // 0x31fbb0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31fbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31fbb4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31fbb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31fbb8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31fbb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31fbbc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31fbbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31fbc0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x31fbc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31fbc4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31fbc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fbc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31fbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x31FBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBCCu;
        // 0x31fbd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FBD4u;
    // 0x31fbd4: 0x0  nop
    ctx->pc = 0x31fbd4u;
    // NOP
    ctx->pc = 0x31fbd8u;
}
