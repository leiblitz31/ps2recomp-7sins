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

// Function: sub_001C0BF0
// Address: 0x1c0bf0 - 0x1c1030
void sub_001C0BF0_0x1c0bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0BF0_0x1c0bf0");
#endif

    switch (ctx->pc) {
        case 0x1c0c38u: goto label_1c0c38;
        case 0x1c0c68u: goto label_1c0c68;
        case 0x1c0c74u: goto label_1c0c74;
        case 0x1c0c8cu: goto label_1c0c8c;
        case 0x1c0c98u: goto label_1c0c98;
        case 0x1c0cb8u: goto label_1c0cb8;
        case 0x1c0cccu: goto label_1c0ccc;
        case 0x1c0d08u: goto label_1c0d08;
        case 0x1c0de8u: goto label_1c0de8;
        case 0x1c0e10u: goto label_1c0e10;
        case 0x1c0e44u: goto label_1c0e44;
        case 0x1c0e80u: goto label_1c0e80;
        case 0x1c0e94u: goto label_1c0e94;
        case 0x1c0eb4u: goto label_1c0eb4;
        case 0x1c0ec8u: goto label_1c0ec8;
        case 0x1c0f58u: goto label_1c0f58;
        case 0x1c0f68u: goto label_1c0f68;
        case 0x1c0f84u: goto label_1c0f84;
        case 0x1c0fa4u: goto label_1c0fa4;
        case 0x1c0fb0u: goto label_1c0fb0;
        case 0x1c0fe0u: goto label_1c0fe0;
        default: break;
    }

    ctx->pc = 0x1c0bf0u;

    // 0x1c0bf0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x1c0bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x1c0bf4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c0bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c0bf8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c0bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c0bfc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c0bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c0c00: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c0c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c0c04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c0c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c0c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c0c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c0c0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c0c10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0c18: 0xafa40220  sw          $a0, 0x220($sp)
    ctx->pc = 0x1c0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 4));
    // 0x1c0c1c: 0xafa50230  sw          $a1, 0x230($sp)
    ctx->pc = 0x1c0c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 5));
    // 0x1c0c20: 0xafa60240  sw          $a2, 0x240($sp)
    ctx->pc = 0x1c0c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 6));
    // 0x1c0c24: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1c0c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c0c28: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x1c0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c0c2c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1c0c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0c30: 0xc0ba892  jal         func_2EA248
    ctx->pc = 0x1C0C30u;
    SET_GPR_U32(ctx, 31, 0x1C0C38u);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x1C0C30u, 0x1C0C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C38u;
label_1c0c38:
    // 0x1c0c38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c0c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c0c3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c0c40: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1c0c40u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c0c44: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0C44u;
    {
        const bool branch_taken_0x1c0c44 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c44) {
            ctx->pc = 0x1C0C58u;
            goto label_1c0c58;
        }
    }
    ctx->pc = 0x1C0C4Cu;
    // 0x1c0c4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c50: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x1C0C50u;
    {
        const bool branch_taken_0x1c0c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c50) {
            ctx->pc = 0x1C1000u;
            goto label_1c1000;
        }
    }
    ctx->pc = 0x1C0C58u;
label_1c0c58:
    // 0x1c0c58: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c0c58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c5c: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x1c0c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
    // 0x1c0c60: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x1c0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x1c0c64: 0x27b40150  addiu       $s4, $sp, 0x150
    ctx->pc = 0x1c0c64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1c0c68:
    // 0x1c0c68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c6c: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1C0C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C0C74u);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1C0C6Cu, 0x1C0C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C74u;
label_1c0c74:
    // 0x1c0c74: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1c0c74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x1c0c78: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x1c0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1c0c7c: 0x0  nop
    ctx->pc = 0x1c0c7cu;
    // NOP
    // 0x1c0c80: 0x1682fff9  bne         $s4, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C0C80u;
    {
        const bool branch_taken_0x1c0c80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0c80) {
            ctx->pc = 0x1C0C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0c68;
        }
    }
    ctx->pc = 0x1C0C88u;
    // 0x1c0c88: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x1c0c88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c0c8c:
    // 0x1c0c8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c90: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1C0C90u;
    SET_GPR_U32(ctx, 31, 0x1C0C98u);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1C0C90u, 0x1C0C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C98u;
