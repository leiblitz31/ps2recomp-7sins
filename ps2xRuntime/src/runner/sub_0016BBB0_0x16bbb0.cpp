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

// Function: sub_0016BBB0
// Address: 0x16bbb0 - 0x16bd70
void sub_0016BBB0_0x16bbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BBB0_0x16bbb0");
#endif

    switch (ctx->pc) {
        case 0x16bbf0u: goto label_16bbf0;
        case 0x16bc68u: goto label_16bc68;
        case 0x16bc8cu: goto label_16bc8c;
        case 0x16bca8u: goto label_16bca8;
        case 0x16bcbcu: goto label_16bcbc;
        case 0x16bcccu: goto label_16bccc;
        case 0x16bce0u: goto label_16bce0;
        case 0x16bcf4u: goto label_16bcf4;
        case 0x16bd0cu: goto label_16bd0c;
        case 0x16bd20u: goto label_16bd20;
        case 0x16bd30u: goto label_16bd30;
        case 0x16bd44u: goto label_16bd44;
        default: break;
    }

    ctx->pc = 0x16bbb0u;

    // 0x16bbb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16bbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16bbb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16bbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16bbbc: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x16bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x16bbc0: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x16bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x16bbc4: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x16bbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16bbc8: 0x12000064  beqz        $s0, . + 4 + (0x64 << 2)
    ctx->pc = 0x16BBC8u;
    {
        const bool branch_taken_0x16bbc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bbc8) {
            ctx->pc = 0x16BD5Cu;
            goto label_16bd5c;
        }
    }
    ctx->pc = 0x16BBD0u;
    // 0x16bbd0: 0x9383bab8  lbu         $v1, -0x4548($gp)
    ctx->pc = 0x16bbd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949560)));
    // 0x16bbd4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x16bbd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16bbd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bbdc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16BBDCu;
    {
        const bool branch_taken_0x16bbdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16bbdc) {
            ctx->pc = 0x16BBF8u;
            goto label_16bbf8;
        }
    }
    ctx->pc = 0x16BBE4u;
    // 0x16bbe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bbe8: 0xc05afb4  jal         func_16BED0
    ctx->pc = 0x16BBE8u;
    SET_GPR_U32(ctx, 31, 0x16BBF0u);
    ctx->pc = 0x16BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BED0u, 0x16BBE8u, 0x16BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBF0u;
label_16bbf0:
    // 0x16bbf0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x16BBF0u;
    {
        const bool branch_taken_0x16bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bbf0) {
            ctx->pc = 0x16BD5Cu;
            goto label_16bd5c;
        }
    }
    ctx->pc = 0x16BBF8u;
label_16bbf8:
    // 0x16bbf8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x16bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16bbfc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16bbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16bc00: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x16BC00u;
    {
        const bool branch_taken_0x16bc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc00) {
            ctx->pc = 0x16BD58u;
            goto label_16bd58;
        }
    }
    ctx->pc = 0x16BC08u;
    // 0x16bc08: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x16bc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x16bc0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16bc10: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x16BC10u;
    {
        const bool branch_taken_0x16bc10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bc10) {
            ctx->pc = 0x16BD4Cu;
            goto label_16bd4c;
        }
    }
    ctx->pc = 0x16BC18u;
    // 0x16bc18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bc1c: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x16BC1Cu;
    {
        const bool branch_taken_0x16bc1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bc1c) {
            ctx->pc = 0x16BCE8u;
            goto label_16bce8;
        }
    }
    ctx->pc = 0x16BC24u;
    // 0x16bc24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bc28: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16BC28u;
    {
        const bool branch_taken_0x16bc28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bc28) {
            ctx->pc = 0x16BC5Cu;
            goto label_16bc5c;
        }
    }
    ctx->pc = 0x16BC30u;
    // 0x16bc30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bc34: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16BC34u;
    {
        const bool branch_taken_0x16bc34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bc34) {
            ctx->pc = 0x16BC5Cu;
            goto label_16bc5c;
        }
    }
    ctx->pc = 0x16BC3Cu;
    // 0x16bc3c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16bc40: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BC40u;
    {
        const bool branch_taken_0x16bc40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bc40) {
            ctx->pc = 0x16BC50u;
            goto label_16bc50;
        }
    }
    ctx->pc = 0x16BC48u;
    // 0x16bc48: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x16BC48u;
    {
        const bool branch_taken_0x16bc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc48) {
            ctx->pc = 0x16BD5Cu;
            goto label_16bd5c;
        }
    }
    ctx->pc = 0x16BC50u;
label_16bc50:
    // 0x16bc50: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x16bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x16bc54: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x16BC54u;
    {
        const bool branch_taken_0x16bc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc54) {
            ctx->pc = 0x16BD5Cu;
            goto label_16bd5c;
        }
    }
    ctx->pc = 0x16BC5Cu;
