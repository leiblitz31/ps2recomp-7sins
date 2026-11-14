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

// Function: sub_001BECF0
// Address: 0x1becf0 - 0x1bee60
void sub_001BECF0_0x1becf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BECF0_0x1becf0");
#endif

    switch (ctx->pc) {
        case 0x1bed24u: goto label_1bed24;
        case 0x1bed38u: goto label_1bed38;
        case 0x1bed5cu: goto label_1bed5c;
        case 0x1bed84u: goto label_1bed84;
        case 0x1beda8u: goto label_1beda8;
        case 0x1bedd0u: goto label_1bedd0;
        case 0x1bee00u: goto label_1bee00;
        case 0x1bee10u: goto label_1bee10;
        case 0x1bee3cu: goto label_1bee3c;
        default: break;
    }

    ctx->pc = 0x1becf0u;

    // 0x1becf0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1becf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1becf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1becf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1becf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1becf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1becfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1becfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bed00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bed04: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1bed04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1bed08: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1bed08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1bed0c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1bed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1bed10: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1bed10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1bed14: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1bed14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1bed18: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1bed18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bed1c: 0xc06ef24  jal         func_1BBC90
    ctx->pc = 0x1BED1Cu;
    SET_GPR_U32(ctx, 31, 0x1BED24u);
    ctx->pc = 0x1BBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC90u, 0x1BED1Cu, 0x1BED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED24u;
label_1bed24:
    // 0x1bed24: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1bed24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1bed28: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1bed28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1bed2c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1bed2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bed30: 0xc041954  jal         func_106550
    ctx->pc = 0x1BED30u;
    SET_GPR_U32(ctx, 31, 0x1BED38u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1BED30u, 0x1BED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED38u;
label_1bed38:
    // 0x1bed38: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1bed38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bed3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bed40: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1bed40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bed44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1bed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bed48: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1bed48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1bed4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bed4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bed50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed54: 0xc070e04  jal         func_1C3810
    ctx->pc = 0x1BED54u;
    SET_GPR_U32(ctx, 31, 0x1BED5Cu);
    ctx->pc = 0x1C3810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3810u, 0x1BED54u, 0x1BED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED5Cu;
label_1bed5c:
    // 0x1bed5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bed5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed60: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1bed60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed64: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1bed64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bed68: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1bed68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bed6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bed70: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1bed70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bed74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bed74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed78: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1bed78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1bed7c: 0xc06fbe8  jal         func_1BEFA0
    ctx->pc = 0x1BED7Cu;
    SET_GPR_U32(ctx, 31, 0x1BED84u);
    ctx->pc = 0x1BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEFA0u, 0x1BED7Cu, 0x1BED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED84u;
label_1bed84:
    // 0x1bed84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bed84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed88: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1bed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bed8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bed90: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BED90u;
    {
        const bool branch_taken_0x1bed90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bed90) {
            ctx->pc = 0x1BEDB4u;
            goto label_1bedb4;
        }
    }
    ctx->pc = 0x1BED98u;
    // 0x1bed98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bed98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed9c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1bed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1beda0: 0xc06fc08  jal         func_1BF020
    ctx->pc = 0x1BEDA0u;
    SET_GPR_U32(ctx, 31, 0x1BEDA8u);
    ctx->pc = 0x1BF020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF020u, 0x1BEDA0u, 0x1BEDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDA8u;
label_1beda8:
    // 0x1beda8: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1beda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1bedac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BEDACu;
    {
        const bool branch_taken_0x1bedac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bedac) {
            ctx->pc = 0x1BEDD4u;
            goto label_1bedd4;
        }
    }
    ctx->pc = 0x1BEDB4u;
label_1bedb4:
    // 0x1bedb4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1bedb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bedb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bedb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedbc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1bedbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bedc0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1bedc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bedc4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1bedc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1bedc8: 0xc06fbc8  jal         func_1BEF20
    ctx->pc = 0x1BEDC8u;
    SET_GPR_U32(ctx, 31, 0x1BEDD0u);
    ctx->pc = 0x1BEF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEF20u, 0x1BEDC8u, 0x1BEDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDD0u;
label_1bedd0:
    // 0x1bedd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bedd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bedd4:
    // 0x1bedd4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1bedd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bedd8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BEDD8u;
    {
        const bool branch_taken_0x1bedd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bedd8) {
            ctx->pc = 0x1BEE04u;
            goto label_1bee04;
        }
    }
    ctx->pc = 0x1BEDE0u;
    // 0x1bede0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1bede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bede4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1bede4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bede8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1bede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bedec: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bedecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bedf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bedf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedf4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1bedf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bedf8: 0xc06fbe8  jal         func_1BEFA0
    ctx->pc = 0x1BEDF8u;
    SET_GPR_U32(ctx, 31, 0x1BEE00u);
    ctx->pc = 0x1BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEFA0u, 0x1BEDF8u, 0x1BEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE00u;
label_1bee00:
    // 0x1bee00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bee00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bee04:
    // 0x1bee04: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1bee04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bee08: 0xc06fbac  jal         func_1BEEB0
    ctx->pc = 0x1BEE08u;
    SET_GPR_U32(ctx, 31, 0x1BEE10u);
    ctx->pc = 0x1BEEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEEB0u, 0x1BEE08u, 0x1BEE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE10u;
label_1bee10:
    // 0x1bee10: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1bee10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1bee14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bee18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bee18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bee1c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bee20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bee20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bee24: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1bee24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1bee28: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1bee28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bee2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bee2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bee30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee34: 0xc06fb98  jal         func_1BEE60
    ctx->pc = 0x1BEE34u;
    SET_GPR_U32(ctx, 31, 0x1BEE3Cu);
    ctx->pc = 0x1BEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE60u, 0x1BEE34u, 0x1BEE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE3Cu;
label_1bee3c:
    // 0x1bee3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bee40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bee40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bee44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bee44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bee48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bee48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bee4c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1bee4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bee50: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEE58u;
    // 0x1bee58: 0x0  nop
    ctx->pc = 0x1bee58u;
    // NOP
    // 0x1bee5c: 0x0  nop
    ctx->pc = 0x1bee5cu;
    // NOP
    ctx->pc = 0x1bee60u;
}