label_1c0c98:
    // 0x1c0c98: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1c0c98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1c0c9c: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x1c0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c0ca0: 0x0  nop
    ctx->pc = 0x1c0ca0u;
    // NOP
    // 0x1c0ca4: 0x1662fff9  bne         $s3, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C0CA4u;
    {
        const bool branch_taken_0x1c0ca4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0ca4) {
            ctx->pc = 0x1C0C8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0c8c;
        }
    }
    ctx->pc = 0x1C0CACu;
    // 0x1c0cac: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x1c0cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0cb0: 0xc0702a8  jal         func_1C0AA0
    ctx->pc = 0x1C0CB0u;
    SET_GPR_U32(ctx, 31, 0x1C0CB8u);
    ctx->pc = 0x1C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AA0u, 0x1C0CB0u, 0x1C0CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CB8u;
label_1c0cb8:
    // 0x1c0cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cbc: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x1c0cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0cc0: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1c0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1c0cc4: 0xc06ef24  jal         func_1BBC90
    ctx->pc = 0x1C0CC4u;
    SET_GPR_U32(ctx, 31, 0x1C0CCCu);
    ctx->pc = 0x1BBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC90u, 0x1C0CC4u, 0x1C0CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CCCu;
label_1c0ccc:
    // 0x1c0ccc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0CCCu;
    {
        const bool branch_taken_0x1c0ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ccc) {
            ctx->pc = 0x1C0CDCu;
            goto label_1c0cdc;
        }
    }
    ctx->pc = 0x1C0CD4u;
    // 0x1c0cd4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0CD4u;
    {
        const bool branch_taken_0x1c0cd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0cd4) {
            ctx->pc = 0x1C0CE8u;
            goto label_1c0ce8;
        }
    }
    ctx->pc = 0x1C0CDCu;
label_1c0cdc:
    // 0x1c0cdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ce0: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x1C0CE0u;
    {
        const bool branch_taken_0x1c0ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ce0) {
            ctx->pc = 0x1C1000u;
            goto label_1c1000;
        }
    }
    ctx->pc = 0x1C0CE8u;
label_1c0ce8:
    // 0x1c0ce8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1c0ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c0cec: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1c0cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c0cf0: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x1c0cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0cf4: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x1c0cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c0cf8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c0cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0cfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c0cfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d00: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1C0D00u;
    SET_GPR_U32(ctx, 31, 0x1C0D08u);
    ctx->pc = 0x1BFDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFDA0u, 0x1C0D00u, 0x1C0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D08u;
label_1c0d08:
    // 0x1c0d08: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1c0d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c0d0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0d10: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0D10u;
    {
        const bool branch_taken_0x1c0d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0d10) {
            ctx->pc = 0x1C0D30u;
            goto label_1c0d30;
        }
    }
    ctx->pc = 0x1C0D18u;
    // 0x1c0d18: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c0d1c: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0D1Cu;
    {
        const bool branch_taken_0x1c0d1c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1c0d1c) {
            ctx->pc = 0x1C0D30u;
            goto label_1c0d30;
        }
    }
    ctx->pc = 0x1C0D24u;
    // 0x1c0d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0d28: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1C0D28u;
    {
        const bool branch_taken_0x1c0d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d28) {
            ctx->pc = 0x1C1000u;
            goto label_1c1000;
        }
    }
    ctx->pc = 0x1C0D30u;
label_1c0d30:
    // 0x1c0d30: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1c0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c0d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0d38: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0D38u;
    {
        const bool branch_taken_0x1c0d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0d38) {
            ctx->pc = 0x1C0D68u;
            goto label_1c0d68;
        }
    }
    ctx->pc = 0x1C0D40u;
    // 0x1c0d40: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c0d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c0d44: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c0d48: 0x8c42be58  lw          $v0, -0x41A8($v0)
    ctx->pc = 0x1c0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1c0d4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c0d50: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1c0d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c0d54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0D54u;
    {
        const bool branch_taken_0x1c0d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d54) {
            ctx->pc = 0x1C0D68u;
            goto label_1c0d68;
        }
    }
    ctx->pc = 0x1C0D5Cu;
    // 0x1c0d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0d60: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1C0D60u;
    {
        const bool branch_taken_0x1c0d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d60) {
            ctx->pc = 0x1C1000u;
            goto label_1c1000;
        }
    }
    ctx->pc = 0x1C0D68u;
