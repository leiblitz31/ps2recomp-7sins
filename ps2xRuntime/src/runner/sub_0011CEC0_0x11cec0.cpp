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

// Function: sub_0011CEC0
// Address: 0x11cec0 - 0x11d0b0
void sub_0011CEC0_0x11cec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CEC0_0x11cec0");
#endif

    switch (ctx->pc) {
        case 0x11cedcu: goto label_11cedc;
        case 0x11cf00u: goto label_11cf00;
        case 0x11cf50u: goto label_11cf50;
        case 0x11cf74u: goto label_11cf74;
        case 0x11cf7cu: goto label_11cf7c;
        case 0x11cf84u: goto label_11cf84;
        case 0x11cfa8u: goto label_11cfa8;
        case 0x11cfb4u: goto label_11cfb4;
        case 0x11cfc0u: goto label_11cfc0;
        case 0x11cfd4u: goto label_11cfd4;
        case 0x11cfecu: goto label_11cfec;
        case 0x11cff4u: goto label_11cff4;
        case 0x11d07cu: goto label_11d07c;
        case 0x11d09cu: goto label_11d09c;
        default: break;
    }

    ctx->pc = 0x11cec0u;

    // 0x11cec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11cec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11cecc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11ceccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ced0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x11ced0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x11ced4: 0xc047074  jal         func_11C1D0
    ctx->pc = 0x11CED4u;
    SET_GPR_U32(ctx, 31, 0x11CEDCu);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x11CED4u, 0x11CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEDCu;
label_11cedc:
    // 0x11cedc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x11cee0: 0x24633440  addiu       $v1, $v1, 0x3440
    ctx->pc = 0x11cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13376));
    // 0x11cee4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cee8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11ceec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cef0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11cef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x11cef4: 0x24a51ca0  addiu       $a1, $a1, 0x1CA0
    ctx->pc = 0x11cef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7328));
    // 0x11cef8: 0xc04322c  jal         func_10C8B0
    ctx->pc = 0x11CEF8u;
    SET_GPR_U32(ctx, 31, 0x11CF00u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x11CEF8u, 0x11CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF00u;
label_11cf00:
    // 0x11cf00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cf04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cf08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11cf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11cf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CF14u;
    // 0x11cf14: 0x0  nop
    ctx->pc = 0x11cf14u;
    // NOP
    // 0x11cf18: 0x0  nop
    ctx->pc = 0x11cf18u;
    // NOP
    // 0x11cf1c: 0x0  nop
    ctx->pc = 0x11cf1cu;
    // NOP
    // 0x11cf20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11cf24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11cf28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11cf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11cf2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11cf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11cf30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11cf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11cf34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11cf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11cf38: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x11cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x11cf3c: 0xa3a50070  sb          $a1, 0x70($sp)
    ctx->pc = 0x11cf3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 5));
    // 0x11cf40: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x11cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11cf44: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x11cf44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11cf48: 0xc08edb0  jal         func_23B6C0
    ctx->pc = 0x11CF48u;
    SET_GPR_U32(ctx, 31, 0x11CF50u);
    ctx->pc = 0x23B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B6C0u, 0x11CF48u, 0x11CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF50u;
