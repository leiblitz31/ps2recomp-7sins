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

// Function: sub_004A68F0
// Address: 0x4a68f0 - 0x4a6960
void sub_004A68F0_0x4a68f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A68F0_0x4a68f0");
#endif

    switch (ctx->pc) {
        case 0x4a68f0u: goto label_4a68f0;
        case 0x4a68f4u: goto label_4a68f4;
        case 0x4a68f8u: goto label_4a68f8;
        case 0x4a68fcu: goto label_4a68fc;
        case 0x4a6900u: goto label_4a6900;
        case 0x4a6904u: goto label_4a6904;
        case 0x4a6908u: goto label_4a6908;
        case 0x4a690cu: goto label_4a690c;
        case 0x4a6910u: goto label_4a6910;
        case 0x4a6914u: goto label_4a6914;
        case 0x4a6918u: goto label_4a6918;
        case 0x4a691cu: goto label_4a691c;
        case 0x4a6920u: goto label_4a6920;
        case 0x4a6924u: goto label_4a6924;
        case 0x4a6928u: goto label_4a6928;
        case 0x4a692cu: goto label_4a692c;
        case 0x4a6930u: goto label_4a6930;
        case 0x4a6934u: goto label_4a6934;
        case 0x4a6938u: goto label_4a6938;
        case 0x4a693cu: goto label_4a693c;
        case 0x4a6940u: goto label_4a6940;
        case 0x4a6944u: goto label_4a6944;
        case 0x4a6948u: goto label_4a6948;
        case 0x4a694cu: goto label_4a694c;
        case 0x4a6950u: goto label_4a6950;
        case 0x4a6954u: goto label_4a6954;
        case 0x4a6958u: goto label_4a6958;
        case 0x4a695cu: goto label_4a695c;
        default: break;
    }

    ctx->pc = 0x4a68f0u;

label_4a68f0:
    // 0x4a68f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a68f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4a68f4:
    // 0x4a68f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a68f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a68f8:
    // 0x4a68f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a68f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4a68fc:
    // 0x4a68fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a68fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6900:
    // 0x4a6900: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a6900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4a6904:
    // 0x4a6904: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a6904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a6908:
    // 0x4a6908: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_4a690c:
    if (ctx->pc == 0x4A690Cu) {
        ctx->pc = 0x4A690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6908u;
        // 0x4a690c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6910u;
        goto label_4a6910;
    }
    ctx->pc = 0x4A6908u;
    {
        const bool branch_taken_0x4a6908 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6908u;
        // 0x4a690c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6908) {
            ctx->pc = 0x4A6940u;
            goto label_4a6940;
        }
    }
    ctx->pc = 0x4A6910u;
label_4a6910:
    // 0x4a6910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a6910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a6914:
    // 0x4a6914: 0x0  nop
    ctx->pc = 0x4a6914u;
    // NOP
label_4a6918:
    // 0x4a6918: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a6918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a691c:
    // 0x4a691c: 0x40f809  jalr        $v0
label_4a6920:
    if (ctx->pc == 0x4A6920u) {
        ctx->pc = 0x4A6924u;
        goto label_4a6924;
    }
    ctx->pc = 0x4A691Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A6924u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A691Cu, 0x4A6924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6924u;
label_4a6924:
    // 0x4a6924: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4a6928:
    if (ctx->pc == 0x4A6928u) {
        ctx->pc = 0x4A6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6924u;
        // 0x4a6928: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A692Cu;
        goto label_4a692c;
    }
    ctx->pc = 0x4A6924u;
    {
        const bool branch_taken_0x4a6924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6924u;
        // 0x4a6928: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6924) {
            ctx->pc = 0x4A6934u;
            goto label_4a6934;
        }
    }
    ctx->pc = 0x4A692Cu;
label_4a692c:
    // 0x4a692c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4a6930:
    if (ctx->pc == 0x4A6930u) {
        ctx->pc = 0x4A6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A692Cu;
        // 0x4a6930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6934u;
        goto label_4a6934;
    }
    ctx->pc = 0x4A692Cu;
    {
        const bool branch_taken_0x4a692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A692Cu;
        // 0x4a6930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a692c) {
            ctx->pc = 0x4A6944u;
            goto label_4a6944;
        }
    }
    ctx->pc = 0x4A6934u;
label_4a6934:
    // 0x4a6934: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x4a6934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4a6938:
    // 0x4a6938: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_4a693c:
    if (ctx->pc == 0x4A693Cu) {
        ctx->pc = 0x4A693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6938u;
        // 0x4a693c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6940u;
        goto label_4a6940;
    }
    ctx->pc = 0x4A6938u;
    {
        const bool branch_taken_0x4a6938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6938u;
        // 0x4a693c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6938) {
            ctx->pc = 0x4A6918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6918;
        }
    }
    ctx->pc = 0x4A6940u;
label_4a6940:
    // 0x4a6940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a6940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6944:
    // 0x4a6944: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a6944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a6948:
    // 0x4a6948: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a6948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a694c:
    // 0x4a694c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a694cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a6950:
    // 0x4a6950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a6954:
    // 0x4a6954: 0x3e00008  jr          $ra
label_4a6958:
    if (ctx->pc == 0x4A6958u) {
        ctx->pc = 0x4A6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6954u;
        // 0x4a6958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A695Cu;
        goto label_4a695c;
    }
    ctx->pc = 0x4A6954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6954u;
        // 0x4a6958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A695Cu;
label_4a695c:
    // 0x4a695c: 0x0  nop
    ctx->pc = 0x4a695cu;
    // NOP
    ctx->pc = 0x4a6960u;
}