label_1c0d68:
    // 0x1c0d68: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c0d6c: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x1c0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c0d70: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1c0d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0d74: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1c0d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c0d78: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x1c0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c0d7c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1c0d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0d80: 0x640000d  bltz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1C0D80u;
    {
        const bool branch_taken_0x1c0d80 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1c0d80) {
            ctx->pc = 0x1C0DB8u;
            goto label_1c0db8;
        }
    }
    ctx->pc = 0x1C0D88u;
    // 0x1c0d88: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c0d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c0d8c: 0x8c42be58  lw          $v0, -0x41A8($v0)
    ctx->pc = 0x1c0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1c0d90: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x1c0d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c0d94: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0D94u;
    {
        const bool branch_taken_0x1c0d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d94) {
            ctx->pc = 0x1C0DB8u;
            goto label_1c0db8;
        }
    }
    ctx->pc = 0x1C0D9Cu;
    // 0x1c0d9c: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0D9Cu;
    {
        const bool branch_taken_0x1c0d9c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1c0d9c) {
            ctx->pc = 0x1C0DB8u;
            goto label_1c0db8;
        }
    }
    ctx->pc = 0x1C0DA4u;
    // 0x1c0da4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c0da8: 0x8c42be5c  lw          $v0, -0x41A4($v0)
    ctx->pc = 0x1c0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1c0dac: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1c0dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c0db0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0DB0u;
    {
        const bool branch_taken_0x1c0db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0db0) {
            ctx->pc = 0x1C0DF8u;
            goto label_1c0df8;
        }
    }
    ctx->pc = 0x1C0DB8u;
label_1c0db8:
    // 0x1c0db8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0DB8u;
    {
        const bool branch_taken_0x1c0db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0db8) {
            ctx->pc = 0x1C0DECu;
            goto label_1c0dec;
        }
    }
    ctx->pc = 0x1C0DC0u;
    // 0x1c0dc0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1c0dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c0dc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c0dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c0dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0dcc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0DCCu;
    {
        const bool branch_taken_0x1c0dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0dcc) {
            ctx->pc = 0x1C0DECu;
            goto label_1c0dec;
        }
    }
    ctx->pc = 0x1C0DD4u;
    // 0x1c0dd4: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x1c0dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0dd8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1c0dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c0ddc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c0ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0de0: 0xc06fe94  jal         func_1BFA50
    ctx->pc = 0x1C0DE0u;
    SET_GPR_U32(ctx, 31, 0x1C0DE8u);
    ctx->pc = 0x1BFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFA50u, 0x1C0DE0u, 0x1C0DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DE8u;
label_1c0de8:
    // 0x1c0de8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1c0de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1c0dec:
    // 0x1c0dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0df0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1C0DF0u;
    {
        const bool branch_taken_0x1c0df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0df0) {
            ctx->pc = 0x1C1000u;
            goto label_1c1000;
        }
    }
    ctx->pc = 0x1C0DF8u;
label_1c0df8:
    // 0x1c0df8: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x1c0df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0dfc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1c0dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c0e00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c0e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c0e04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e08: 0xc070194  jal         func_1C0650
    ctx->pc = 0x1C0E08u;
    SET_GPR_U32(ctx, 31, 0x1C0E10u);
    ctx->pc = 0x1C0650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0650u, 0x1C0E08u, 0x1C0E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E10u;
label_1c0e10:
    // 0x1c0e10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c0e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c0e14: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C0E14u;
    {
        const bool branch_taken_0x1c0e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e14) {
            ctx->pc = 0x1C0E60u;
            goto label_1c0e60;
        }
    }
    ctx->pc = 0x1C0E1Cu;
    // 0x1c0e1c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1c0e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c0e20: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c0e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c0e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0e28: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0E28u;
    {
        const bool branch_taken_0x1c0e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0e28) {
            ctx->pc = 0x1C0E54u;
            goto label_1c0e54;
        }
    }
    ctx->pc = 0x1C0E30u;
    // 0x1c0e30: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x1c0e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0e34: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1c0e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c0e38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c0e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0e3c: 0xc06fe94  jal         func_1BFA50
    ctx->pc = 0x1C0E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C0E44u);
    ctx->pc = 0x1BFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFA50u, 0x1C0E3Cu, 0x1C0E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E44u;
label_1c0e44:
    // 0x1c0e44: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1c0e44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0e4c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1C0E4Cu;
    {
        const bool branch_taken_0x1c0e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e4c) {
            ctx->pc = 0x1C1000u;
            goto label_1c1000;
        }
    }
    ctx->pc = 0x1C0E54u;
