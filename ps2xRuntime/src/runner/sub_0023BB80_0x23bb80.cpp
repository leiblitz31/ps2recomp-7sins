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

// Function: sub_0023BB80
// Address: 0x23bb80 - 0x23bca0
void sub_0023BB80_0x23bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BB80_0x23bb80");
#endif

    switch (ctx->pc) {
        case 0x23bb80u: goto label_23bb80;
        case 0x23bb84u: goto label_23bb84;
        case 0x23bb88u: goto label_23bb88;
        case 0x23bb8cu: goto label_23bb8c;
        case 0x23bb90u: goto label_23bb90;
        case 0x23bb94u: goto label_23bb94;
        case 0x23bb98u: goto label_23bb98;
        case 0x23bb9cu: goto label_23bb9c;
        case 0x23bba0u: goto label_23bba0;
        case 0x23bba4u: goto label_23bba4;
        case 0x23bba8u: goto label_23bba8;
        case 0x23bbacu: goto label_23bbac;
        case 0x23bbb0u: goto label_23bbb0;
        case 0x23bbb4u: goto label_23bbb4;
        case 0x23bbb8u: goto label_23bbb8;
        case 0x23bbbcu: goto label_23bbbc;
        case 0x23bbc0u: goto label_23bbc0;
        case 0x23bbc4u: goto label_23bbc4;
        case 0x23bbc8u: goto label_23bbc8;
        case 0x23bbccu: goto label_23bbcc;
        case 0x23bbd0u: goto label_23bbd0;
        case 0x23bbd4u: goto label_23bbd4;
        case 0x23bbd8u: goto label_23bbd8;
        case 0x23bbdcu: goto label_23bbdc;
        case 0x23bbe0u: goto label_23bbe0;
        case 0x23bbe4u: goto label_23bbe4;
        case 0x23bbe8u: goto label_23bbe8;
        case 0x23bbecu: goto label_23bbec;
        case 0x23bbf0u: goto label_23bbf0;
        case 0x23bbf4u: goto label_23bbf4;
        case 0x23bbf8u: goto label_23bbf8;
        case 0x23bbfcu: goto label_23bbfc;
        case 0x23bc00u: goto label_23bc00;
        case 0x23bc04u: goto label_23bc04;
        case 0x23bc08u: goto label_23bc08;
        case 0x23bc0cu: goto label_23bc0c;
        case 0x23bc10u: goto label_23bc10;
        case 0x23bc14u: goto label_23bc14;
        case 0x23bc18u: goto label_23bc18;
        case 0x23bc1cu: goto label_23bc1c;
        case 0x23bc20u: goto label_23bc20;
        case 0x23bc24u: goto label_23bc24;
        case 0x23bc28u: goto label_23bc28;
        case 0x23bc2cu: goto label_23bc2c;
        case 0x23bc30u: goto label_23bc30;
        case 0x23bc34u: goto label_23bc34;
        case 0x23bc38u: goto label_23bc38;
        case 0x23bc3cu: goto label_23bc3c;
        case 0x23bc40u: goto label_23bc40;
        case 0x23bc44u: goto label_23bc44;
        case 0x23bc48u: goto label_23bc48;
        case 0x23bc4cu: goto label_23bc4c;
        case 0x23bc50u: goto label_23bc50;
        case 0x23bc54u: goto label_23bc54;
        case 0x23bc58u: goto label_23bc58;
        case 0x23bc5cu: goto label_23bc5c;
        case 0x23bc60u: goto label_23bc60;
        case 0x23bc64u: goto label_23bc64;
        case 0x23bc68u: goto label_23bc68;
        case 0x23bc6cu: goto label_23bc6c;
        case 0x23bc70u: goto label_23bc70;
        case 0x23bc74u: goto label_23bc74;
        case 0x23bc78u: goto label_23bc78;
        case 0x23bc7cu: goto label_23bc7c;
        case 0x23bc80u: goto label_23bc80;
        case 0x23bc84u: goto label_23bc84;
        case 0x23bc88u: goto label_23bc88;
        case 0x23bc8cu: goto label_23bc8c;
        case 0x23bc90u: goto label_23bc90;
        case 0x23bc94u: goto label_23bc94;
        case 0x23bc98u: goto label_23bc98;
        case 0x23bc9cu: goto label_23bc9c;
        default: break;
    }

    ctx->pc = 0x23bb80u;

