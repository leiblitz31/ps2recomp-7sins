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

// Function: sub_00220810
// Address: 0x220810 - 0x220e60
void sub_00220810_0x220810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220810_0x220810");
#endif

    switch (ctx->pc) {
        case 0x220860u: goto label_220860;
        case 0x22087cu: goto label_22087c;
        case 0x22088cu: goto label_22088c;
        case 0x2208a4u: goto label_2208a4;
        case 0x2208b8u: goto label_2208b8;
        case 0x2208d0u: goto label_2208d0;
        case 0x220900u: goto label_220900;
        case 0x22091cu: goto label_22091c;
        case 0x220930u: goto label_220930;
        case 0x220948u: goto label_220948;
        case 0x220968u: goto label_220968;
        case 0x220980u: goto label_220980;
        case 0x22098cu: goto label_22098c;
        case 0x2209c8u: goto label_2209c8;
        case 0x2209e4u: goto label_2209e4;
        case 0x2209f4u: goto label_2209f4;
        case 0x220a0cu: goto label_220a0c;
        case 0x220a24u: goto label_220a24;
        case 0x220a58u: goto label_220a58;
        case 0x220a84u: goto label_220a84;
        case 0x220aa4u: goto label_220aa4;
        case 0x220ab4u: goto label_220ab4;
        case 0x220ae0u: goto label_220ae0;
        case 0x220aecu: goto label_220aec;
        case 0x220b00u: goto label_220b00;
        case 0x220b18u: goto label_220b18;
        case 0x220b2cu: goto label_220b2c;
        case 0x220b50u: goto label_220b50;
        case 0x220b70u: goto label_220b70;
        case 0x220b80u: goto label_220b80;
        case 0x220b98u: goto label_220b98;
        case 0x220ba4u: goto label_220ba4;
        case 0x220bb4u: goto label_220bb4;
        case 0x220bc8u: goto label_220bc8;
        case 0x220be0u: goto label_220be0;
        case 0x220bf8u: goto label_220bf8;
        case 0x220c0cu: goto label_220c0c;
        case 0x220c24u: goto label_220c24;
        case 0x220c38u: goto label_220c38;
        case 0x220c64u: goto label_220c64;
        case 0x220c98u: goto label_220c98;
        case 0x220cb4u: goto label_220cb4;
        case 0x220cc0u: goto label_220cc0;
        case 0x220ce4u: goto label_220ce4;
        case 0x220cf8u: goto label_220cf8;
        case 0x220d10u: goto label_220d10;
        case 0x220d48u: goto label_220d48;
        case 0x220d58u: goto label_220d58;
        case 0x220d70u: goto label_220d70;
        case 0x220d88u: goto label_220d88;
        case 0x220dbcu: goto label_220dbc;
        case 0x220de8u: goto label_220de8;
        case 0x220e14u: goto label_220e14;
        case 0x220e30u: goto label_220e30;
        case 0x220e40u: goto label_220e40;
        default: break;
    }

    ctx->pc = 0x220810u;

    // 0x220810: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x220810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x220814: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x220814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x220818: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x220818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22081c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22081cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x220820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x220820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x220824: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x220824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x220828: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x220828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x22082c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x22082cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x220830: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x220830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x220834: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x220834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x220838: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x220838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22083c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220840: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x220840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220844: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x220844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220848: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x220848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22084c: 0x1462009b  bne         $v1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x22084Cu;
    {
        const bool branch_taken_0x22084c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22084c) {
            ctx->pc = 0x220ABCu;
            goto label_220abc;
        }
    }
    ctx->pc = 0x220854u;
    // 0x220854: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x220854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220858: 0xc0883c8  jal         func_220F20
    ctx->pc = 0x220858u;
    SET_GPR_U32(ctx, 31, 0x220860u);
    ctx->pc = 0x220F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F20u, 0x220858u, 0x220860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220860u;
label_220860:
    // 0x220860: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x220860u;
    {
        const bool branch_taken_0x220860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220860) {
            ctx->pc = 0x220894u;
            goto label_220894;
        }
    }
    ctx->pc = 0x220868u;
    // 0x220868: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x220868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x22086c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22086cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220870: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x220870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220874: 0xc0883d0  jal         func_220F40
    ctx->pc = 0x220874u;
    SET_GPR_U32(ctx, 31, 0x22087Cu);
    ctx->pc = 0x220F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F40u, 0x220874u, 0x22087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22087Cu;