label_1c0e54:
    // 0x1c0e54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e58: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1C0E58u;
    {
        const bool branch_taken_0x1c0e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e58) {
            ctx->pc = 0x1C1000u;
            goto label_1c1000;
        }
    }
    ctx->pc = 0x1C0E60u;
label_1c0e60:
    // 0x1c0e60: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x1c0e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0e64: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1c0e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c0e68: 0x27a6021c  addiu       $a2, $sp, 0x21C
    ctx->pc = 0x1c0e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x1c0e6c: 0x27a70218  addiu       $a3, $sp, 0x218
    ctx->pc = 0x1c0e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
    // 0x1c0e70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c0e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c0e74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e78: 0xc0700c0  jal         func_1C0300
    ctx->pc = 0x1C0E78u;
    SET_GPR_U32(ctx, 31, 0x1C0E80u);
    ctx->pc = 0x1C0300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0300u, 0x1C0E78u, 0x1C0E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E80u;
label_1c0e80:
    // 0x1c0e80: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x1c0e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0e84: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1c0e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c0e88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e8c: 0xc06fdf0  jal         func_1BF7C0
    ctx->pc = 0x1C0E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C0E94u);
    ctx->pc = 0x1BF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF7C0u, 0x1C0E8Cu, 0x1C0E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E94u;
label_1c0e94:
    // 0x1c0e94: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x1c0e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0e98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c0e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c0e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ea0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1c0ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c0ea4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c0ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ea8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c0ea8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0eac: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1C0EACu;
    SET_GPR_U32(ctx, 31, 0x1C0EB4u);
    ctx->pc = 0x1BFDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFDA0u, 0x1C0EACu, 0x1C0EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EB4u;
label_1c0eb4:
    // 0x1c0eb4: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x1c0eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0eb8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1c0eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c0ebc: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1c0ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c0ec0: 0xc06ef34  jal         func_1BBCD0
    ctx->pc = 0x1C0EC0u;
    SET_GPR_U32(ctx, 31, 0x1C0EC8u);
    ctx->pc = 0x1BBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBCD0u, 0x1C0EC0u, 0x1C0EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EC8u;
label_1c0ec8:
    // 0x1c0ec8: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x1c0ec8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c0ecc: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x1c0eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1c0ed0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0ED0u;
    {
        const bool branch_taken_0x1c0ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ed0) {
            ctx->pc = 0x1C0F00u;
            goto label_1c0f00;
        }
    }
    ctx->pc = 0x1C0ED8u;
    // 0x1c0ed8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c0ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c0edc: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x1c0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c0ee0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0ee4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c0ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1c0ee8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1c0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c0eec: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x1c0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c0ef0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0ef4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1c0ef8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0EF8u;
    {
        const bool branch_taken_0x1c0ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ef8) {
            ctx->pc = 0x1C0F18u;
            goto label_1c0f18;
        }
    }
    ctx->pc = 0x1C0F00u;
label_1c0f00:
    // 0x1c0f00: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x1c0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c0f04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0f08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0F08u;
    {
        const bool branch_taken_0x1c0f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0f08) {
            ctx->pc = 0x1C0F18u;
            goto label_1c0f18;
        }
    }
    ctx->pc = 0x1C0F10u;
    // 0x1c0f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0f14: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1c0f14u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c0f18:
    // 0x1c0f18: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1c0f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c0f1c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x1c0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1c0f20: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1c0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0f24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0F24u;
    {
        const bool branch_taken_0x1c0f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f24) {
            ctx->pc = 0x1C0F34u;
            goto label_1c0f34;
        }
    }
    ctx->pc = 0x1C0F2Cu;
    // 0x1c0f2c: 0x12a00018  beqz        $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C0F2Cu;
    {
        const bool branch_taken_0x1c0f2c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f2c) {
            ctx->pc = 0x1C0F90u;
            goto label_1c0f90;
        }
    }
    ctx->pc = 0x1C0F34u;
label_1c0f34:
    // 0x1c0f34: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1c0f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c0f38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c0f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c0f3c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0F3Cu;
    {
        const bool branch_taken_0x1c0f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f3c) {
            ctx->pc = 0x1C0F70u;
            goto label_1c0f70;
        }
    }
    ctx->pc = 0x1C0F44u;
    // 0x1c0f44: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x1c0f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0f48: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1c0f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c0f4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c0f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0f50: 0xc06fe94  jal         func_1BFA50
    ctx->pc = 0x1C0F50u;
    SET_GPR_U32(ctx, 31, 0x1C0F58u);
    ctx->pc = 0x1BFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFA50u, 0x1C0F50u, 0x1C0F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F58u;
