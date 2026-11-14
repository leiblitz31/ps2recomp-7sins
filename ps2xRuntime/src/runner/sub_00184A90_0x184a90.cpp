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

// Function: sub_00184A90
// Address: 0x184a90 - 0x184d70
void sub_00184A90_0x184a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184A90_0x184a90");
#endif

    switch (ctx->pc) {
        case 0x184aa8u: goto label_184aa8;
        case 0x184adcu: goto label_184adc;
        case 0x184b3cu: goto label_184b3c;
        case 0x184b58u: goto label_184b58;
        case 0x184b64u: goto label_184b64;
        case 0x184b70u: goto label_184b70;
        case 0x184b80u: goto label_184b80;
        case 0x184b90u: goto label_184b90;
        case 0x184bacu: goto label_184bac;
        case 0x184bc4u: goto label_184bc4;
        case 0x184bd4u: goto label_184bd4;
        case 0x184becu: goto label_184bec;
        case 0x184bfcu: goto label_184bfc;
        case 0x184c04u: goto label_184c04;
        case 0x184c18u: goto label_184c18;
        case 0x184c2cu: goto label_184c2c;
        case 0x184c50u: goto label_184c50;
        case 0x184c6cu: goto label_184c6c;
        case 0x184c7cu: goto label_184c7c;
        case 0x184c8cu: goto label_184c8c;
        case 0x184c9cu: goto label_184c9c;
        case 0x184cb8u: goto label_184cb8;
        case 0x184cd4u: goto label_184cd4;
        case 0x184ce4u: goto label_184ce4;
        case 0x184cf4u: goto label_184cf4;
        case 0x184d00u: goto label_184d00;
        case 0x184d14u: goto label_184d14;
        case 0x184d28u: goto label_184d28;
        case 0x184d40u: goto label_184d40;
        case 0x184d50u: goto label_184d50;
        default: break;
    }

    ctx->pc = 0x184a90u;

    // 0x184a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184a98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x184a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x184a9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x184a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184aa0: 0xc060fb0  jal         func_183EC0
    ctx->pc = 0x184AA0u;
    SET_GPR_U32(ctx, 31, 0x184AA8u);
    ctx->pc = 0x183EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183EC0u, 0x184AA0u, 0x184AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184AA8u;
label_184aa8:
    // 0x184aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184aac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x184aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x184ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x184AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184AB8u;
    // 0x184ab8: 0x0  nop
    ctx->pc = 0x184ab8u;
    // NOP
    // 0x184abc: 0x0  nop
    ctx->pc = 0x184abcu;
    // NOP
    // 0x184ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x184ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x184ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x184ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184acc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x184accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x184ad0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x184ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184ad4: 0xc0559dc  jal         func_156770
    ctx->pc = 0x184AD4u;
    SET_GPR_U32(ctx, 31, 0x184ADCu);
    ctx->pc = 0x156770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156770u, 0x184AD4u, 0x184ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184ADCu;