label_22087c:
    // 0x22087c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22087cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220880: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x220880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x220884: 0xc0862ec  jal         func_218BB0
    ctx->pc = 0x220884u;
    SET_GPR_U32(ctx, 31, 0x22088Cu);
    ctx->pc = 0x218BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB0u, 0x220884u, 0x22088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22088Cu;
label_22088c:
    // 0x22088c: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x22088Cu;
    {
        const bool branch_taken_0x22088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22088c) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x220894u;
label_220894:
    // 0x220894: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x220894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x220898: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x220898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22089c: 0xc08639c  jal         func_218E70
    ctx->pc = 0x22089Cu;
    SET_GPR_U32(ctx, 31, 0x2208A4u);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x22089Cu, 0x2208A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208A4u;
label_2208a4:
    // 0x2208a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2208a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2208a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2208ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2208acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2208b0: 0xc0883b8  jal         func_220EE0
    ctx->pc = 0x2208B0u;
    SET_GPR_U32(ctx, 31, 0x2208B8u);
    ctx->pc = 0x220EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EE0u, 0x2208B0u, 0x2208B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208B8u;
label_2208b8:
    // 0x2208b8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2208b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2208bc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2208bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2208c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2208c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2208c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208c8: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x2208C8u;
    SET_GPR_U32(ctx, 31, 0x2208D0u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x2208C8u, 0x2208D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208D0u;
label_2208d0:
    // 0x2208d0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2208D0u;
    {
        const bool branch_taken_0x2208d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2208d0) {
            ctx->pc = 0x22090Cu;
            goto label_22090c;
        }
    }
    ctx->pc = 0x2208D8u;
    // 0x2208d8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2208d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2208dc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2208dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2208e0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2208e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2208e4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2208e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2208e8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2208e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2208ec: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2208ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2208f0: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x2208f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2208f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2208f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208f8: 0xc088468  jal         func_2211A0
    ctx->pc = 0x2208F8u;
    SET_GPR_U32(ctx, 31, 0x220900u);
    ctx->pc = 0x2211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2211A0u, 0x2208F8u, 0x220900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220900u;
label_220900:
    // 0x220900: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x220900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220904: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x220904u;
    {
        const bool branch_taken_0x220904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220904) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x22090Cu;
label_22090c:
    // 0x22090c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220910: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x220910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220914: 0xc0883b8  jal         func_220EE0
    ctx->pc = 0x220914u;
    SET_GPR_U32(ctx, 31, 0x22091Cu);
    ctx->pc = 0x220EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EE0u, 0x220914u, 0x22091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22091Cu;
label_22091c:
    // 0x22091c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22091cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220920: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x220920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x220924: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x220924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220928: 0xc08639c  jal         func_218E70
    ctx->pc = 0x220928u;
    SET_GPR_U32(ctx, 31, 0x220930u);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x220928u, 0x220930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220930u;
label_220930:
    // 0x220930: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x220930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220934: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x220934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x220938: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x220938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22093c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22093cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220940: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x220940u;
    SET_GPR_U32(ctx, 31, 0x220948u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x220940u, 0x220948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220948u;
label_220948:
    // 0x220948: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x220948u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22094c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x22094cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x220950: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220950u;
    {
        const bool branch_taken_0x220950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220950) {
            ctx->pc = 0x220970u;
            goto label_220970;
        }
    }
    ctx->pc = 0x220958u;
    // 0x220958: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x220958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22095c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22095cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220960: 0xc0862ec  jal         func_218BB0
    ctx->pc = 0x220960u;
    SET_GPR_U32(ctx, 31, 0x220968u);
    ctx->pc = 0x218BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB0u, 0x220960u, 0x220968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220968u;
label_220968:
    // 0x220968: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x220968u;
    {
        const bool branch_taken_0x220968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220968) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x220970u;
label_220970:
    // 0x220970: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x220970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x220974: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x220974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220978: 0xc0862ec  jal         func_218BB0
    ctx->pc = 0x220978u;
    SET_GPR_U32(ctx, 31, 0x220980u);
    ctx->pc = 0x218BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB0u, 0x220978u, 0x220980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220980u;
