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

// Function: sub_0014BB50
// Address: 0x14bb50 - 0x14bc90
void sub_0014BB50_0x14bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BB50_0x14bb50");
#endif

    switch (ctx->pc) {
        case 0x14bb50u: goto label_14bb50;
        case 0x14bb54u: goto label_14bb54;
        case 0x14bb58u: goto label_14bb58;
        case 0x14bb5cu: goto label_14bb5c;
        case 0x14bb60u: goto label_14bb60;
        case 0x14bb64u: goto label_14bb64;
        case 0x14bb68u: goto label_14bb68;
        case 0x14bb6cu: goto label_14bb6c;
        case 0x14bb70u: goto label_14bb70;
        case 0x14bb74u: goto label_14bb74;
        case 0x14bb78u: goto label_14bb78;
        case 0x14bb7cu: goto label_14bb7c;
        case 0x14bb80u: goto label_14bb80;
        case 0x14bb84u: goto label_14bb84;
        case 0x14bb88u: goto label_14bb88;
        case 0x14bb8cu: goto label_14bb8c;
        case 0x14bb90u: goto label_14bb90;
        case 0x14bb94u: goto label_14bb94;
        case 0x14bb98u: goto label_14bb98;
        case 0x14bb9cu: goto label_14bb9c;
        case 0x14bba0u: goto label_14bba0;
        case 0x14bba4u: goto label_14bba4;
        case 0x14bba8u: goto label_14bba8;
        case 0x14bbacu: goto label_14bbac;
        case 0x14bbb0u: goto label_14bbb0;
        case 0x14bbb4u: goto label_14bbb4;
        case 0x14bbb8u: goto label_14bbb8;
        case 0x14bbbcu: goto label_14bbbc;
        case 0x14bbc0u: goto label_14bbc0;
        case 0x14bbc4u: goto label_14bbc4;
        case 0x14bbc8u: goto label_14bbc8;
        case 0x14bbccu: goto label_14bbcc;
        case 0x14bbd0u: goto label_14bbd0;
        case 0x14bbd4u: goto label_14bbd4;
        case 0x14bbd8u: goto label_14bbd8;
        case 0x14bbdcu: goto label_14bbdc;
        case 0x14bbe0u: goto label_14bbe0;
        case 0x14bbe4u: goto label_14bbe4;
        case 0x14bbe8u: goto label_14bbe8;
        case 0x14bbecu: goto label_14bbec;
        case 0x14bbf0u: goto label_14bbf0;
        case 0x14bbf4u: goto label_14bbf4;
        case 0x14bbf8u: goto label_14bbf8;
        case 0x14bbfcu: goto label_14bbfc;
        case 0x14bc00u: goto label_14bc00;
        case 0x14bc04u: goto label_14bc04;
        case 0x14bc08u: goto label_14bc08;
        case 0x14bc0cu: goto label_14bc0c;
        case 0x14bc10u: goto label_14bc10;
        case 0x14bc14u: goto label_14bc14;
        case 0x14bc18u: goto label_14bc18;
        case 0x14bc1cu: goto label_14bc1c;
        case 0x14bc20u: goto label_14bc20;
        case 0x14bc24u: goto label_14bc24;
        case 0x14bc28u: goto label_14bc28;
        case 0x14bc2cu: goto label_14bc2c;
        case 0x14bc30u: goto label_14bc30;
        case 0x14bc34u: goto label_14bc34;
        case 0x14bc38u: goto label_14bc38;
        case 0x14bc3cu: goto label_14bc3c;
        case 0x14bc40u: goto label_14bc40;
        case 0x14bc44u: goto label_14bc44;
        case 0x14bc48u: goto label_14bc48;
        case 0x14bc4cu: goto label_14bc4c;
        case 0x14bc50u: goto label_14bc50;
        case 0x14bc54u: goto label_14bc54;
        case 0x14bc58u: goto label_14bc58;
        case 0x14bc5cu: goto label_14bc5c;
        case 0x14bc60u: goto label_14bc60;
        case 0x14bc64u: goto label_14bc64;
        case 0x14bc68u: goto label_14bc68;
        case 0x14bc6cu: goto label_14bc6c;
        case 0x14bc70u: goto label_14bc70;
        case 0x14bc74u: goto label_14bc74;
        case 0x14bc78u: goto label_14bc78;
        case 0x14bc7cu: goto label_14bc7c;
        case 0x14bc80u: goto label_14bc80;
        case 0x14bc84u: goto label_14bc84;
        case 0x14bc88u: goto label_14bc88;
        case 0x14bc8cu: goto label_14bc8c;
        default: break;
    }

    ctx->pc = 0x14bb50u;

