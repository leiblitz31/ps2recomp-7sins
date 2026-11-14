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

// Function: sub_001FEE20
// Address: 0x1fee20 - 0x1ff0a0
void sub_001FEE20_0x1fee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEE20_0x1fee20");
#endif

    switch (ctx->pc) {
        case 0x1fee3cu: goto label_1fee3c;
        case 0x1fee60u: goto label_1fee60;
        case 0x1fefa0u: goto label_1fefa0;
        case 0x1fefc4u: goto label_1fefc4;
        case 0x1ff024u: goto label_1ff024;
        case 0x1ff050u: goto label_1ff050;
        case 0x1ff074u: goto label_1ff074;
        case 0x1ff084u: goto label_1ff084;
        default: break;
    }

    ctx->pc = 0x1fee20u;

    // 0x1fee20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fee24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fee28: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x1fee28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fee2c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1fee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fee30: 0x27859994  addiu       $a1, $gp, -0x666C
    ctx->pc = 0x1fee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941076));
    // 0x1fee34: 0xc040304  jal         func_100C10
    ctx->pc = 0x1FEE34u;
    SET_GPR_U32(ctx, 31, 0x1FEE3Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1FEE34u, 0x1FEE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEE3Cu;
label_1fee3c:
    // 0x1fee3c: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x1fee3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fee40: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1fee40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fee44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fee48: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEE48u;
    {
        const bool branch_taken_0x1fee48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fee48) {
            ctx->pc = 0x1FEE68u;
            goto label_1fee68;
        }
    }
    ctx->pc = 0x1FEE50u;
    // 0x1fee50: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1fee50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fee54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fee54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fee58: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1FEE58u;
    SET_GPR_U32(ctx, 31, 0x1FEE60u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1FEE58u, 0x1FEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEE60u;
label_1fee60:
    // 0x1fee60: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1FEE60u;
    {
        const bool branch_taken_0x1fee60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee60) {
            ctx->pc = 0x1FF084u;
            goto label_1ff084;
        }
    }
    ctx->pc = 0x1FEE68u;
label_1fee68:
    // 0x1fee68: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1fee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fee6c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x1fee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x1fee70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fee74: 0x1062007f  beq         $v1, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1FEE74u;
    {
        const bool branch_taken_0x1fee74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fee74) {
            ctx->pc = 0x1FF074u;
            goto label_1ff074;
        }
    }
    ctx->pc = 0x1FEE7Cu;
    // 0x1fee7c: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1fee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fee80: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x1fee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x1fee84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fee88: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x1FEE88u;
    {
        const bool branch_taken_0x1fee88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fee88) {
            ctx->pc = 0x1FF074u;
            goto label_1ff074;
        }
    }
    ctx->pc = 0x1FEE90u;
    // 0x1fee90: 0x8f84bb64  lw          $a0, -0x449C($gp)
    ctx->pc = 0x1fee90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fee94: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1fee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fee98: 0x8c42010c  lw          $v0, 0x10C($v0)
    ctx->pc = 0x1fee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x1fee9c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1feea0: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1feea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1feea4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1feea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1feea8: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1feea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1feeac: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x1feeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1feeb0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1feeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1feeb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1feeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1feeb8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1feeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1feebc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1feebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1feec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1feec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1feec4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1feec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1feec8: 0x8f84bb64  lw          $a0, -0x449C($gp)
    ctx->pc = 0x1feec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1feecc: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1feeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1feed0: 0x8c420114  lw          $v0, 0x114($v0)
    ctx->pc = 0x1feed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x1feed4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1feed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1feed8: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1feed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1feedc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1feedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1feee0: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1feee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1feee4: 0x8c430118  lw          $v1, 0x118($v0)
    ctx->pc = 0x1feee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x1feee8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1feee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1feeec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1feeecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1feef0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1feef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1feef4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1feef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1feef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1feef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1feefc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1feefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fef00: 0x14a2003d  bne         $a1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1FEF00u;
    {
        const bool branch_taken_0x1fef00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fef00) {
            ctx->pc = 0x1FEFF8u;
            goto label_1feff8;
        }
    }
    ctx->pc = 0x1FEF08u;
    // 0x1fef08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fef08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fef0c: 0x8f84bb64  lw          $a0, -0x449C($gp)
    ctx->pc = 0x1fef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fef10: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1fef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fef14: 0x8c42010c  lw          $v0, 0x10C($v0)
    ctx->pc = 0x1fef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x1fef18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fef18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fef1c: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fef20: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fef20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fef24: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1fef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fef28: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x1fef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1fef2c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fef30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fef30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fef34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fef34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fef38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fef3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fef40: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x1fef40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x1fef44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fef48: 0x8f84bb64  lw          $a0, -0x449C($gp)
    ctx->pc = 0x1fef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fef4c: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1fef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fef50: 0x8c420114  lw          $v0, 0x114($v0)
    ctx->pc = 0x1fef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x1fef54: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fef54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fef58: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fef5c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fef60: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1fef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fef64: 0x8c430118  lw          $v1, 0x118($v0)
    ctx->pc = 0x1fef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x1fef68: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fef68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fef6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fef70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fef70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fef74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fef78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fef78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fef7c: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x1fef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x1fef80: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fef80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fef84: 0x8c42bf64  lw          $v0, -0x409C($v0)
    ctx->pc = 0x1fef84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BF64u));
    // 0x1fef88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fef88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fef8c: 0x0  nop
    ctx->pc = 0x1fef8cu;
    // NOP
    // 0x1fef90: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fef90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fef94: 0x8f84bb64  lw          $a0, -0x449C($gp)
    ctx->pc = 0x1fef94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fef98: 0xc064d10  jal         func_193440
    ctx->pc = 0x1FEF98u;
    SET_GPR_U32(ctx, 31, 0x1FEFA0u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1FEF98u, 0x1FEFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFA0u;
label_1fefa0:
    // 0x1fefa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fefa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fefa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fefa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fefa8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1fefa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1fefac: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1fefacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1fefb0: 0x24a58cf0  addiu       $a1, $a1, -0x7310
    ctx->pc = 0x1fefb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937840));
    // 0x1fefb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fefb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fefb8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1fefb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fefbc: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1FEFBCu;
    SET_GPR_U32(ctx, 31, 0x1FEFC4u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1FEFBCu, 0x1FEFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFC4u;
label_1fefc4:
    // 0x1fefc4: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1fefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fefc8: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1fefc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x1fefcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fefccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fefd0: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1fefd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fefd4: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x1fefd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
    // 0x1fefd8: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1fefd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fefdc: 0xac430114  sw          $v1, 0x114($v0)
    ctx->pc = 0x1fefdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
    // 0x1fefe0: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1fefe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fefe4: 0xac430110  sw          $v1, 0x110($v0)
    ctx->pc = 0x1fefe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 3));
    // 0x1fefe8: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1fefe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fefec: 0xac43010c  sw          $v1, 0x10C($v0)
    ctx->pc = 0x1fefecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 3));
    // 0x1feff0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FEFF0u;
    {
        const bool branch_taken_0x1feff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feff0) {
            ctx->pc = 0x1FF074u;
            goto label_1ff074;
        }
    }
    ctx->pc = 0x1FEFF8u;