label_220980:
    // 0x220980: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x220980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x220984: 0xc0861e4  jal         func_218790
    ctx->pc = 0x220984u;
    SET_GPR_U32(ctx, 31, 0x22098Cu);
    ctx->pc = 0x218790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218790u, 0x220984u, 0x22098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22098Cu;
label_22098c:
    // 0x22098c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x22098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x220990: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x220990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220994: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x220994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220998: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x220998u;
    {
        const bool branch_taken_0x220998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x220998) {
            ctx->pc = 0x2209D4u;
            goto label_2209d4;
        }
    }
    ctx->pc = 0x2209A0u;
    // 0x2209a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2209a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2209a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2209a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2209a8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2209a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2209ac: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2209acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2209b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2209b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209b4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2209b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2209b8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x2209b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2209bc: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2209bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2209c0: 0xc088468  jal         func_2211A0
    ctx->pc = 0x2209C0u;
    SET_GPR_U32(ctx, 31, 0x2209C8u);
    ctx->pc = 0x2211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2211A0u, 0x2209C0u, 0x2209C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209C8u;
label_2209c8:
    // 0x2209c8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2209c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2209cc: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x2209CCu;
    {
        const bool branch_taken_0x2209cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2209cc) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x2209D4u;
label_2209d4:
    // 0x2209d4: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x2209d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2209d8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2209d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2209dc: 0xc08639c  jal         func_218E70
    ctx->pc = 0x2209DCu;
    SET_GPR_U32(ctx, 31, 0x2209E4u);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x2209DCu, 0x2209E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209E4u;
label_2209e4:
    // 0x2209e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2209e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209e8: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2209e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2209ec: 0xc0883b8  jal         func_220EE0
    ctx->pc = 0x2209ECu;
    SET_GPR_U32(ctx, 31, 0x2209F4u);
    ctx->pc = 0x220EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EE0u, 0x2209ECu, 0x2209F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209F4u;
label_2209f4:
    // 0x2209f4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2209f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2209f8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2209f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2209fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2209fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x220a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a04: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x220A04u;
    SET_GPR_U32(ctx, 31, 0x220A0Cu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x220A04u, 0x220A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A0Cu;
label_220a0c:
    // 0x220a0c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x220A0Cu;
    {
        const bool branch_taken_0x220a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a0c) {
            ctx->pc = 0x220A90u;
            goto label_220a90;
        }
    }
    ctx->pc = 0x220A14u;
    // 0x220a14: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x220a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220a18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x220a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220a1c: 0xc0883b0  jal         func_220EC0
    ctx->pc = 0x220A1Cu;
    SET_GPR_U32(ctx, 31, 0x220A24u);
    ctx->pc = 0x220EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EC0u, 0x220A1Cu, 0x220A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A24u;
label_220a24:
    // 0x220a24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x220a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220a28: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x220A28u;
    {
        const bool branch_taken_0x220a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220a28) {
            ctx->pc = 0x220A64u;
            goto label_220a64;
        }
    }
    ctx->pc = 0x220A30u;
    // 0x220a30: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x220a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220a34: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x220a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220a38: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x220a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220a3c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x220a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220a40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a44: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x220a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220a48: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x220a48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220a4c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x220a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220a50: 0xc088468  jal         func_2211A0
    ctx->pc = 0x220A50u;
    SET_GPR_U32(ctx, 31, 0x220A58u);
    ctx->pc = 0x2211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2211A0u, 0x220A50u, 0x220A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A58u;
label_220a58:
    // 0x220a58: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x220a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220a5c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x220A5Cu;
    {
        const bool branch_taken_0x220a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a5c) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x220A64u;
label_220a64:
    // 0x220a64: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x220a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220a68: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x220a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220a6c: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x220a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x220a70: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x220a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x220a74: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x220a74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220a78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220a78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a7c: 0xc088468  jal         func_2211A0
    ctx->pc = 0x220A7Cu;
    SET_GPR_U32(ctx, 31, 0x220A84u);
    ctx->pc = 0x2211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2211A0u, 0x220A7Cu, 0x220A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A84u;