label_184adc:
    // 0x184adc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x184adcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x184ae0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x184ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x184ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184aec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x184aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x184af0: 0x3e00008  jr          $ra
    ctx->pc = 0x184AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184AF8u;
    // 0x184af8: 0x0  nop
    ctx->pc = 0x184af8u;
    // NOP
    // 0x184afc: 0x0  nop
    ctx->pc = 0x184afcu;
    // NOP
    // 0x184b00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x184b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x184b04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x184b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x184b08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x184b0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184b10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184b14: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x184b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x184b18: 0xa3a50090  sb          $a1, 0x90($sp)
    ctx->pc = 0x184b18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 5));
    // 0x184b1c: 0x93a20090  lbu         $v0, 0x90($sp)
    ctx->pc = 0x184b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x184b20: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x184b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x184b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184b28: 0x1462005e  bne         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x184B28u;
    {
        const bool branch_taken_0x184b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x184b28) {
            ctx->pc = 0x184CA4u;
            goto label_184ca4;
        }
    }
    ctx->pc = 0x184B30u;
    // 0x184b30: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x184b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x184b34: 0xc041b48  jal         func_106D20
    ctx->pc = 0x184B34u;
    SET_GPR_U32(ctx, 31, 0x184B3Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x184B34u, 0x184B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B3Cu;
label_184b3c:
    // 0x184b3c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x184b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x184b40: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x184b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x184b44: 0x24a55140  addiu       $a1, $a1, 0x5140
    ctx->pc = 0x184b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20800));
    // 0x184b48: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x184b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x184b4c: 0x24c6bb50  addiu       $a2, $a2, -0x44B0
    ctx->pc = 0x184b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949712));
    // 0x184b50: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x184B50u;
    SET_GPR_U32(ctx, 31, 0x184B58u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x184B50u, 0x184B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B58u;
label_184b58:
    // 0x184b58: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x184b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x184b5c: 0xc0495d4  jal         func_125750
    ctx->pc = 0x184B5Cu;
    SET_GPR_U32(ctx, 31, 0x184B64u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x184B5Cu, 0x184B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B64u;
label_184b64:
    // 0x184b64: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x184b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x184b68: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x184B68u;
    SET_GPR_U32(ctx, 31, 0x184B70u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x184B68u, 0x184B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B70u;
label_184b70:
    // 0x184b70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x184b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x184b74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x184b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184b78: 0xc040304  jal         func_100C10
    ctx->pc = 0x184B78u;
    SET_GPR_U32(ctx, 31, 0x184B80u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x184B78u, 0x184B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B80u;
label_184b80:
    // 0x184b80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x184b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x184b84: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x184b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x184b88: 0xc061444  jal         func_185110
    ctx->pc = 0x184B88u;
    SET_GPR_U32(ctx, 31, 0x184B90u);
    ctx->pc = 0x185110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185110u, 0x184B88u, 0x184B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B90u;
label_184b90:
    // 0x184b90: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x184b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x184b94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x184b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x184b98: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x184b98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x184b9c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x184b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x184ba0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x184ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184ba4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x184BA4u;
    SET_GPR_U32(ctx, 31, 0x184BACu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x184BA4u, 0x184BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BACu;
label_184bac:
    // 0x184bac: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x184BACu;
    {
        const bool branch_taken_0x184bac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x184bac) {
            ctx->pc = 0x184BDCu;
            goto label_184bdc;
        }
    }
    ctx->pc = 0x184BB4u;
    // 0x184bb4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x184bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x184bb8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x184bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184bbc: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x184BBCu;
    SET_GPR_U32(ctx, 31, 0x184BC4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x184BBCu, 0x184BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BC4u;
label_184bc4:
    // 0x184bc4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x184bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x184bc8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x184bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184bcc: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x184BCCu;
    SET_GPR_U32(ctx, 31, 0x184BD4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x184BCCu, 0x184BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BD4u;
label_184bd4:
    // 0x184bd4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x184BD4u;
    {
        const bool branch_taken_0x184bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184bd4) {
            ctx->pc = 0x184D50u;
            goto label_184d50;
        }
    }
    ctx->pc = 0x184BDCu;
label_184bdc:
    // 0x184bdc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x184bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184be0: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x184be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x184be4: 0xc061408  jal         func_185020
    ctx->pc = 0x184BE4u;
    SET_GPR_U32(ctx, 31, 0x184BECu);
    ctx->pc = 0x185020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185020u, 0x184BE4u, 0x184BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BECu;
label_184bec:
    // 0x184bec: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x184becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x184bf0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x184bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x184bf4: 0xc0495d4  jal         func_125750
    ctx->pc = 0x184BF4u;
    SET_GPR_U32(ctx, 31, 0x184BFCu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x184BF4u, 0x184BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BFCu;
label_184bfc:
    // 0x184bfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x184BFCu;
    {
        const bool branch_taken_0x184bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184bfc) {
            ctx->pc = 0x184C18u;
            goto label_184c18;
        }
    }
    ctx->pc = 0x184C04u;
label_184c04:
    // 0x184c04: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x184c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184c08: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x184c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x184c0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x184c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x184c10: 0xc06135c  jal         func_184D70
    ctx->pc = 0x184C10u;
    SET_GPR_U32(ctx, 31, 0x184C18u);
    ctx->pc = 0x184D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D70u, 0x184C10u, 0x184C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C18u;
label_184c18:
    // 0x184c18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x184c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x184c1c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x184c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x184c20: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x184c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x184c24: 0xc056358  jal         func_158D60
    ctx->pc = 0x184C24u;
    SET_GPR_U32(ctx, 31, 0x184C2Cu);
    ctx->pc = 0x158D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D60u, 0x184C24u, 0x184C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C2Cu;
label_184c2c:
    // 0x184c2c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x184C2Cu;
    {
        const bool branch_taken_0x184c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184c2c) {
            ctx->pc = 0x184C04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184c04;
        }
    }
    ctx->pc = 0x184C34u;
    // 0x184c34: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x184c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184c38: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x184c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x184c3c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x184c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184c40: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x184c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x184c44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x184c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184c48: 0xc08c910  jal         func_232440
    ctx->pc = 0x184C48u;
    SET_GPR_U32(ctx, 31, 0x184C50u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x184C48u, 0x184C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C50u;
label_184c50:
    // 0x184c50: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x184c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184c54: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x184c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184c58: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x184c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x184c5c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x184c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x184c60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c64: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x184C64u;
    SET_GPR_U32(ctx, 31, 0x184C6Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x184C64u, 0x184C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C6Cu;
label_184c6c:
    // 0x184c6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x184c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x184c70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x184c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184c74: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x184C74u;
    SET_GPR_U32(ctx, 31, 0x184C7Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x184C74u, 0x184C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C7Cu;
label_184c7c:
    // 0x184c7c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x184c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x184c80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x184c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184c84: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x184C84u;
    SET_GPR_U32(ctx, 31, 0x184C8Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x184C84u, 0x184C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C8Cu;
label_184c8c:
    // 0x184c8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x184c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x184c90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x184c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184c94: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x184C94u;
    SET_GPR_U32(ctx, 31, 0x184C9Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x184C94u, 0x184C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C9Cu;
label_184c9c:
    // 0x184c9c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x184C9Cu;
    {
        const bool branch_taken_0x184c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184c9c) {
            ctx->pc = 0x184D40u;
            goto label_184d40;
        }
    }
    ctx->pc = 0x184CA4u;
label_184ca4:
    // 0x184ca4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x184ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184ca8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x184ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x184cac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x184cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184cb0: 0xc08c910  jal         func_232440
    ctx->pc = 0x184CB0u;
    SET_GPR_U32(ctx, 31, 0x184CB8u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x184CB0u, 0x184CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CB8u;
label_184cb8:
    // 0x184cb8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x184cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184cbc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x184cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184cc0: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x184cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x184cc4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x184cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x184cc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184ccc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x184CCCu;
    SET_GPR_U32(ctx, 31, 0x184CD4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x184CCCu, 0x184CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CD4u;
label_184cd4:
    // 0x184cd4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x184cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184cd8: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x184cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x184cdc: 0xc061408  jal         func_185020
    ctx->pc = 0x184CDCu;
    SET_GPR_U32(ctx, 31, 0x184CE4u);
    ctx->pc = 0x185020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185020u, 0x184CDCu, 0x184CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CE4u;
label_184ce4:
    // 0x184ce4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x184ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184ce8: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x184ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x184cec: 0xc061284  jal         func_184A10
    ctx->pc = 0x184CECu;
    SET_GPR_U32(ctx, 31, 0x184CF4u);
    ctx->pc = 0x184A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A10u, 0x184CECu, 0x184CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CF4u;
label_184cf4:
    // 0x184cf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x184cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184cf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x184CF8u;
    {
        const bool branch_taken_0x184cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184cf8) {
            ctx->pc = 0x184D18u;
            goto label_184d18;
        }
    }
    ctx->pc = 0x184D00u;
label_184d00:
    // 0x184d00: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x184d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d04: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x184d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184d08: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x184d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x184d0c: 0xc061a30  jal         func_1868C0
    ctx->pc = 0x184D0Cu;
    SET_GPR_U32(ctx, 31, 0x184D14u);
    ctx->pc = 0x1868C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C0u, 0x184D0Cu, 0x184D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D14u;
label_184d14:
    // 0x184d14: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x184d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_184d18:
    // 0x184d18: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x184d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184d1c: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x184d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x184d20: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x184D20u;
    SET_GPR_U32(ctx, 31, 0x184D28u);
    ctx->pc = 0x1849F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1849F0u, 0x184D20u, 0x184D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D28u;
label_184d28:
    // 0x184d28: 0x1602fff5  bne         $s0, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x184D28u;
    {
        const bool branch_taken_0x184d28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x184d28) {
            ctx->pc = 0x184D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184d00;
        }
    }
    ctx->pc = 0x184D30u;
    // 0x184d30: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x184d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184d34: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x184d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x184d38: 0xc061204  jal         func_184810
    ctx->pc = 0x184D38u;
    SET_GPR_U32(ctx, 31, 0x184D40u);
    ctx->pc = 0x184810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184810u, 0x184D38u, 0x184D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D40u;
label_184d40:
    // 0x184d40: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x184d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184d44: 0x93a50090  lbu         $a1, 0x90($sp)
    ctx->pc = 0x184d44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x184d48: 0xc055a78  jal         func_1569E0
    ctx->pc = 0x184D48u;
    SET_GPR_U32(ctx, 31, 0x184D50u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x184D48u, 0x184D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D50u;
label_184d50:
    // 0x184d50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x184d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184d54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x184d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184d58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184d60: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x184d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x184d64: 0x3e00008  jr          $ra
    ctx->pc = 0x184D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184D6Cu;
    // 0x184d6c: 0x0  nop
    ctx->pc = 0x184d6cu;
    // NOP
    ctx->pc = 0x184d70u;
}
