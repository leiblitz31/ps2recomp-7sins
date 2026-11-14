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

// Function: sub_0033BDA8
// Address: 0x33bda8 - 0x33bec0
void sub_0033BDA8_0x33bda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BDA8_0x33bda8");
#endif

    switch (ctx->pc) {
        case 0x33bde4u: goto label_33bde4;
        case 0x33be00u: goto label_33be00;
        case 0x33be14u: goto label_33be14;
        case 0x33be30u: goto label_33be30;
        case 0x33be44u: goto label_33be44;
        case 0x33be58u: goto label_33be58;
        case 0x33be6cu: goto label_33be6c;
        case 0x33be78u: goto label_33be78;
        case 0x33be88u: goto label_33be88;
        default: break;
    }

    ctx->pc = 0x33bda8u;

    // 0x33bda8: 0x3e00008  jr          $ra
    ctx->pc = 0x33BDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDA8u;
        // 0x33bdac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BDB0u;
    // 0x33bdb0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x33bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x33bdb4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x33bdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x33bdb8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x33bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x33bdbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33bdbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bdc0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x33bdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x33bdc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33bdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bdc8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x33bdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x33bdcc: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x33bdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x33bdd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33bdd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bdd4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x33bdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x33bdd8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x33bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x33bddc: 0xc0cefb0  jal         func_33BEC0
    ctx->pc = 0x33BDDCu;
    SET_GPR_U32(ctx, 31, 0x33BDE4u);
    ctx->pc = 0x33BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BDDCu;
    // 0x33bde0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BEC0u, 0x33BDDCu, 0x33BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BDE4u;
label_33bde4:
    // 0x33bde4: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x33bde4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33bde8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33bde8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bdec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33bdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bdf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33bdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bdf4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33bdf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bdf8: 0xc0cec74  jal         func_33B1D0
    ctx->pc = 0x33BDF8u;
    SET_GPR_U32(ctx, 31, 0x33BE00u);
    ctx->pc = 0x33BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BDF8u;
    // 0x33bdfc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B1D0u, 0x33BDF8u, 0x33BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE00u;
label_33be00:
    // 0x33be00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33be00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33be04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33be08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be0c: 0xc0d124c  jal         func_344930
    ctx->pc = 0x33BE0Cu;
    SET_GPR_U32(ctx, 31, 0x33BE14u);
    ctx->pc = 0x33BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE0Cu;
    // 0x33be10: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344930u, 0x33BE0Cu, 0x33BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE14u;
label_33be14:
    // 0x33be14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33be14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be18: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33BE18u;
    {
        const bool branch_taken_0x33be18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE18u;
        // 0x33be1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be18) {
            ctx->pc = 0x33BE3Cu;
            goto label_33be3c;
        }
    }
    ctx->pc = 0x33BE20u;
    // 0x33be20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33be20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33be24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be28: 0xc0d0f36  jal         func_343CD8
    ctx->pc = 0x33BE28u;
    SET_GPR_U32(ctx, 31, 0x33BE30u);
    ctx->pc = 0x33BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE28u;
    // 0x33be2c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343CD8u, 0x33BE28u, 0x33BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE30u;
label_33be30:
    // 0x33be30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33be30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be34: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x33BE34u;
    {
        const bool branch_taken_0x33be34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE34u;
        // 0x33be38: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be34) {
            ctx->pc = 0x33BE9Cu;
            goto label_33be9c;
        }
    }
    ctx->pc = 0x33BE3Cu;
label_33be3c:
    // 0x33be3c: 0xc0d0e6a  jal         func_3439A8
    ctx->pc = 0x33BE3Cu;
    SET_GPR_U32(ctx, 31, 0x33BE44u);
    ctx->pc = 0x33BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE3Cu;
    // 0x33be40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3439A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3439A8u, 0x33BE3Cu, 0x33BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE44u;
label_33be44:
    // 0x33be44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x33be44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be48: 0x56600011  bnel        $s3, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x33BE48u;
    {
        const bool branch_taken_0x33be48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x33be48) {
            ctx->pc = 0x33BE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BE48u;
            // 0x33be4c: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BE90u;
            goto label_33be90;
        }
    }
    ctx->pc = 0x33BE50u;
    // 0x33be50: 0xc0d0dae  jal         func_3436B8
    ctx->pc = 0x33BE50u;
    SET_GPR_U32(ctx, 31, 0x33BE58u);
    ctx->pc = 0x3436B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3436B8u, 0x33BE50u, 0x33BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE58u;
label_33be58:
    // 0x33be58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x33be58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be5c: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x33BE5Cu;
    {
        const bool branch_taken_0x33be5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE5Cu;
        // 0x33be60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be5c) {
            ctx->pc = 0x33BE98u;
            goto label_33be98;
        }
    }
    ctx->pc = 0x33BE64u;
    // 0x33be64: 0xc0d0e1c  jal         func_343870
    ctx->pc = 0x33BE64u;
    SET_GPR_U32(ctx, 31, 0x33BE6Cu);
    ctx->pc = 0x33BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE64u;
    // 0x33be68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343870u, 0x33BE64u, 0x33BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE6Cu;
label_33be6c:
    // 0x33be6c: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x33be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x33be70: 0xc0cee54  jal         func_33B950
    ctx->pc = 0x33BE70u;
    SET_GPR_U32(ctx, 31, 0x33BE78u);
    ctx->pc = 0x33BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE70u;
    // 0x33be74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B950u, 0x33BE70u, 0x33BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE78u;
label_33be78:
    // 0x33be78: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x33BE78u;
    {
        const bool branch_taken_0x33be78 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE78u;
        // 0x33be7c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be78) {
            ctx->pc = 0x33BE9Cu;
            goto label_33be9c;
        }
    }
    ctx->pc = 0x33BE80u;
    // 0x33be80: 0xc0d1054  jal         func_344150
    ctx->pc = 0x33BE80u;
    SET_GPR_U32(ctx, 31, 0x33BE88u);
    ctx->pc = 0x33BE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE80u;
    // 0x33be84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x33BE80u, 0x33BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE88u;
label_33be88:
    // 0x33be88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33BE88u;
    {
        const bool branch_taken_0x33be88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE88u;
        // 0x33be8c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be88) {
            ctx->pc = 0x33BE9Cu;
            goto label_33be9c;
        }
    }
    ctx->pc = 0x33BE90u;
label_33be90:
    // 0x33be90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33be90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33be94: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x33be94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_33be98:
    // 0x33be98: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x33be98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33be9c:
    // 0x33be9c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x33be9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x33bea0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x33bea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33bea4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x33bea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x33bea8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x33bea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33beac: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x33beacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33beb0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x33beb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33beb4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x33beb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33beb8: 0x3e00008  jr          $ra
    ctx->pc = 0x33BEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEB8u;
        // 0x33bebc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BEC0u;
}