label_220a84:
    // 0x220a84: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x220a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220a88: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x220A88u;
    {
        const bool branch_taken_0x220a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a88) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x220A90u;
label_220a90:
    // 0x220a90: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x220a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x220a94: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x220a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220a98: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x220a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220a9c: 0xc0883d0  jal         func_220F40
    ctx->pc = 0x220A9Cu;
    SET_GPR_U32(ctx, 31, 0x220AA4u);
    ctx->pc = 0x220F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F40u, 0x220A9Cu, 0x220AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AA4u;
label_220aa4:
    // 0x220aa4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x220aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220aa8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x220aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x220aac: 0xc0862ec  jal         func_218BB0
    ctx->pc = 0x220AACu;
    SET_GPR_U32(ctx, 31, 0x220AB4u);
    ctx->pc = 0x218BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB0u, 0x220AACu, 0x220AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AB4u;
label_220ab4:
    // 0x220ab4: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x220AB4u;
    {
        const bool branch_taken_0x220ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220ab4) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x220ABCu;
label_220abc:
    // 0x220abc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x220abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220ac0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x220ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220ac4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x220ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220ac8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x220ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220acc: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x220ACCu;
    {
        const bool branch_taken_0x220acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x220acc) {
            ctx->pc = 0x220B88u;
            goto label_220b88;
        }
    }
    ctx->pc = 0x220AD4u;
    // 0x220ad4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x220ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220ad8: 0xc0883a8  jal         func_220EA0
    ctx->pc = 0x220AD8u;
    SET_GPR_U32(ctx, 31, 0x220AE0u);
    ctx->pc = 0x220EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EA0u, 0x220AD8u, 0x220AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AE0u;
label_220ae0:
    // 0x220ae0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x220ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220ae4: 0xc08638c  jal         func_218E30
    ctx->pc = 0x220AE4u;
    SET_GPR_U32(ctx, 31, 0x220AECu);
    ctx->pc = 0x218E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E30u, 0x220AE4u, 0x220AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AECu;
label_220aec:
    // 0x220aec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x220aecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220af0: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x220af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x220af4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x220af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220af8: 0xc08639c  jal         func_218E70
    ctx->pc = 0x220AF8u;
    SET_GPR_U32(ctx, 31, 0x220B00u);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x220AF8u, 0x220B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B00u;
label_220b00:
    // 0x220b00: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x220b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220b04: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x220b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x220b08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x220b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x220b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b10: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x220B10u;
    SET_GPR_U32(ctx, 31, 0x220B18u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x220B10u, 0x220B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B18u;
label_220b18:
    // 0x220b18: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x220B18u;
    {
        const bool branch_taken_0x220b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220b18) {
            ctx->pc = 0x220B5Cu;
            goto label_220b5c;
        }
    }
    ctx->pc = 0x220B20u;
    // 0x220b20: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x220b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220b24: 0xc0883a8  jal         func_220EA0
    ctx->pc = 0x220B24u;
    SET_GPR_U32(ctx, 31, 0x220B2Cu);
    ctx->pc = 0x220EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EA0u, 0x220B24u, 0x220B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B2Cu;
label_220b2c:
    // 0x220b2c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x220b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220b30: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x220b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220b34: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x220b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220b38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b3c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x220b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220b40: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x220b40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220b44: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x220b44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220b48: 0xc088468  jal         func_2211A0
    ctx->pc = 0x220B48u;
    SET_GPR_U32(ctx, 31, 0x220B50u);
    ctx->pc = 0x2211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2211A0u, 0x220B48u, 0x220B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B50u;
label_220b50:
    // 0x220b50: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x220b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220b54: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x220B54u;
    {
        const bool branch_taken_0x220b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220b54) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x220B5Cu;
label_220b5c:
    // 0x220b5c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x220b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x220b60: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x220b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220b64: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x220b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220b68: 0xc0883d0  jal         func_220F40
    ctx->pc = 0x220B68u;
    SET_GPR_U32(ctx, 31, 0x220B70u);
    ctx->pc = 0x220F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F40u, 0x220B68u, 0x220B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B70u;
label_220b70:
    // 0x220b70: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x220b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220b74: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x220b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x220b78: 0xc0862ec  jal         func_218BB0
    ctx->pc = 0x220B78u;
    SET_GPR_U32(ctx, 31, 0x220B80u);
    ctx->pc = 0x218BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB0u, 0x220B78u, 0x220B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B80u;
