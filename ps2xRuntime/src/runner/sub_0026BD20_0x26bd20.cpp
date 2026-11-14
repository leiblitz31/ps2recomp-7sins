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

// Function: sub_0026BD20
// Address: 0x26bd20 - 0x26be80
void sub_0026BD20_0x26bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BD20_0x26bd20");
#endif

    switch (ctx->pc) {
        case 0x26bd54u: goto label_26bd54;
        case 0x26bd68u: goto label_26bd68;
        case 0x26bd8cu: goto label_26bd8c;
        case 0x26bdb4u: goto label_26bdb4;
        case 0x26bdd8u: goto label_26bdd8;
        case 0x26be00u: goto label_26be00;
        case 0x26be30u: goto label_26be30;
        case 0x26be40u: goto label_26be40;
        case 0x26be64u: goto label_26be64;
        default: break;
    }

    ctx->pc = 0x26bd20u;

    // 0x26bd20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26bd24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26bd28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26bd2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26bd30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26bd34: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x26bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x26bd38: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x26bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x26bd3c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x26bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x26bd40: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x26bd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x26bd44: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x26bd44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x26bd48: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26bd4c: 0xc09ac80  jal         func_26B200
    ctx->pc = 0x26BD4Cu;
    SET_GPR_U32(ctx, 31, 0x26BD54u);
    ctx->pc = 0x26B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B200u, 0x26BD4Cu, 0x26BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD54u;
label_26bd54:
    // 0x26bd54: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x26bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x26bd58: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x26bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x26bd5c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26bd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26bd60: 0xc041954  jal         func_106550
    ctx->pc = 0x26BD60u;
    SET_GPR_U32(ctx, 31, 0x26BD68u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x26BD60u, 0x26BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD68u;
label_26bd68:
    // 0x26bd68: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x26bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x26bd6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26bd70: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x26bd70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26bd74: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26bd78: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x26bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26bd7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26bd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26bd80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd84: 0xc09bd14  jal         func_26F450
    ctx->pc = 0x26BD84u;
    SET_GPR_U32(ctx, 31, 0x26BD8Cu);
    ctx->pc = 0x26F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F450u, 0x26BD84u, 0x26BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD8Cu;
label_26bd8c:
    // 0x26bd8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26bd8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd90: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x26bd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd94: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26bd98: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x26bd98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bd9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26bd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26bda0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x26bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26bda4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26bda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bda8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x26bda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x26bdac: 0xc09aff0  jal         func_26BFC0
    ctx->pc = 0x26BDACu;
    SET_GPR_U32(ctx, 31, 0x26BDB4u);
    ctx->pc = 0x26BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BFC0u, 0x26BDACu, 0x26BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BDB4u;
label_26bdb4:
    // 0x26bdb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26bdb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdb8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x26bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26bdbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bdc0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26BDC0u;
    {
        const bool branch_taken_0x26bdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26bdc0) {
            ctx->pc = 0x26BDE4u;
            goto label_26bde4;
        }
    }
    ctx->pc = 0x26BDC8u;
    // 0x26bdc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdcc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x26bdccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26bdd0: 0xc09b010  jal         func_26C040
    ctx->pc = 0x26BDD0u;
    SET_GPR_U32(ctx, 31, 0x26BDD8u);
    ctx->pc = 0x26C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C040u, 0x26BDD0u, 0x26BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BDD8u;
label_26bdd8:
    // 0x26bdd8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x26bdd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x26bddc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26BDDCu;
    {
        const bool branch_taken_0x26bddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bddc) {
            ctx->pc = 0x26BE04u;
            goto label_26be04;
        }
    }
    ctx->pc = 0x26BDE4u;
label_26bde4:
    // 0x26bde4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x26bde4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdec: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x26bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26bdf0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x26bdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26bdf4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x26bdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x26bdf8: 0xc09afd0  jal         func_26BF40
    ctx->pc = 0x26BDF8u;
    SET_GPR_U32(ctx, 31, 0x26BE00u);
    ctx->pc = 0x26BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BF40u, 0x26BDF8u, 0x26BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE00u;
label_26be00:
    // 0x26be00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26be00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26be04:
    // 0x26be04: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x26be04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26be08: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26BE08u;
    {
        const bool branch_taken_0x26be08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26be08) {
            ctx->pc = 0x26BE34u;
            goto label_26be34;
        }
    }
    ctx->pc = 0x26BE10u;
    // 0x26be10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26be14: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x26be14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x26be18: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x26be18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26be1c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26be20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26be20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be24: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x26be24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26be28: 0xc09aff0  jal         func_26BFC0
    ctx->pc = 0x26BE28u;
    SET_GPR_U32(ctx, 31, 0x26BE30u);
    ctx->pc = 0x26BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BFC0u, 0x26BE28u, 0x26BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE30u;
label_26be30:
    // 0x26be30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26be30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26be34:
    // 0x26be34: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26be34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26be38: 0xc09afb4  jal         func_26BED0
    ctx->pc = 0x26BE38u;
    SET_GPR_U32(ctx, 31, 0x26BE40u);
    ctx->pc = 0x26BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BED0u, 0x26BE38u, 0x26BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE40u;
label_26be40:
    // 0x26be40: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x26be40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x26be44: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x26be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x26be48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26be48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26be4c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x26be4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26be50: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x26be50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26be54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26be54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26be58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be5c: 0xc09afa0  jal         func_26BE80
    ctx->pc = 0x26BE5Cu;
    SET_GPR_U32(ctx, 31, 0x26BE64u);
    ctx->pc = 0x26BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BE80u, 0x26BE5Cu, 0x26BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE64u;
label_26be64:
    // 0x26be64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26be64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26be68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26be68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26be6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26be6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26be70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26be70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26be74: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x26be74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x26be78: 0x3e00008  jr          $ra
    ctx->pc = 0x26BE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BE80u;
}