label_14bb50:
    // 0x14bb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14bb54:
    // 0x14bb54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14bb58:
    // 0x14bb58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_14bb5c:
    // 0x14bb5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14bb60:
    // 0x14bb60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14bb64:
    // 0x14bb64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14bb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14bb68:
    // 0x14bb68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x14bb68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_14bb6c:
    // 0x14bb6c: 0x320f809  jalr        $t9
label_14bb70:
    if (ctx->pc == 0x14BB70u) {
        ctx->pc = 0x14BB74u;
        goto label_14bb74;
    }
    ctx->pc = 0x14BB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14BB74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BB6Cu, 0x14BB74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14BB74u;
label_14bb74:
    // 0x14bb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14bb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14bb78:
    // 0x14bb78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14bb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14bb7c:
    // 0x14bb7c: 0x3e00008  jr          $ra
label_14bb80:
    if (ctx->pc == 0x14BB80u) {
        ctx->pc = 0x14BB84u;
        goto label_14bb84;
    }
    ctx->pc = 0x14BB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BB84u;
label_14bb84:
    // 0x14bb84: 0x0  nop
    ctx->pc = 0x14bb84u;
    // NOP
label_14bb88:
    // 0x14bb88: 0x0  nop
    ctx->pc = 0x14bb88u;
    // NOP
label_14bb8c:
    // 0x14bb8c: 0x0  nop
    ctx->pc = 0x14bb8cu;
    // NOP
label_14bb90:
    // 0x14bb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14bb94:
    // 0x14bb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14bb98:
    // 0x14bb98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_14bb9c:
    // 0x14bb9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14bb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14bba0:
    // 0x14bba0: 0xc0ad720  jal         func_2B5C80
label_14bba4:
    if (ctx->pc == 0x14BBA4u) {
        ctx->pc = 0x14BBA8u;
        goto label_14bba8;
    }
    ctx->pc = 0x14BBA0u;
    SET_GPR_U32(ctx, 31, 0x14BBA8u);
    ctx->pc = 0x2B5C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5C80u, 0x14BBA0u, 0x14BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBA8u;
label_14bba8:
    // 0x14bba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14bba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14bbac:
    // 0x14bbac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14bbacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14bbb0:
    // 0x14bbb0: 0x3e00008  jr          $ra
label_14bbb4:
    if (ctx->pc == 0x14BBB4u) {
        ctx->pc = 0x14BBB8u;
        goto label_14bbb8;
    }
    ctx->pc = 0x14BBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BBB8u;
label_14bbb8:
    // 0x14bbb8: 0x0  nop
    ctx->pc = 0x14bbb8u;
    // NOP
label_14bbbc:
    // 0x14bbbc: 0x0  nop
    ctx->pc = 0x14bbbcu;
    // NOP
label_14bbc0:
    // 0x14bbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14bbc4:
    // 0x14bbc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14bbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14bbc8:
    // 0x14bbc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_14bbcc:
    // 0x14bbcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14bbd0:
    // 0x14bbd0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14bbd4:
    // 0x14bbd4: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x14bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_14bbd8:
    // 0x14bbd8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x14bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_14bbdc:
    // 0x14bbdc: 0xc041d58  jal         func_107560
label_14bbe0:
    if (ctx->pc == 0x14BBE0u) {
        ctx->pc = 0x14BBE4u;
        goto label_14bbe4;
    }
    ctx->pc = 0x14BBDCu;
    SET_GPR_U32(ctx, 31, 0x14BBE4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x14BBDCu, 0x14BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBE4u;
label_14bbe4:
    // 0x14bbe4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bbe8:
    // 0x14bbe8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14bbec:
    // 0x14bbec: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x14bbecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
label_14bbf0:
    // 0x14bbf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14bbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14bbf4:
    // 0x14bbf4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14bbf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14bbf8:
    // 0x14bbf8: 0x3e00008  jr          $ra
label_14bbfc:
    if (ctx->pc == 0x14BBFCu) {
        ctx->pc = 0x14BC00u;
        goto label_14bc00;
    }
    ctx->pc = 0x14BBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BC00u;
label_14bc00:
    // 0x14bc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14bc04:
    // 0x14bc04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14bc08:
    // 0x14bc08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_14bc0c:
    // 0x14bc0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14bc10:
    // 0x14bc10: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x14bc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
label_14bc14:
    // 0x14bc14: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14bc14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14bc18:
    // 0x14bc18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bc1c:
    // 0x14bc1c: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_14bc20:
    if (ctx->pc == 0x14BC20u) {
        ctx->pc = 0x14BC24u;
        goto label_14bc24;
    }
    ctx->pc = 0x14BC1Cu;
    {
        const bool branch_taken_0x14bc1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14bc1c) {
            ctx->pc = 0x14BC74u;
            goto label_14bc74;
        }
    }
    ctx->pc = 0x14BC24u;