label_220b80:
    // 0x220b80: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x220B80u;
    {
        const bool branch_taken_0x220b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220b80) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x220B88u;
label_220b88:
    // 0x220b88: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x220b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x220b8c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x220b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220b90: 0xc0862ec  jal         func_218BB0
    ctx->pc = 0x220B90u;
    SET_GPR_U32(ctx, 31, 0x220B98u);
    ctx->pc = 0x218BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB0u, 0x220B90u, 0x220B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B98u;
label_220b98:
    // 0x220b98: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x220b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x220b9c: 0xc088398  jal         func_220E60
    ctx->pc = 0x220B9Cu;
    SET_GPR_U32(ctx, 31, 0x220BA4u);
    ctx->pc = 0x220E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220E60u, 0x220B9Cu, 0x220BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BA4u;
label_220ba4:
    // 0x220ba4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x220ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x220ba8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x220ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220bac: 0xc08639c  jal         func_218E70
    ctx->pc = 0x220BACu;
    SET_GPR_U32(ctx, 31, 0x220BB4u);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x220BACu, 0x220BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BB4u;
label_220bb4:
    // 0x220bb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x220bb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220bb8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x220bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220bbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x220bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220bc0: 0xc0883b8  jal         func_220EE0
    ctx->pc = 0x220BC0u;
    SET_GPR_U32(ctx, 31, 0x220BC8u);
    ctx->pc = 0x220EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EE0u, 0x220BC0u, 0x220BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BC8u;
label_220bc8:
    // 0x220bc8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x220bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220bcc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x220bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x220bd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x220bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220bd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x220bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220bd8: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x220BD8u;
    SET_GPR_U32(ctx, 31, 0x220BE0u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x220BD8u, 0x220BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BE0u;
label_220be0:
    // 0x220be0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x220be0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220be4: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x220BE4u;
    {
        const bool branch_taken_0x220be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x220be4) {
            ctx->pc = 0x220CA4u;
            goto label_220ca4;
        }
    }
    ctx->pc = 0x220BECu;
    // 0x220bec: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x220becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x220bf0: 0xc0883b8  jal         func_220EE0
    ctx->pc = 0x220BF0u;
    SET_GPR_U32(ctx, 31, 0x220BF8u);
    ctx->pc = 0x220EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EE0u, 0x220BF0u, 0x220BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BF8u;
label_220bf8:
    // 0x220bf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x220bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220bfc: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x220bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x220c00: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x220c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220c04: 0xc08639c  jal         func_218E70
    ctx->pc = 0x220C04u;
    SET_GPR_U32(ctx, 31, 0x220C0Cu);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x220C04u, 0x220C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C0Cu;
label_220c0c:
    // 0x220c0c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x220c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220c10: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x220c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x220c14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x220c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x220c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c1c: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x220C1Cu;
    SET_GPR_U32(ctx, 31, 0x220C24u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x220C1Cu, 0x220C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C24u;
label_220c24:
    // 0x220c24: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x220C24u;
    {
        const bool branch_taken_0x220c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220c24) {
            ctx->pc = 0x220CA4u;
            goto label_220ca4;
        }
    }
    ctx->pc = 0x220C2Cu;
    // 0x220c2c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x220c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x220c30: 0xc0883b0  jal         func_220EC0
    ctx->pc = 0x220C30u;
    SET_GPR_U32(ctx, 31, 0x220C38u);
    ctx->pc = 0x220EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EC0u, 0x220C30u, 0x220C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C38u;
label_220c38:
    // 0x220c38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x220c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220c3c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x220C3Cu;
    {
        const bool branch_taken_0x220c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220c3c) {
            ctx->pc = 0x220C70u;
            goto label_220c70;
        }
    }
    ctx->pc = 0x220C44u;
    // 0x220c44: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x220c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220c48: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x220c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c50: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x220c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x220c54: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x220c54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220c58: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x220c58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x220c5c: 0xc088468  jal         func_2211A0
    ctx->pc = 0x220C5Cu;
    SET_GPR_U32(ctx, 31, 0x220C64u);
    ctx->pc = 0x2211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2211A0u, 0x220C5Cu, 0x220C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C64u;