label_23bb80:
    // 0x23bb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23bb84:
    // 0x23bb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23bb88:
    // 0x23bb88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23bb8c:
    // 0x23bb8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23bb90:
    // 0x23bb90: 0xc08ec70  jal         func_23B1C0
label_23bb94:
    if (ctx->pc == 0x23BB94u) {
        ctx->pc = 0x23BB98u;
        goto label_23bb98;
    }
    ctx->pc = 0x23BB90u;
    SET_GPR_U32(ctx, 31, 0x23BB98u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x23BB90u, 0x23BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB98u;
label_23bb98:
    // 0x23bb98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23bb9c:
    // 0x23bb9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23bb9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23bba0:
    // 0x23bba0: 0x3e00008  jr          $ra
label_23bba4:
    if (ctx->pc == 0x23BBA4u) {
        ctx->pc = 0x23BBA8u;
        goto label_23bba8;
    }
    ctx->pc = 0x23BBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BBA8u;
label_23bba8:
    // 0x23bba8: 0x0  nop
    ctx->pc = 0x23bba8u;
    // NOP
label_23bbac:
    // 0x23bbac: 0x0  nop
    ctx->pc = 0x23bbacu;
    // NOP
label_23bbb0:
    // 0x23bbb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23bbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23bbb4:
    // 0x23bbb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_23bbb8:
    // 0x23bbb8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x23bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_23bbbc:
    // 0x23bbbc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x23bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_23bbc0:
    // 0x23bbc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23bbc4:
    // 0x23bbc4: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
label_23bbc8:
    if (ctx->pc == 0x23BBC8u) {
        ctx->pc = 0x23BBCCu;
        goto label_23bbcc;
    }
    ctx->pc = 0x23BBC4u;
    {
        const bool branch_taken_0x23bbc4 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x23bbc4) {
            ctx->pc = 0x23BBD8u;
            goto label_23bbd8;
        }
    }
    ctx->pc = 0x23BBCCu;
label_23bbcc:
    // 0x23bbcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23bbccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bbd0:
    // 0x23bbd0: 0x10000014  b           . + 4 + (0x14 << 2)
label_23bbd4:
    if (ctx->pc == 0x23BBD4u) {
        ctx->pc = 0x23BBD8u;
        goto label_23bbd8;
    }
    ctx->pc = 0x23BBD0u;
    {
        const bool branch_taken_0x23bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bbd0) {
            ctx->pc = 0x23BC24u;
            goto label_23bc24;
        }
    }
    ctx->pc = 0x23BBD8u;
label_23bbd8:
    // 0x23bbd8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23bbdc:
    // 0x23bbdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23bbe0:
    // 0x23bbe0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23bbe4:
    // 0x23bbe4: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x23bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_23bbe8:
    // 0x23bbe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23bbec:
    // 0x23bbec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23bbf0:
    // 0x23bbf0: 0x10020004  beq         $zero, $v0, . + 4 + (0x4 << 2)
label_23bbf4:
    if (ctx->pc == 0x23BBF4u) {
        ctx->pc = 0x23BBF8u;
        goto label_23bbf8;
    }
    ctx->pc = 0x23BBF0u;
    {
        const bool branch_taken_0x23bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bbf0) {
            ctx->pc = 0x23BC04u;
            goto label_23bc04;
        }
    }
    ctx->pc = 0x23BBF8u;
label_23bbf8:
    // 0x23bbf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23bbf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bbfc:
    // 0x23bbfc: 0x10000009  b           . + 4 + (0x9 << 2)