label_1feff8:
    // 0x1feff8: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1feff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1feffc: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x1feffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x1ff000: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1ff000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff004: 0x8c460110  lw          $a2, 0x110($v0)
    ctx->pc = 0x1ff004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1ff008: 0x8f84bb64  lw          $a0, -0x449C($gp)
    ctx->pc = 0x1ff008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff00c: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x1ff00cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x1ff010: 0x24e7f0a0  addiu       $a3, $a3, -0xF60
    ctx->pc = 0x1ff010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963360));
    // 0x1ff014: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x1ff014u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x1ff018: 0x250888a8  addiu       $t0, $t0, -0x7758
    ctx->pc = 0x1ff018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936744));
    // 0x1ff01c: 0xc07f250  jal         func_1FC940
    ctx->pc = 0x1FF01Cu;
    SET_GPR_U32(ctx, 31, 0x1FF024u);
    ctx->pc = 0x1FC940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC940u, 0x1FF01Cu, 0x1FF024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF024u;
label_1ff024:
    // 0x1ff024: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1ff024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff028: 0x8c450114  lw          $a1, 0x114($v0)
    ctx->pc = 0x1ff028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x1ff02c: 0x8f82bb64  lw          $v0, -0x449C($gp)
    ctx->pc = 0x1ff02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff030: 0x8c460118  lw          $a2, 0x118($v0)
    ctx->pc = 0x1ff030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x1ff034: 0x8f84bb64  lw          $a0, -0x449C($gp)
    ctx->pc = 0x1ff034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff038: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x1ff038u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x1ff03c: 0x24e7f0a0  addiu       $a3, $a3, -0xF60
    ctx->pc = 0x1ff03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963360));
    // 0x1ff040: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x1ff040u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x1ff044: 0x250888b0  addiu       $t0, $t0, -0x7750
    ctx->pc = 0x1ff044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936752));
    // 0x1ff048: 0xc07f250  jal         func_1FC940
    ctx->pc = 0x1FF048u;
    SET_GPR_U32(ctx, 31, 0x1FF050u);
    ctx->pc = 0x1FC940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC940u, 0x1FF048u, 0x1FF050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF050u;
label_1ff050:
    // 0x1ff050: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ff050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff054: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ff054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ff058: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1ff058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1ff05c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ff05cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ff060: 0x24a58d00  addiu       $a1, $a1, -0x7300
    ctx->pc = 0x1ff060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937856));
    // 0x1ff064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff068: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ff068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff06c: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1FF06Cu;
    SET_GPR_U32(ctx, 31, 0x1FF074u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1FF06Cu, 0x1FF074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF074u;
label_1ff074:
    // 0x1ff074: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ff074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ff078: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ff078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff07c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1FF07Cu;
    SET_GPR_U32(ctx, 31, 0x1FF084u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1FF07Cu, 0x1FF084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF084u;
label_1ff084:
    // 0x1ff084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff088: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ff088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ff08c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF094u;
    // 0x1ff094: 0x0  nop
    ctx->pc = 0x1ff094u;
    // NOP
    // 0x1ff098: 0x0  nop
    ctx->pc = 0x1ff098u;
    // NOP
    // 0x1ff09c: 0x0  nop
    ctx->pc = 0x1ff09cu;
    // NOP
    ctx->pc = 0x1ff0a0u;
}