label_14bc24:
    // 0x14bc24: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14bc28:
    // 0x14bc28: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_14bc2c:
    // 0x14bc2c: 0x24640048  addiu       $a0, $v1, 0x48
    ctx->pc = 0x14bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_14bc30:
    // 0x14bc30: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x14bc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_14bc34:
    // 0x14bc34: 0xc041d58  jal         func_107560
label_14bc38:
    if (ctx->pc == 0x14BC38u) {
        ctx->pc = 0x14BC3Cu;
        goto label_14bc3c;
    }
    ctx->pc = 0x14BC34u;
    SET_GPR_U32(ctx, 31, 0x14BC3Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x14BC34u, 0x14BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC3Cu;
label_14bc3c:
    // 0x14bc3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14bc40:
    // 0x14bc40: 0xa0600038  sb          $zero, 0x38($v1)
    ctx->pc = 0x14bc40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 0));
label_14bc44:
    // 0x14bc44: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14bc48:
    // 0x14bc48: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x14bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_14bc4c:
    // 0x14bc4c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x14bc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_14bc50:
    // 0x14bc50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_14bc54:
    if (ctx->pc == 0x14BC54u) {
        ctx->pc = 0x14BC58u;
        goto label_14bc58;
    }
    ctx->pc = 0x14BC50u;
    {
        const bool branch_taken_0x14bc50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bc50) {
            ctx->pc = 0x14BC74u;
            goto label_14bc74;
        }
    }
    ctx->pc = 0x14BC58u;
label_14bc58:
    // 0x14bc58: 0x8f83ba94  lw          $v1, -0x456C($gp)
    ctx->pc = 0x14bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14bc5c:
    // 0x14bc5c: 0x10030005  beq         $zero, $v1, . + 4 + (0x5 << 2)
label_14bc60:
    if (ctx->pc == 0x14BC60u) {
        ctx->pc = 0x14BC64u;
        goto label_14bc64;
    }
    ctx->pc = 0x14BC5Cu;
    {
        const bool branch_taken_0x14bc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x14bc5c) {
            ctx->pc = 0x14BC74u;
            goto label_14bc74;
        }
    }
    ctx->pc = 0x14BC64u;
label_14bc64:
    // 0x14bc64: 0x8f84ba94  lw          $a0, -0x456C($gp)
    ctx->pc = 0x14bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14bc68:
    // 0x14bc68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bc6c:
    // 0x14bc6c: 0xc0a45d4  jal         func_291750
label_14bc70:
    if (ctx->pc == 0x14BC70u) {
        ctx->pc = 0x14BC74u;
        goto label_14bc74;
    }
    ctx->pc = 0x14BC6Cu;
    SET_GPR_U32(ctx, 31, 0x14BC74u);
    ctx->pc = 0x291750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291750u, 0x14BC6Cu, 0x14BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC74u;
label_14bc74:
    // 0x14bc74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14bc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14bc78:
    // 0x14bc78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14bc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14bc7c:
    // 0x14bc7c: 0x3e00008  jr          $ra
label_14bc80:
    if (ctx->pc == 0x14BC80u) {
        ctx->pc = 0x14BC84u;
        goto label_14bc84;
    }
    ctx->pc = 0x14BC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BC84u;
label_14bc84:
    // 0x14bc84: 0x0  nop
    ctx->pc = 0x14bc84u;
    // NOP
label_14bc88:
    // 0x14bc88: 0x0  nop
    ctx->pc = 0x14bc88u;
    // NOP
label_14bc8c:
    // 0x14bc8c: 0x0  nop
    ctx->pc = 0x14bc8cu;
    // NOP
    ctx->pc = 0x14bc90u;
}
