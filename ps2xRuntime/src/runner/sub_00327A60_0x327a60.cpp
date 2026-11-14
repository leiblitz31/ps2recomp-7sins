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

// Function: sub_00327A60
// Address: 0x327a60 - 0x327af8
void sub_00327A60_0x327a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327A60_0x327a60");
#endif

    switch (ctx->pc) {
        case 0x327a60u: goto label_327a60;
        case 0x327a64u: goto label_327a64;
        case 0x327a68u: goto label_327a68;
        case 0x327a6cu: goto label_327a6c;
        case 0x327a70u: goto label_327a70;
        case 0x327a74u: goto label_327a74;
        case 0x327a78u: goto label_327a78;
        case 0x327a7cu: goto label_327a7c;
        case 0x327a80u: goto label_327a80;
        case 0x327a84u: goto label_327a84;
        case 0x327a88u: goto label_327a88;
        case 0x327a8cu: goto label_327a8c;
        case 0x327a90u: goto label_327a90;
        case 0x327a94u: goto label_327a94;
        case 0x327a98u: goto label_327a98;
        case 0x327a9cu: goto label_327a9c;
        case 0x327aa0u: goto label_327aa0;
        case 0x327aa4u: goto label_327aa4;
        case 0x327aa8u: goto label_327aa8;
        case 0x327aacu: goto label_327aac;
        case 0x327ab0u: goto label_327ab0;
        case 0x327ab4u: goto label_327ab4;
        case 0x327ab8u: goto label_327ab8;
        case 0x327abcu: goto label_327abc;
        case 0x327ac0u: goto label_327ac0;
        case 0x327ac4u: goto label_327ac4;
        case 0x327ac8u: goto label_327ac8;
        case 0x327accu: goto label_327acc;
        case 0x327ad0u: goto label_327ad0;
        case 0x327ad4u: goto label_327ad4;
        case 0x327ad8u: goto label_327ad8;
        case 0x327adcu: goto label_327adc;
        case 0x327ae0u: goto label_327ae0;
        case 0x327ae4u: goto label_327ae4;
        case 0x327ae8u: goto label_327ae8;
        case 0x327aecu: goto label_327aec;
        case 0x327af0u: goto label_327af0;
        case 0x327af4u: goto label_327af4;
        default: break;
    }

    ctx->pc = 0x327a60u;

label_327a60:
    // 0x327a60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x327a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_327a64:
    // 0x327a64: 0x8f82a654  lw          $v0, -0x59AC($gp)
    ctx->pc = 0x327a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
label_327a68:
    // 0x327a68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x327a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_327a6c:
    // 0x327a6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x327a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_327a70:
    // 0x327a70: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x327a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_327a74:
    // 0x327a74: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x327a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_327a78:
    // 0x327a78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x327a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_327a7c:
    // 0x327a7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x327a7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327a80:
    // 0x327a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_327a84:
    // 0x327a84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x327a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327a88:
    // 0x327a88: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
label_327a8c:
    if (ctx->pc == 0x327A8Cu) {
        ctx->pc = 0x327A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A88u;
        // 0x327a8c: 0x2629021  addu        $s2, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A90u;
        goto label_327a90;
    }
    ctx->pc = 0x327A88u;
    {
        const bool branch_taken_0x327a88 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x327A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A88u;
        // 0x327a8c: 0x2629021  addu        $s2, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327a88) {
            ctx->pc = 0x327AD4u;
            goto label_327ad4;
        }
    }
    ctx->pc = 0x327A90u;
label_327a90:
    // 0x327a90: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x327a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_327a94:
    // 0x327a94: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x327a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_327a98:
    // 0x327a98: 0x828818  mult        $s1, $a0, $v0
    ctx->pc = 0x327a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_327a9c:
    // 0x327a9c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x327a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_327aa0:
    // 0x327aa0: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x327aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_327aa4:
    // 0x327aa4: 0x34a50105  ori         $a1, $a1, 0x105
    ctx->pc = 0x327aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)261);
label_327aa8:
    // 0x327aa8: 0x40f809  jalr        $v0
label_327aac:
    if (ctx->pc == 0x327AACu) {
        ctx->pc = 0x327AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AA8u;
        // 0x327aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AB0u;
        goto label_327ab0;
    }
    ctx->pc = 0x327AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327AB0u);
        ctx->pc = 0x327AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AA8u;
        // 0x327aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327AA8u, 0x327AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327AB0u;
label_327ab0:
    // 0x327ab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x327ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327ab4:
    // 0x327ab4: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x327ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
label_327ab8:
    // 0x327ab8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_327abc:
    if (ctx->pc == 0x327ABCu) {
        ctx->pc = 0x327ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AB8u;
        // 0x327abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AC0u;
        goto label_327ac0;
    }
    ctx->pc = 0x327AB8u;
    {
        const bool branch_taken_0x327ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x327ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AB8u;
        // 0x327abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ab8) {
            ctx->pc = 0x327AD8u;
            goto label_327ad8;
        }
    }
    ctx->pc = 0x327AC0u;
label_327ac0:
    // 0x327ac0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x327ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327ac4:
    // 0x327ac4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x327ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_327ac8:
    // 0x327ac8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x327ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_327acc:
    // 0x327acc: 0xc0bb778  jal         func_2EDDE0
label_327ad0:
    if (ctx->pc == 0x327AD0u) {
        ctx->pc = 0x327AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327ACCu;
        // 0x327ad0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AD4u;
        goto label_327ad4;
    }
    ctx->pc = 0x327ACCu;
    SET_GPR_U32(ctx, 31, 0x327AD4u);
    ctx->pc = 0x327AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327ACCu;
    // 0x327ad0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x327ACCu, 0x327AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327AD4u;
label_327ad4:
    // 0x327ad4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x327ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327ad8:
    // 0x327ad8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x327ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_327adc:
    // 0x327adc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x327adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_327ae0:
    // 0x327ae0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x327ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_327ae4:
    // 0x327ae4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x327ae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_327ae8:
    // 0x327ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_327aec:
    // 0x327aec: 0x3e00008  jr          $ra
label_327af0:
    if (ctx->pc == 0x327AF0u) {
        ctx->pc = 0x327AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AECu;
        // 0x327af0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AF4u;
        goto label_327af4;
    }
    ctx->pc = 0x327AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AECu;
        // 0x327af0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327AF4u;
label_327af4:
    // 0x327af4: 0x0  nop
    ctx->pc = 0x327af4u;
    // NOP
    ctx->pc = 0x327af8u;
}
