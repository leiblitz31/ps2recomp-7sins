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

// Function: sub_0031FA38
// Address: 0x31fa38 - 0x31fb18
void sub_0031FA38_0x31fa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FA38_0x31fa38");
#endif

    switch (ctx->pc) {
        case 0x31fa80u: goto label_31fa80;
        case 0x31fa90u: goto label_31fa90;
        case 0x31faa4u: goto label_31faa4;
        default: break;
    }

    ctx->pc = 0x31fa38u;

    // 0x31fa38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31fa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x31fa3c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x31fa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x31fa40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31fa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31fa44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31fa44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa48: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x31fa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x31fa4c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31fa4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa50: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x31fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x31fa54: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x31fa54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa58: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x31fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x31fa5c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x31fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x31fa60: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x31fa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x31fa64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31fa68: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x31fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x31fa6c: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x31FA6Cu;
    {
        const bool branch_taken_0x31fa6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA6Cu;
        // 0x31fa70: 0x8e950010  lw          $s5, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa6c) {
            ctx->pc = 0x31FAE8u;
            goto label_31fae8;
        }
    }
    ctx->pc = 0x31FA74u;
    // 0x31fa74: 0x24120024  addiu       $s2, $zero, 0x24
    ctx->pc = 0x31fa74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x31fa78: 0x26b10004  addiu       $s1, $s5, 0x4
    ctx->pc = 0x31fa78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x31fa7c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x31fa7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31fa80:
    // 0x31fa80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31fa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31fa84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa88: 0xc103454  jal         func_40D150
    ctx->pc = 0x31FA88u;
    SET_GPR_U32(ctx, 31, 0x31FA90u);
    ctx->pc = 0x31FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA88u;
    // 0x31fa8c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x31FA88u, 0x31FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FA90u;
label_31fa90:
    // 0x31fa90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FA90u;
    {
        const bool branch_taken_0x31fa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA90u;
        // 0x31fa94: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa90) {
            ctx->pc = 0x31FAACu;
            goto label_31faac;
        }
    }
    ctx->pc = 0x31FA98u;
    // 0x31fa98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31fa98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa9c: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x31FA9Cu;
    SET_GPR_U32(ctx, 31, 0x31FAA4u);
    ctx->pc = 0x31FAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA9Cu;
    // 0x31faa0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x31FA9Cu, 0x31FAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FAA4u;
label_31faa4:
    // 0x31faa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FAA4u;
    {
        const bool branch_taken_0x31faa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAA4u;
        // 0x31faa8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31faa4) {
            ctx->pc = 0x31FAB4u;
            goto label_31fab4;
        }
    }
    ctx->pc = 0x31FAACu;
label_31faac:
    // 0x31faac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x31FAACu;
    {
        const bool branch_taken_0x31faac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAACu;
        // 0x31fab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31faac) {
            ctx->pc = 0x31FAECu;
            goto label_31faec;
        }
    }
    ctx->pc = 0x31FAB4u;
label_31fab4:
    // 0x31fab4: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31FAB4u;
    {
        const bool branch_taken_0x31fab4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fab4) {
            ctx->pc = 0x31FAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FAB4u;
            // 0x31fab8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FABCu;
            goto label_31fabc;
        }
    }
    ctx->pc = 0x31FABCu;
label_31fabc:
    // 0x31fabc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x31fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x31fac0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31fac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31fac4: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x31fac4u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x31fac8: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x31fac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x31facc: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x31faccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31fad0: 0x1012  mflo        $v0
    ctx->pc = 0x31fad0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x31fad4: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x31fad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x31fad8: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x31fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x31fadc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31fae0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x31FAE0u;
    {
        const bool branch_taken_0x31fae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAE0u;
        // 0x31fae4: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fae0) {
            ctx->pc = 0x31FA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fa80;
        }
    }
    ctx->pc = 0x31FAE8u;
label_31fae8:
    // 0x31fae8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x31fae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31faec:
    // 0x31faec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x31faecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31faf0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x31faf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31faf4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x31faf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31faf8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x31faf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31fafc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31fafcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31fb00: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x31fb00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31fb04: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x31fb04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fb08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31fb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB0Cu;
        // 0x31fb10: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FB14u;
    // 0x31fb14: 0x0  nop
    ctx->pc = 0x31fb14u;
    // NOP
    ctx->pc = 0x31fb18u;
}