label_11cf50:
    // 0x11cf50: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x11cf50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11cf54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x11cf54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11cf58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cf5c: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x11CF5Cu;
    {
        const bool branch_taken_0x11cf5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x11cf5c) {
            ctx->pc = 0x11D018u;
            goto label_11d018;
        }
    }
    ctx->pc = 0x11CF64u;
    // 0x11cf64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11cf64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf68: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11cf6c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x11CF6Cu;
    SET_GPR_U32(ctx, 31, 0x11CF74u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x11CF6Cu, 0x11CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF74u;
label_11cf74:
    // 0x11cf74: 0xc11904c  jal         func_464130
    ctx->pc = 0x11CF74u;
    SET_GPR_U32(ctx, 31, 0x11CF7Cu);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x11CF74u, 0x11CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF7Cu;
label_11cf7c:
    // 0x11cf7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11cf7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf80: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x11cf80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11cf84:
    // 0x11cf84: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x11cf84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf88: 0x24f20001  addiu       $s2, $a3, 0x1
    ctx->pc = 0x11cf88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x11cf8c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11cf90: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11cf90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x11cf94: 0x24a51cb0  addiu       $a1, $a1, 0x1CB0
    ctx->pc = 0x11cf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7344));
    // 0x11cf98: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x11cf98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x11cf9c: 0x24c61cd0  addiu       $a2, $a2, 0x1CD0
    ctx->pc = 0x11cf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7376));
    // 0x11cfa0: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x11CFA0u;
    SET_GPR_U32(ctx, 31, 0x11CFA8u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x11CFA0u, 0x11CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFA8u;
label_11cfa8:
    // 0x11cfa8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11cfac: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x11CFACu;
    SET_GPR_U32(ctx, 31, 0x11CFB4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x11CFACu, 0x11CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFB4u;
label_11cfb4:
    // 0x11cfb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11cfb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfb8: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x11CFB8u;
    SET_GPR_U32(ctx, 31, 0x11CFC0u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x11CFB8u, 0x11CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFC0u;
label_11cfc0:
    // 0x11cfc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11cfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11cfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11cfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cfcc: 0xc08df08  jal         func_237C20
    ctx->pc = 0x11CFCCu;
    SET_GPR_U32(ctx, 31, 0x11CFD4u);
    ctx->pc = 0x237C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237C20u, 0x11CFCCu, 0x11CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFD4u;
label_11cfd4:
    // 0x11cfd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11cfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11cfd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CFD8u;
    {
        const bool branch_taken_0x11cfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cfd8) {
            ctx->pc = 0x11CFECu;
            goto label_11cfec;
        }
    }
    ctx->pc = 0x11CFE0u;
    // 0x11cfe0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11cfe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfe4: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x11CFE4u;
    {
        const bool branch_taken_0x11cfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cfe4) {
            ctx->pc = 0x11CF84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cf84;
        }
    }
    ctx->pc = 0x11CFECu;
label_11cfec:
    // 0x11cfec: 0xc11904c  jal         func_464130
    ctx->pc = 0x11CFECu;
    SET_GPR_U32(ctx, 31, 0x11CFF4u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x11CFECu, 0x11CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFF4u;
label_11cff4:
    // 0x11cff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11cff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cff8: 0x211102f  dsubu       $v0, $s0, $s1
    ctx->pc = 0x11cff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 17));
    // 0x11cffc: 0x2c422710  sltiu       $v0, $v0, 0x2710
    ctx->pc = 0x11cffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10000) ? 1 : 0);
    // 0x11d000: 0x0  nop
    ctx->pc = 0x11d000u;
    // NOP
    // 0x11d004: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11D004u;
    {
        const bool branch_taken_0x11d004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d004) {
            ctx->pc = 0x11CFECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cfec;
        }
    }
    ctx->pc = 0x11D00Cu;
    // 0x11d00c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x11d00cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d010: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x11D010u;
    {
        const bool branch_taken_0x11d010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d010) {
            ctx->pc = 0x11CF84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cf84;
        }
    }
    ctx->pc = 0x11D018u;
label_11d018:
    // 0x11d018: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11d018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11d01c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11d01cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d020: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11d020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11d024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11d028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d02c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x11d02cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x11d030: 0x3e00008  jr          $ra
    ctx->pc = 0x11D030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D038u;
    // 0x11d038: 0x0  nop
    ctx->pc = 0x11d038u;
    // NOP
    // 0x11d03c: 0x0  nop
    ctx->pc = 0x11d03cu;
    // NOP
    // 0x11d040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d048: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11d048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11d04c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11d04cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x11d050: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d054: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11D054u;
    {
        const bool branch_taken_0x11d054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d054) {
            ctx->pc = 0x11D09Cu;
            goto label_11d09c;
        }
    }
    ctx->pc = 0x11D05Cu;
    // 0x11d05c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x11d060: 0x24633440  addiu       $v1, $v1, 0x3440
    ctx->pc = 0x11d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13376));
    // 0x11d064: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d068: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11d068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11d06c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d074: 0xc047088  jal         func_11C220
    ctx->pc = 0x11D074u;
    SET_GPR_U32(ctx, 31, 0x11D07Cu);
    ctx->pc = 0x11C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C220u, 0x11D074u, 0x11D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D07Cu;
label_11d07c:
    // 0x11d07c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x11d07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d080: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11d080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x11d084: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11d084u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x11d088: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D088u;
    {
        const bool branch_taken_0x11d088 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11d088) {
            ctx->pc = 0x11D09Cu;
            goto label_11d09c;
        }
    }
    ctx->pc = 0x11D090u;
    // 0x11d090: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11d090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d094: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x11D094u;
    SET_GPR_U32(ctx, 31, 0x11D09Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x11D094u, 0x11D09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D09Cu;
label_11d09c:
    // 0x11d09c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d0a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d0a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11d0a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11d0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x11D0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D0B0u;
}
