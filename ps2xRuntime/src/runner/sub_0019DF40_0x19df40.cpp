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

// Function: sub_0019DF40
// Address: 0x19df40 - 0x19e0a0
void sub_0019DF40_0x19df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DF40_0x19df40");
#endif

    switch (ctx->pc) {
        case 0x19df74u: goto label_19df74;
        case 0x19df88u: goto label_19df88;
        case 0x19dfacu: goto label_19dfac;
        case 0x19dfd4u: goto label_19dfd4;
        case 0x19dff8u: goto label_19dff8;
        case 0x19e020u: goto label_19e020;
        case 0x19e050u: goto label_19e050;
        case 0x19e060u: goto label_19e060;
        case 0x19e084u: goto label_19e084;
        default: break;
    }

    ctx->pc = 0x19df40u;

    // 0x19df40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19df44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19df48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19df4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19df4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19df50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19df50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19df54: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x19df54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x19df58: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x19df58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x19df5c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x19df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x19df60: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x19df60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x19df64: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x19df64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x19df68: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19df68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19df6c: 0xc065e2c  jal         func_1978B0
    ctx->pc = 0x19DF6Cu;
    SET_GPR_U32(ctx, 31, 0x19DF74u);
    ctx->pc = 0x1978B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1978B0u, 0x19DF6Cu, 0x19DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF74u;
label_19df74:
    // 0x19df74: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x19df74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x19df78: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x19df78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x19df7c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x19df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19df80: 0xc041954  jal         func_106550
    ctx->pc = 0x19DF80u;
    SET_GPR_U32(ctx, 31, 0x19DF88u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x19DF80u, 0x19DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF88u;
label_19df88:
    // 0x19df88: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x19df88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x19df8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19df90: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x19df90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19df94: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19df98: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x19df98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19df9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19df9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19dfa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfa4: 0xc06792c  jal         func_19E4B0
    ctx->pc = 0x19DFA4u;
    SET_GPR_U32(ctx, 31, 0x19DFACu);
    ctx->pc = 0x19E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E4B0u, 0x19DFA4u, 0x19DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFACu;
label_19dfac:
    // 0x19dfac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19dfacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfb0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x19dfb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfb4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19dfb8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x19dfb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x19dfbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19dfc0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x19dfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19dfc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19dfc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfc8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x19dfc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19dfcc: 0xc0678e8  jal         func_19E3A0
    ctx->pc = 0x19DFCCu;
    SET_GPR_U32(ctx, 31, 0x19DFD4u);
    ctx->pc = 0x19E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E3A0u, 0x19DFCCu, 0x19DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFD4u;
label_19dfd4:
    // 0x19dfd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19dfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfd8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x19dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19dfdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dfe0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19DFE0u;
    {
        const bool branch_taken_0x19dfe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19dfe0) {
            ctx->pc = 0x19E004u;
            goto label_19e004;
        }
    }
    ctx->pc = 0x19DFE8u;
    // 0x19dfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19dfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfec: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x19dfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19dff0: 0xc067878  jal         func_19E1E0
    ctx->pc = 0x19DFF0u;
    SET_GPR_U32(ctx, 31, 0x19DFF8u);
    ctx->pc = 0x19E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1E0u, 0x19DFF0u, 0x19DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFF8u;
label_19dff8:
    // 0x19dff8: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x19dff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x19dffc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19DFFCu;
    {
        const bool branch_taken_0x19dffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dffc) {
            ctx->pc = 0x19E024u;
            goto label_19e024;
        }
    }
    ctx->pc = 0x19E004u;
label_19e004:
    // 0x19e004: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x19e004u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x19e008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e00c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x19e00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19e010: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x19e010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e014: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x19e014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x19e018: 0xc067858  jal         func_19E160
    ctx->pc = 0x19E018u;
    SET_GPR_U32(ctx, 31, 0x19E020u);
    ctx->pc = 0x19E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E160u, 0x19E018u, 0x19E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E020u;
label_19e020:
    // 0x19e020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e024:
    // 0x19e024: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x19e024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19e028: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19E028u;
    {
        const bool branch_taken_0x19e028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e028) {
            ctx->pc = 0x19E054u;
            goto label_19e054;
        }
    }
    ctx->pc = 0x19E030u;
    // 0x19e030: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e034: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x19e034u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x19e038: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19e038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e03c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x19e03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19e040: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19e040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e044: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x19e044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19e048: 0xc0678e8  jal         func_19E3A0
    ctx->pc = 0x19E048u;
    SET_GPR_U32(ctx, 31, 0x19E050u);
    ctx->pc = 0x19E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E3A0u, 0x19E048u, 0x19E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E050u;
label_19e050:
    // 0x19e050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e054:
    // 0x19e054: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19e054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e058: 0xc06783c  jal         func_19E0F0
    ctx->pc = 0x19E058u;
    SET_GPR_U32(ctx, 31, 0x19E060u);
    ctx->pc = 0x19E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E0F0u, 0x19E058u, 0x19E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E060u;
label_19e060:
    // 0x19e060: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x19e060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x19e064: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19e064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19e068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19e068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e06c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x19e06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19e070: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19e070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e074: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e078: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19e078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e07c: 0xc067828  jal         func_19E0A0
    ctx->pc = 0x19E07Cu;
    SET_GPR_U32(ctx, 31, 0x19E084u);
    ctx->pc = 0x19E0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E0A0u, 0x19E07Cu, 0x19E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E084u;
label_19e084:
    // 0x19e084: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19e084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e088: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e08c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e094: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x19e094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19e098: 0x3e00008  jr          $ra
    ctx->pc = 0x19E098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E0A0u;
}
