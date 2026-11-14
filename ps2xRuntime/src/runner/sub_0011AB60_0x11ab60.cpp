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

// Function: sub_0011AB60
// Address: 0x11ab60 - 0x11ac00
void sub_0011AB60_0x11ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AB60_0x11ab60");
#endif

    switch (ctx->pc) {
        case 0x11ab60u: goto label_11ab60;
        case 0x11ab64u: goto label_11ab64;
        case 0x11ab68u: goto label_11ab68;
        case 0x11ab6cu: goto label_11ab6c;
        case 0x11ab70u: goto label_11ab70;
        case 0x11ab74u: goto label_11ab74;
        case 0x11ab78u: goto label_11ab78;
        case 0x11ab7cu: goto label_11ab7c;
        case 0x11ab80u: goto label_11ab80;
        case 0x11ab84u: goto label_11ab84;
        case 0x11ab88u: goto label_11ab88;
        case 0x11ab8cu: goto label_11ab8c;
        case 0x11ab90u: goto label_11ab90;
        case 0x11ab94u: goto label_11ab94;
        case 0x11ab98u: goto label_11ab98;
        case 0x11ab9cu: goto label_11ab9c;
        case 0x11aba0u: goto label_11aba0;
        case 0x11aba4u: goto label_11aba4;
        case 0x11aba8u: goto label_11aba8;
        case 0x11abacu: goto label_11abac;
        case 0x11abb0u: goto label_11abb0;
        case 0x11abb4u: goto label_11abb4;
        case 0x11abb8u: goto label_11abb8;
        case 0x11abbcu: goto label_11abbc;
        case 0x11abc0u: goto label_11abc0;
        case 0x11abc4u: goto label_11abc4;
        case 0x11abc8u: goto label_11abc8;
        case 0x11abccu: goto label_11abcc;
        case 0x11abd0u: goto label_11abd0;
        case 0x11abd4u: goto label_11abd4;
        case 0x11abd8u: goto label_11abd8;
        case 0x11abdcu: goto label_11abdc;
        case 0x11abe0u: goto label_11abe0;
        case 0x11abe4u: goto label_11abe4;
        case 0x11abe8u: goto label_11abe8;
        case 0x11abecu: goto label_11abec;
        case 0x11abf0u: goto label_11abf0;
        case 0x11abf4u: goto label_11abf4;
        case 0x11abf8u: goto label_11abf8;
        case 0x11abfcu: goto label_11abfc;
        default: break;
    }

    ctx->pc = 0x11ab60u;

label_11ab60:
    // 0x11ab60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11ab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11ab64:
    // 0x11ab64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11ab68:
    // 0x11ab68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11ab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11ab6c:
    // 0x11ab6c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x11ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_11ab70:
    // 0x11ab70: 0xc08ef50  jal         func_23BD40
label_11ab74:
    if (ctx->pc == 0x11AB74u) {
        ctx->pc = 0x11AB78u;
        goto label_11ab78;
    }
    ctx->pc = 0x11AB70u;
    SET_GPR_U32(ctx, 31, 0x11AB78u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x11AB70u, 0x11AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB78u;
label_11ab78:
    // 0x11ab78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ab78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ab7c:
    // 0x11ab7c: 0xc0406f0  jal         func_101BC0
label_11ab80:
    if (ctx->pc == 0x11AB80u) {
        ctx->pc = 0x11AB84u;
        goto label_11ab84;
    }
    ctx->pc = 0x11AB7Cu;
    SET_GPR_U32(ctx, 31, 0x11AB84u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x11AB7Cu, 0x11AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB84u;
label_11ab84:
    // 0x11ab84: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11ab88:
    // 0x11ab88: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_11ab8c:
    if (ctx->pc == 0x11AB8Cu) {
        ctx->pc = 0x11AB90u;
        goto label_11ab90;
    }
    ctx->pc = 0x11AB88u;
    {
        const bool branch_taken_0x11ab88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11ab88) {
            ctx->pc = 0x11ABACu;
            goto label_11abac;
        }
    }
    ctx->pc = 0x11AB90u;
label_11ab90:
    // 0x11ab90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11ab94:
    // 0x11ab94: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_11ab98:
    if (ctx->pc == 0x11AB98u) {
        ctx->pc = 0x11AB9Cu;
        goto label_11ab9c;
    }
    ctx->pc = 0x11AB94u;
    {
        const bool branch_taken_0x11ab94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11ab94) {
            ctx->pc = 0x11ABACu;
            goto label_11abac;
        }
    }
    ctx->pc = 0x11AB9Cu;
label_11ab9c:
    // 0x11ab9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_11aba0:
    if (ctx->pc == 0x11ABA0u) {
        ctx->pc = 0x11ABA4u;
        goto label_11aba4;
    }
    ctx->pc = 0x11AB9Cu;
    {
        const bool branch_taken_0x11ab9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ab9c) {
            ctx->pc = 0x11ABACu;
            goto label_11abac;
        }
    }
    ctx->pc = 0x11ABA4u;
label_11aba4:
    // 0x11aba4: 0x1000000f  b           . + 4 + (0xF << 2)
label_11aba8:
    if (ctx->pc == 0x11ABA8u) {
        ctx->pc = 0x11ABACu;
        goto label_11abac;
    }
    ctx->pc = 0x11ABA4u;
    {
        const bool branch_taken_0x11aba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11aba4) {
            ctx->pc = 0x11ABE4u;
            goto label_11abe4;
        }
    }
    ctx->pc = 0x11ABACu;
label_11abac:
    // 0x11abac: 0x8f82b9d0  lw          $v0, -0x4630($gp)
    ctx->pc = 0x11abacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949328)));
label_11abb0:
    // 0x11abb0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x11abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_11abb4:
    // 0x11abb4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11abb8:
    // 0x11abb8: 0xc0553d4  jal         func_154F50
label_11abbc:
    if (ctx->pc == 0x11ABBCu) {
        ctx->pc = 0x11ABC0u;
        goto label_11abc0;
    }
    ctx->pc = 0x11ABB8u;
    SET_GPR_U32(ctx, 31, 0x11ABC0u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11ABB8u, 0x11ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ABC0u;
label_11abc0:
    // 0x11abc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11abc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11abc4:
    // 0x11abc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11abc8:
    // 0x11abc8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11abc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_11abcc:
    // 0x11abcc: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x11abccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_11abd0:
    // 0x11abd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11abd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11abd4:
    // 0x11abd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11abd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11abd8:
    // 0x11abd8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11abd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11abdc:
    // 0x11abdc: 0x320f809  jalr        $t9
label_11abe0:
    if (ctx->pc == 0x11ABE0u) {
        ctx->pc = 0x11ABE4u;
        goto label_11abe4;
    }
    ctx->pc = 0x11ABDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11ABE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ABDCu, 0x11ABE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11ABE4u;
label_11abe4:
    // 0x11abe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11abe8:
    // 0x11abe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11abe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11abec:
    // 0x11abec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11abecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11abf0:
    // 0x11abf0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11abf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11abf4:
    // 0x11abf4: 0x3e00008  jr          $ra
label_11abf8:
    if (ctx->pc == 0x11ABF8u) {
        ctx->pc = 0x11ABFCu;
        goto label_11abfc;
    }
    ctx->pc = 0x11ABF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ABF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ABFCu;
label_11abfc:
    // 0x11abfc: 0x0  nop
    ctx->pc = 0x11abfcu;
    // NOP
    ctx->pc = 0x11ac00u;
}