label_220c64:
    // 0x220c64: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x220c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220c68: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x220C68u;
    {
        const bool branch_taken_0x220c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220c68) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x220C70u;
label_220c70:
    // 0x220c70: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x220c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220c74: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x220c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220c78: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x220c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220c7c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x220c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220c80: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x220c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220c84: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x220c84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220c88: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x220c88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220c8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220c8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c90: 0xc088468  jal         func_2211A0
    ctx->pc = 0x220C90u;
    SET_GPR_U32(ctx, 31, 0x220C98u);
    ctx->pc = 0x2211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2211A0u, 0x220C90u, 0x220C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C98u;
label_220c98:
    // 0x220c98: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x220c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220c9c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x220C9Cu;
    {
        const bool branch_taken_0x220c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220c9c) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x220CA4u;
label_220ca4:
    // 0x220ca4: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x220ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x220ca8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x220ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220cac: 0xc0862ec  jal         func_218BB0
    ctx->pc = 0x220CACu;
    SET_GPR_U32(ctx, 31, 0x220CB4u);
    ctx->pc = 0x218BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB0u, 0x220CACu, 0x220CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CB4u;
label_220cb4:
    // 0x220cb4: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x220cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x220cb8: 0xc0861e4  jal         func_218790
    ctx->pc = 0x220CB8u;
    SET_GPR_U32(ctx, 31, 0x220CC0u);
    ctx->pc = 0x218790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218790u, 0x220CB8u, 0x220CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CC0u;
label_220cc0:
    // 0x220cc0: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x220cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x220cc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x220cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x220cc8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x220cc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220ccc: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x220CCCu;
    {
        const bool branch_taken_0x220ccc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x220ccc) {
            ctx->pc = 0x220D14u;
            goto label_220d14;
        }
    }
    ctx->pc = 0x220CD4u;
    // 0x220cd4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x220cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220cd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x220cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220cdc: 0xc0883b8  jal         func_220EE0
    ctx->pc = 0x220CDCu;
    SET_GPR_U32(ctx, 31, 0x220CE4u);
    ctx->pc = 0x220EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EE0u, 0x220CDCu, 0x220CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CE4u;
label_220ce4:
    // 0x220ce4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x220ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ce8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x220ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x220cec: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x220cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220cf0: 0xc08639c  jal         func_218E70
    ctx->pc = 0x220CF0u;
    SET_GPR_U32(ctx, 31, 0x220CF8u);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x220CF0u, 0x220CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CF8u;
label_220cf8:
    // 0x220cf8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x220cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220cfc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x220cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x220d00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x220d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x220d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d08: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x220D08u;
    SET_GPR_U32(ctx, 31, 0x220D10u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x220D08u, 0x220D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D10u;
label_220d10:
    // 0x220d10: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x220d10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_220d14:
    // 0x220d14: 0x16000037  bnez        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x220D14u;
    {
        const bool branch_taken_0x220d14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x220d14) {
            ctx->pc = 0x220DF4u;
            goto label_220df4;
        }
    }
    ctx->pc = 0x220D1Cu;
    // 0x220d1c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x220D1Cu;
    {
        const bool branch_taken_0x220d1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x220d1c) {
            ctx->pc = 0x220DF4u;
            goto label_220df4;
        }
    }
    ctx->pc = 0x220D24u;
    // 0x220d24: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x220d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x220d28: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x220d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220d2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x220d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220d30: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x220D30u;
    {
        const bool branch_taken_0x220d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x220d30) {
            ctx->pc = 0x220D78u;
            goto label_220d78;
        }
    }
    ctx->pc = 0x220D38u;
    // 0x220d38: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x220d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x220d3c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x220d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220d40: 0xc08639c  jal         func_218E70
    ctx->pc = 0x220D40u;
    SET_GPR_U32(ctx, 31, 0x220D48u);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x220D40u, 0x220D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D48u;
label_220d48:
    // 0x220d48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x220d48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d4c: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x220d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x220d50: 0xc0883b8  jal         func_220EE0
    ctx->pc = 0x220D50u;
    SET_GPR_U32(ctx, 31, 0x220D58u);
    ctx->pc = 0x220EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EE0u, 0x220D50u, 0x220D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D58u;
