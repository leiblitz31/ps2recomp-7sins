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

// Function: sub_001C06F0
// Address: 0x1c06f0 - 0x1c0900
void sub_001C06F0_0x1c06f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C06F0_0x1c06f0");
#endif

    switch (ctx->pc) {
        case 0x1c0838u: goto label_1c0838;
        case 0x1c0844u: goto label_1c0844;
        case 0x1c0850u: goto label_1c0850;
        default: break;
    }

    ctx->pc = 0x1c06f0u;

    // 0x1c06f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1c06f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1c06f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c06f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c06f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c06f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c06fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c06fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c0700: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c0700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c0704: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c0704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c0708: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c0708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c070c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c0710: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c0714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c071c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1c071cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1c0720: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x1c0720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x1c0724: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x1c0724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x1c0728: 0xafa700e0  sw          $a3, 0xE0($sp)
    ctx->pc = 0x1c0728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
    // 0x1c072c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1c072cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0730: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c0730u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0734: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1c0734u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0738: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1c0738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c073c: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C073Cu;
    {
        const bool branch_taken_0x1c073c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c073c) {
            ctx->pc = 0x1C0764u;
            goto label_1c0764;
        }
    }
    ctx->pc = 0x1C0744u;
    // 0x1c0744: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1c0744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c0748: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c0748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c074c: 0x8c42be74  lw          $v0, -0x418C($v0)
    ctx->pc = 0x1c074cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE74u));
    // 0x1c0750: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1c0750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c0754: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0754u;
    {
        const bool branch_taken_0x1c0754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0754) {
            ctx->pc = 0x1C0764u;
            goto label_1c0764;
        }
    }
    ctx->pc = 0x1C075Cu;
    // 0x1c075c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0760: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x1c0760u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c0764:
    // 0x1c0764: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x1C0764u;
    {
        const bool branch_taken_0x1c0764 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0764) {
            ctx->pc = 0x1C07A4u;
            goto label_1c07a4;
        }
    }
    ctx->pc = 0x1C076Cu;
    // 0x1c076c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c076cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0770: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1c0770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c0774: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0774u;
    {
        const bool branch_taken_0x1c0774 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c0774) {
            ctx->pc = 0x1C0794u;
            goto label_1c0794;
        }
    }
    ctx->pc = 0x1C077Cu;
    // 0x1c077c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1c077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c0780: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1c0780u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c0784: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0784u;
    {
        const bool branch_taken_0x1c0784 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0784) {
            ctx->pc = 0x1C0794u;
            goto label_1c0794;
        }
    }
    ctx->pc = 0x1C078Cu;
    // 0x1c078c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0790: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1c0790u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c0794:
    // 0x1c0794: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0794u;
    {
        const bool branch_taken_0x1c0794 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0794) {
            ctx->pc = 0x1C07A4u;
            goto label_1c07a4;
        }
    }
    ctx->pc = 0x1C079Cu;
    // 0x1c079c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c07a0: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1c07a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c07a4:
    // 0x1c07a4: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x1C07A4u;
    {
        const bool branch_taken_0x1c07a4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c07a4) {
            ctx->pc = 0x1C07E4u;
            goto label_1c07e4;
        }
    }
    ctx->pc = 0x1C07ACu;
    // 0x1c07ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c07acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07b0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1c07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c07b4: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C07B4u;
    {
        const bool branch_taken_0x1c07b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c07b4) {
            ctx->pc = 0x1C07D4u;
            goto label_1c07d4;
        }
    }
    ctx->pc = 0x1C07BCu;
    // 0x1c07bc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1c07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c07c0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1c07c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c07c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C07C4u;
    {
        const bool branch_taken_0x1c07c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c07c4) {
            ctx->pc = 0x1C07D4u;
            goto label_1c07d4;
        }
    }
    ctx->pc = 0x1C07CCu;
    // 0x1c07cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c07d0: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1c07d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c07d4:
    // 0x1c07d4: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C07D4u;
    {
        const bool branch_taken_0x1c07d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c07d4) {
            ctx->pc = 0x1C07E4u;
            goto label_1c07e4;
        }
    }
    ctx->pc = 0x1C07DCu;
    // 0x1c07dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c07e0: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x1c07e0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c07e4:
    // 0x1c07e4: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C07E4u;
    {
        const bool branch_taken_0x1c07e4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c07e4) {
            ctx->pc = 0x1C07FCu;
            goto label_1c07fc;
        }
    }
    ctx->pc = 0x1C07ECu;
    // 0x1c07ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c07f0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1c07f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c07f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C07F4u;
    {
        const bool branch_taken_0x1c07f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c07f4) {
            ctx->pc = 0x1C0800u;
            goto label_1c0800;
        }
    }
    ctx->pc = 0x1C07FCu;