label_16bc5c:
    // 0x16bc5c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16bc60: 0xc088560  jal         func_221580
    ctx->pc = 0x16BC60u;
    SET_GPR_U32(ctx, 31, 0x16BC68u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x16BC60u, 0x16BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC68u;
label_16bc68:
    // 0x16bc68: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x16bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x16bc6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bc70: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16BC70u;
    {
        const bool branch_taken_0x16bc70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16bc70) {
            ctx->pc = 0x16BC94u;
            goto label_16bc94;
        }
    }
    ctx->pc = 0x16BC78u;
    // 0x16bc78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16bc7c: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x16bc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x16bc80: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x16bc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x16bc84: 0xc040924  jal         func_102490
    ctx->pc = 0x16BC84u;
    SET_GPR_U32(ctx, 31, 0x16BC8Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16BC84u, 0x16BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC8Cu;
label_16bc8c:
    // 0x16bc8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16BC8Cu;
    {
        const bool branch_taken_0x16bc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc8c) {
            ctx->pc = 0x16BCA8u;
            goto label_16bca8;
        }
    }
    ctx->pc = 0x16BC94u;
label_16bc94:
    // 0x16bc94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16bc98: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x16bc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x16bc9c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x16bc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x16bca0: 0xc040924  jal         func_102490
    ctx->pc = 0x16BCA0u;
    SET_GPR_U32(ctx, 31, 0x16BCA8u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16BCA0u, 0x16BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCA8u;
label_16bca8:
    // 0x16bca8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16bcac: 0x2405056a  addiu       $a1, $zero, 0x56A
    ctx->pc = 0x16bcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1386));
    // 0x16bcb0: 0x8f86bac8  lw          $a2, -0x4538($gp)
    ctx->pc = 0x16bcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16bcb4: 0xc040924  jal         func_102490
    ctx->pc = 0x16BCB4u;
    SET_GPR_U32(ctx, 31, 0x16BCBCu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16BCB4u, 0x16BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCBCu;
label_16bcbc:
    // 0x16bcbc: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x16bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16bcc0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16bcc4: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x16BCC4u;
    SET_GPR_U32(ctx, 31, 0x16BCCCu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x16BCC4u, 0x16BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCCCu;
label_16bccc:
    // 0x16bccc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x16bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x16bcd0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16bcd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16bcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bcd8: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x16BCD8u;
    SET_GPR_U32(ctx, 31, 0x16BCE0u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x16BCD8u, 0x16BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCE0u;
label_16bce0:
    // 0x16bce0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x16BCE0u;
    {
        const bool branch_taken_0x16bce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bce0) {
            ctx->pc = 0x16BD5Cu;
            goto label_16bd5c;
        }
    }
    ctx->pc = 0x16BCE8u;
label_16bce8:
    // 0x16bce8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16bcec: 0xc088560  jal         func_221580
    ctx->pc = 0x16BCECu;
    SET_GPR_U32(ctx, 31, 0x16BCF4u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x16BCECu, 0x16BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCF4u;
label_16bcf4:
    // 0x16bcf4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16bcf8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16bcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16bcfc: 0x24a541b0  addiu       $a1, $a1, 0x41B0
    ctx->pc = 0x16bcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16816));
    // 0x16bd00: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x16bd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16bd04: 0xc041b24  jal         func_106C90
    ctx->pc = 0x16BD04u;
    SET_GPR_U32(ctx, 31, 0x16BD0Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x16BD04u, 0x16BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD0Cu;
label_16bd0c:
    // 0x16bd0c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16bd10: 0x2405056a  addiu       $a1, $zero, 0x56A
    ctx->pc = 0x16bd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1386));
    // 0x16bd14: 0x8f86bac8  lw          $a2, -0x4538($gp)
    ctx->pc = 0x16bd14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16bd18: 0xc040924  jal         func_102490
    ctx->pc = 0x16BD18u;
    SET_GPR_U32(ctx, 31, 0x16BD20u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16BD18u, 0x16BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD20u;
label_16bd20:
    // 0x16bd20: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x16bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16bd24: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16bd28: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x16BD28u;
    SET_GPR_U32(ctx, 31, 0x16BD30u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x16BD28u, 0x16BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD30u;
label_16bd30:
    // 0x16bd30: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x16bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x16bd34: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16bd38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16bd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bd3c: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x16BD3Cu;
    SET_GPR_U32(ctx, 31, 0x16BD44u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x16BD3Cu, 0x16BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD44u;
label_16bd44:
    // 0x16bd44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16BD44u;
    {
        const bool branch_taken_0x16bd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd44) {
            ctx->pc = 0x16BD5Cu;
            goto label_16bd5c;
        }
    }
    ctx->pc = 0x16BD4Cu;
label_16bd4c:
    // 0x16bd4c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x16bd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x16bd50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16BD50u;
    {
        const bool branch_taken_0x16bd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd50) {
            ctx->pc = 0x16BD5Cu;
            goto label_16bd5c;
        }
    }
    ctx->pc = 0x16BD58u;
label_16bd58:
    // 0x16bd58: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x16bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_16bd5c:
    // 0x16bd5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bd60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bd64: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x16bd64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16bd68: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BD70u;
}