label_220d58:
    // 0x220d58: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x220d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220d5c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x220d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x220d60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x220d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x220d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d68: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x220D68u;
    SET_GPR_U32(ctx, 31, 0x220D70u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x220D68u, 0x220D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D70u;
label_220d70:
    // 0x220d70: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x220D70u;
    {
        const bool branch_taken_0x220d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220d70) {
            ctx->pc = 0x220DF4u;
            goto label_220df4;
        }
    }
    ctx->pc = 0x220D78u;
label_220d78:
    // 0x220d78: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x220d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220d7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x220d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220d80: 0xc0883b0  jal         func_220EC0
    ctx->pc = 0x220D80u;
    SET_GPR_U32(ctx, 31, 0x220D88u);
    ctx->pc = 0x220EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EC0u, 0x220D80u, 0x220D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D88u;
label_220d88:
    // 0x220d88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x220d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220d8c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x220D8Cu;
    {
        const bool branch_taken_0x220d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220d8c) {
            ctx->pc = 0x220DC8u;
            goto label_220dc8;
        }
    }
    ctx->pc = 0x220D94u;
    // 0x220d94: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x220d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220d98: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x220d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220d9c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x220d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220da0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x220da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220da8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x220da8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220dac: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x220dacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220db0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x220db0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220db4: 0xc088468  jal         func_2211A0
    ctx->pc = 0x220DB4u;
    SET_GPR_U32(ctx, 31, 0x220DBCu);
    ctx->pc = 0x2211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2211A0u, 0x220DB4u, 0x220DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DBCu;
label_220dbc:
    // 0x220dbc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x220dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220dc0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x220DC0u;
    {
        const bool branch_taken_0x220dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220dc0) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x220DC8u;
label_220dc8:
    // 0x220dc8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x220dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220dcc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x220dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220dd0: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x220dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x220dd4: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x220dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x220dd8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x220dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220ddc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x220ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220de0: 0xc088468  jal         func_2211A0
    ctx->pc = 0x220DE0u;
    SET_GPR_U32(ctx, 31, 0x220DE8u);
    ctx->pc = 0x2211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2211A0u, 0x220DE0u, 0x220DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DE8u;
label_220de8:
    // 0x220de8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x220de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220dec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x220DECu;
    {
        const bool branch_taken_0x220dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220dec) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x220DF4u;
label_220df4:
    // 0x220df4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x220df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x220df8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x220df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x220dfc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220DFCu;
    {
        const bool branch_taken_0x220dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x220dfc) {
            ctx->pc = 0x220E1Cu;
            goto label_220e1c;
        }
    }
    ctx->pc = 0x220E04u;
    // 0x220e04: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x220e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220e08: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x220e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x220e0c: 0xc0862ec  jal         func_218BB0
    ctx->pc = 0x220E0Cu;
    SET_GPR_U32(ctx, 31, 0x220E14u);
    ctx->pc = 0x218BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB0u, 0x220E0Cu, 0x220E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E14u;
label_220e14:
    // 0x220e14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x220E14u;
    {
        const bool branch_taken_0x220e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220e14) {
            ctx->pc = 0x220E40u;
            goto label_220e40;
        }
    }
    ctx->pc = 0x220E1Cu;
label_220e1c:
    // 0x220e1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x220e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x220e20: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x220e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x220e24: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x220e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x220e28: 0xc0883d0  jal         func_220F40
    ctx->pc = 0x220E28u;
    SET_GPR_U32(ctx, 31, 0x220E30u);
    ctx->pc = 0x220F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F40u, 0x220E28u, 0x220E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E30u;
label_220e30:
    // 0x220e30: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x220e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220e34: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x220e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x220e38: 0xc0862ec  jal         func_218BB0
    ctx->pc = 0x220E38u;
    SET_GPR_U32(ctx, 31, 0x220E40u);
    ctx->pc = 0x218BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB0u, 0x220E38u, 0x220E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E40u;
label_220e40:
    // 0x220e40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x220e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220e44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x220e44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220e48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x220e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x220e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x220e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220e54: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x220e54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x220e58: 0x3e00008  jr          $ra
    ctx->pc = 0x220E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220E60u;
}