label_1c07fc:
    // 0x1c07fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c07fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0800:
    // 0x1c0800: 0xa3b300af  sb          $s3, 0xAF($sp)
    ctx->pc = 0x1c0800u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 19));
    // 0x1c0804: 0x93a200af  lbu         $v0, 0xAF($sp)
    ctx->pc = 0x1c0804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x1c0808: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0808u;
    {
        const bool branch_taken_0x1c0808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0808) {
            ctx->pc = 0x1C081Cu;
            goto label_1c081c;
        }
    }
    ctx->pc = 0x1C0810u;
    // 0x1c0810: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0814: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C0814u;
    {
        const bool branch_taken_0x1c0814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0814) {
            ctx->pc = 0x1C08C4u;
            goto label_1c08c4;
        }
    }
    ctx->pc = 0x1C081Cu;
label_1c081c:
    // 0x1c081c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c081cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0820: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c0820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0824: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0828: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1c0828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c082c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1c082cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c0830: 0xc06f2a4  jal         func_1BCA90
    ctx->pc = 0x1C0830u;
    SET_GPR_U32(ctx, 31, 0x1C0838u);
    ctx->pc = 0x1BCA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA90u, 0x1C0830u, 0x1C0838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0838u;
label_1c0838:
    // 0x1c0838: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1c0838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1c083c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C083Cu;
    {
        const bool branch_taken_0x1c083c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c083c) {
            ctx->pc = 0x1C08B4u;
            goto label_1c08b4;
        }
    }
    ctx->pc = 0x1C0844u;
label_1c0844:
    // 0x1c0844: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0848: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C0848u;
    {
        const bool branch_taken_0x1c0848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0848) {
            ctx->pc = 0x1C08A4u;
            goto label_1c08a4;
        }
    }
    ctx->pc = 0x1C0850u;
label_1c0850:
    // 0x1c0850: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1c0850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c0854: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1c0854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1c0858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c085c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c0860: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c0860u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0864: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1c0864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c0868: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1c0868u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1c086c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0870: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0870u;
    {
        const bool branch_taken_0x1c0870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0870) {
            ctx->pc = 0x1C08A0u;
            goto label_1c08a0;
        }
    }
    ctx->pc = 0x1C0878u;
    // 0x1c0878: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1c0878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c087c: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C087Cu;
    {
        const bool branch_taken_0x1c087c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c087c) {
            ctx->pc = 0x1C089Cu;
            goto label_1c089c;
        }
    }
    ctx->pc = 0x1C0884u;
    // 0x1c0884: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1c0884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c0888: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0888u;
    {
        const bool branch_taken_0x1c0888 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0888) {
            ctx->pc = 0x1C089Cu;
            goto label_1c089c;
        }
    }
    ctx->pc = 0x1C0890u;
    // 0x1c0890: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c0890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0894: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C0894u;
    {
        const bool branch_taken_0x1c0894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0894) {
            ctx->pc = 0x1C08C4u;
            goto label_1c08c4;
        }
    }
    ctx->pc = 0x1C089Cu;
label_1c089c:
    // 0x1c089c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c089cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c08a0:
    // 0x1c08a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c08a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c08a4:
    // 0x1c08a4: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1c08a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c08a8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C08A8u;
    {
        const bool branch_taken_0x1c08a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c08a8) {
            ctx->pc = 0x1C0850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0850;
        }
    }
    ctx->pc = 0x1C08B0u;
    // 0x1c08b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c08b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c08b4:
    // 0x1c08b4: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1c08b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c08b8: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C08B8u;
    {
        const bool branch_taken_0x1c08b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c08b8) {
            ctx->pc = 0x1C0844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0844;
        }
    }
    ctx->pc = 0x1C08C0u;
    // 0x1c08c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c08c4:
    // 0x1c08c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c08c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c08c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1c08c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c08cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c08ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c08d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c08d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c08d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c08d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c08d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c08d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c08dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c08dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c08e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c08e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c08e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c08e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c08e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c08e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c08ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x1c08ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c08f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C08F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C08F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C08F8u;
    // 0x1c08f8: 0x0  nop
    ctx->pc = 0x1c08f8u;
    // NOP
    // 0x1c08fc: 0x0  nop
    ctx->pc = 0x1c08fcu;
    // NOP
    ctx->pc = 0x1c0900u;
}
