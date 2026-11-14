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

// Function: sub_00275A50
// Address: 0x275a50 - 0x275bf0
void sub_00275A50_0x275a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275A50_0x275a50");
#endif

    switch (ctx->pc) {
        case 0x275a68u: goto label_275a68;
        case 0x275ab0u: goto label_275ab0;
        case 0x275af0u: goto label_275af0;
        case 0x275b0cu: goto label_275b0c;
        case 0x275b28u: goto label_275b28;
        case 0x275b3cu: goto label_275b3c;
        case 0x275b4cu: goto label_275b4c;
        case 0x275b64u: goto label_275b64;
        case 0x275bbcu: goto label_275bbc;
        case 0x275bdcu: goto label_275bdc;
        default: break;
    }

    ctx->pc = 0x275a50u;

    // 0x275a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275a58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x275a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x275a5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275a60: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x275A60u;
    SET_GPR_U32(ctx, 31, 0x275A68u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x275A60u, 0x275A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A68u;
label_275a68:
    // 0x275a68: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x275a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x275a6c: 0x24635c10  addiu       $v1, $v1, 0x5C10
    ctx->pc = 0x275a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23568));
    // 0x275a70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275a74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x275a78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275a80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x275a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275a84: 0x3e00008  jr          $ra
    ctx->pc = 0x275A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275A8Cu;
    // 0x275a8c: 0x0  nop
    ctx->pc = 0x275a8cu;
    // NOP
    // 0x275a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x275a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x275a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275aa0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x275aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x275aa4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x275aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275aa8: 0xc09d248  jal         func_274920
    ctx->pc = 0x275AA8u;
    SET_GPR_U32(ctx, 31, 0x275AB0u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x275AA8u, 0x275AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275AB0u;
label_275ab0:
    // 0x275ab0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x275ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x275ab4: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x275AB4u;
    {
        const bool branch_taken_0x275ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275ab4) {
            ctx->pc = 0x275B54u;
            goto label_275b54;
        }
    }
    ctx->pc = 0x275ABCu;
    // 0x275abc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x275abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275ac0: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x275AC0u;
    {
        const bool branch_taken_0x275ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275ac0) {
            ctx->pc = 0x275B64u;
            goto label_275b64;
        }
    }
    ctx->pc = 0x275AC8u;
    // 0x275ac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275acc: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275ACCu;
    {
        const bool branch_taken_0x275acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275acc) {
            ctx->pc = 0x275ADCu;
            goto label_275adc;
        }
    }
    ctx->pc = 0x275AD4u;
    // 0x275ad4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x275AD4u;
    {
        const bool branch_taken_0x275ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275ad4) {
            ctx->pc = 0x275B64u;
            goto label_275b64;
        }
    }
    ctx->pc = 0x275ADCu;
label_275adc:
    // 0x275adc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x275adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275ae0: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x275ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x275ae4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x275ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x275ae8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x275AE8u;
    SET_GPR_U32(ctx, 31, 0x275AF0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x275AE8u, 0x275AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275AF0u;
label_275af0:
    // 0x275af0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x275af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275af4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x275af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275af8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x275af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x275afc: 0x2785a1a0  addiu       $a1, $gp, -0x5E60
    ctx->pc = 0x275afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943136));
    // 0x275b00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x275b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275b04: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x275B04u;
    SET_GPR_U32(ctx, 31, 0x275B0Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x275B04u, 0x275B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B0Cu;
label_275b0c:
    // 0x275b0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x275b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x275b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275b14: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x275b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x275b18: 0x2785a1a8  addiu       $a1, $gp, -0x5E58
    ctx->pc = 0x275b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943144));
    // 0x275b1c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x275b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275b20: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x275B20u;
    SET_GPR_U32(ctx, 31, 0x275B28u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x275B20u, 0x275B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B28u;
label_275b28:
    // 0x275b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b34: 0xc096e4c  jal         func_25B930
    ctx->pc = 0x275B34u;
    SET_GPR_U32(ctx, 31, 0x275B3Cu);
    ctx->pc = 0x25B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B930u, 0x275B34u, 0x275B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B3Cu;
label_275b3c:
    // 0x275b3c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x275b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275b40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x275b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x275b44: 0xc09d250  jal         func_274940
    ctx->pc = 0x275B44u;
    SET_GPR_U32(ctx, 31, 0x275B4Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x275B44u, 0x275B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B4Cu;
label_275b4c:
    // 0x275b4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275B4Cu;
    {
        const bool branch_taken_0x275b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275b4c) {
            ctx->pc = 0x275B64u;
            goto label_275b64;
        }
    }
    ctx->pc = 0x275B54u;
label_275b54:
    // 0x275b54: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x275b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275b58: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x275b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x275b5c: 0xc09d250  jal         func_274940
    ctx->pc = 0x275B5Cu;
    SET_GPR_U32(ctx, 31, 0x275B64u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x275B5Cu, 0x275B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B64u;
label_275b64:
    // 0x275b64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x275b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275b6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275b70: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x275b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x275b74: 0x3e00008  jr          $ra
    ctx->pc = 0x275B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275B7Cu;
    // 0x275b7c: 0x0  nop
    ctx->pc = 0x275b7cu;
    // NOP
    // 0x275b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275b88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x275b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x275b8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x275b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x275b90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275b94: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x275B94u;
    {
        const bool branch_taken_0x275b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275b94) {
            ctx->pc = 0x275BDCu;
            goto label_275bdc;
        }
    }
    ctx->pc = 0x275B9Cu;
    // 0x275b9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x275b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x275ba0: 0x24635c10  addiu       $v1, $v1, 0x5C10
    ctx->pc = 0x275ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23568));
    // 0x275ba4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275ba8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x275bac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275bb4: 0xc09d150  jal         func_274540
    ctx->pc = 0x275BB4u;
    SET_GPR_U32(ctx, 31, 0x275BBCu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x275BB4u, 0x275BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275BBCu;
label_275bbc:
    // 0x275bbc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x275bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275bc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x275bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x275bc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x275bc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x275bc8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275BC8u;
    {
        const bool branch_taken_0x275bc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x275bc8) {
            ctx->pc = 0x275BDCu;
            goto label_275bdc;
        }
    }
    ctx->pc = 0x275BD0u;
    // 0x275bd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275bd4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x275BD4u;
    SET_GPR_U32(ctx, 31, 0x275BDCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x275BD4u, 0x275BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275BDCu;
label_275bdc:
    // 0x275bdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275be4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x275be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x275be8: 0x3e00008  jr          $ra
    ctx->pc = 0x275BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275BF0u;
}