label_23bc00:
    if (ctx->pc == 0x23BC00u) {
        ctx->pc = 0x23BC04u;
        goto label_23bc04;
    }
    ctx->pc = 0x23BBFCu;
    {
        const bool branch_taken_0x23bbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bbfc) {
            ctx->pc = 0x23BC24u;
            goto label_23bc24;
        }
    }
    ctx->pc = 0x23BC04u;
label_23bc04:
    // 0x23bc04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23bc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23bc08:
    // 0x23bc08: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23bc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23bc0c:
    // 0x23bc0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23bc10:
    // 0x23bc10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23bc14:
    // 0x23bc14: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x23bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_23bc18:
    // 0x23bc18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23bc1c:
    // 0x23bc1c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x23bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_23bc20:
    // 0x23bc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23bc24:
    // 0x23bc24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23bc24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23bc28:
    // 0x23bc28: 0x3e00008  jr          $ra
label_23bc2c:
    if (ctx->pc == 0x23BC2Cu) {
        ctx->pc = 0x23BC30u;
        goto label_23bc30;
    }
    ctx->pc = 0x23BC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BC30u;
label_23bc30:
    // 0x23bc30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23bc34:
    // 0x23bc34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23bc38:
    // 0x23bc38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23bc3c:
    // 0x23bc3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_23bc40:
    // 0x23bc40: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x23bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_23bc44:
    // 0x23bc44: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23bc48:
    // 0x23bc48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23bc4c:
    // 0x23bc4c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x23bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_23bc50:
    // 0x23bc50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23bc54:
    // 0x23bc54: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x23bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_23bc58:
    // 0x23bc58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23bc58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23bc5c:
    // 0x23bc5c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23bc5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23bc60:
    // 0x23bc60: 0x320f809  jalr        $t9
label_23bc64:
    if (ctx->pc == 0x23BC64u) {
        ctx->pc = 0x23BC68u;
        goto label_23bc68;
    }
    ctx->pc = 0x23BC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23BC68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC60u, 0x23BC68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BC68u;
label_23bc68:
    // 0x23bc68: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23bc6c:
    // 0x23bc6c: 0x10030006  beq         $zero, $v1, . + 4 + (0x6 << 2)
label_23bc70:
    if (ctx->pc == 0x23BC70u) {
        ctx->pc = 0x23BC74u;
        goto label_23bc74;
    }
    ctx->pc = 0x23BC6Cu;
    {
        const bool branch_taken_0x23bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x23bc6c) {
            ctx->pc = 0x23BC88u;
            goto label_23bc88;
        }
    }
    ctx->pc = 0x23BC74u;
label_23bc74:
    // 0x23bc74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23bc78:
    // 0x23bc78: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x23bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_23bc7c:
    // 0x23bc7c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23bc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23bc80:
    // 0x23bc80: 0xc088fb4  jal         func_223ED0
label_23bc84:
    if (ctx->pc == 0x23BC84u) {
        ctx->pc = 0x23BC88u;
        goto label_23bc88;
    }
    ctx->pc = 0x23BC80u;
    SET_GPR_U32(ctx, 31, 0x23BC88u);
    ctx->pc = 0x223ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223ED0u, 0x23BC80u, 0x23BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC88u;
label_23bc88:
    // 0x23bc88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23bc8c:
    // 0x23bc8c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23bc8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_23bc90:
    // 0x23bc90: 0x3e00008  jr          $ra
label_23bc94:
    if (ctx->pc == 0x23BC94u) {
        ctx->pc = 0x23BC98u;
        goto label_23bc98;
    }
    ctx->pc = 0x23BC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BC98u;
label_23bc98:
    // 0x23bc98: 0x0  nop
    ctx->pc = 0x23bc98u;
    // NOP
label_23bc9c:
    // 0x23bc9c: 0x0  nop
    ctx->pc = 0x23bc9cu;
    // NOP
    ctx->pc = 0x23bca0u;
}