label_1c0f58:
    // 0x1c0f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0f60: 0xc070d6c  jal         func_1C35B0
    ctx->pc = 0x1C0F60u;
    SET_GPR_U32(ctx, 31, 0x1C0F68u);
    ctx->pc = 0x1C35B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C35B0u, 0x1C0F60u, 0x1C0F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F68u;
label_1c0f68:
    // 0x1c0f68: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C0F68u;
    {
        const bool branch_taken_0x1c0f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f68) {
            ctx->pc = 0x1C0FA4u;
            goto label_1c0fa4;
        }
    }
    ctx->pc = 0x1C0F70u;
label_1c0f70:
    // 0x1c0f70: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x1c0f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0f74: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1c0f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c0f78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c0f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0f7c: 0xc06fe94  jal         func_1BFA50
    ctx->pc = 0x1C0F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C0F84u);
    ctx->pc = 0x1BFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFA50u, 0x1C0F7Cu, 0x1C0F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F84u;
label_1c0f84:
    // 0x1c0f84: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1c0f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0f88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0F88u;
    {
        const bool branch_taken_0x1c0f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f88) {
            ctx->pc = 0x1C0FA4u;
            goto label_1c0fa4;
        }
    }
    ctx->pc = 0x1C0F90u;
label_1c0f90:
    // 0x1c0f90: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x1c0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0f94: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1c0f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c0f98: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c0f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0f9c: 0xc06fe94  jal         func_1BFA50
    ctx->pc = 0x1C0F9Cu;
    SET_GPR_U32(ctx, 31, 0x1C0FA4u);
    ctx->pc = 0x1BFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFA50u, 0x1C0F9Cu, 0x1C0FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FA4u;
label_1c0fa4:
    // 0x1c0fa4: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x1c0fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c0fa8: 0xc0ba892  jal         func_2EA248
    ctx->pc = 0x1C0FA8u;
    SET_GPR_U32(ctx, 31, 0x1C0FB0u);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x1C0FA8u, 0x1C0FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FB0u;
label_1c0fb0:
    // 0x1c0fb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0fb4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0FB4u;
    {
        const bool branch_taken_0x1c0fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0fb4) {
            ctx->pc = 0x1C0FD4u;
            goto label_1c0fd4;
        }
    }
    ctx->pc = 0x1C0FBCu;
    // 0x1c0fbc: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x1c0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0fc0: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1c0fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0fc4: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x1c0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0fc8: 0xe44008d8  swc1        $f0, 0x8D8($v0)
    ctx->pc = 0x1c0fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2264), bits); }
    // 0x1c0fcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C0FCCu;
    {
        const bool branch_taken_0x1c0fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0fcc) {
            ctx->pc = 0x1C0FFCu;
            goto label_1c0ffc;
        }
    }
    ctx->pc = 0x1C0FD4u;
label_1c0fd4:
    // 0x1c0fd4: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x1c0fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c0fd8: 0xc0ba892  jal         func_2EA248
    ctx->pc = 0x1C0FD8u;
    SET_GPR_U32(ctx, 31, 0x1C0FE0u);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x1C0FD8u, 0x1C0FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FE0u;
label_1c0fe0:
    // 0x1c0fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0fe4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0FE4u;
    {
        const bool branch_taken_0x1c0fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0fe4) {
            ctx->pc = 0x1C0FFCu;
            goto label_1c0ffc;
        }
    }
    ctx->pc = 0x1C0FECu;
    // 0x1c0fec: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x1c0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0ff0: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1c0ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0ff4: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c0ff8: 0xe44008d4  swc1        $f0, 0x8D4($v0)
    ctx->pc = 0x1c0ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2260), bits); }
label_1c0ffc:
    // 0x1c0ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1000:
    // 0x1c1000: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c1000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c1004: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c1004u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c1008: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c1008u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c100c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c100cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1010: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c1010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1014: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c1014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1018: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c101c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c101cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1024: 0x27bd0250  addiu       $sp, $sp, 0x250
    ctx->pc = 0x1c1024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1c1028: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1030u;
}
