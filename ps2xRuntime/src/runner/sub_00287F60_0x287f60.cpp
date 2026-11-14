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

// Function: sub_00287F60
// Address: 0x287f60 - 0x2882b0
void sub_00287F60_0x287f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287F60_0x287f60");
#endif

    switch (ctx->pc) {
        case 0x287fa4u: goto label_287fa4;
        case 0x287fb4u: goto label_287fb4;
        case 0x287fc8u: goto label_287fc8;
        case 0x287fe0u: goto label_287fe0;
        case 0x287fe8u: goto label_287fe8;
        case 0x287ff8u: goto label_287ff8;
        case 0x288008u: goto label_288008;
        case 0x288020u: goto label_288020;
        case 0x288030u: goto label_288030;
        case 0x288044u: goto label_288044;
        case 0x288054u: goto label_288054;
        case 0x28806cu: goto label_28806c;
        case 0x288088u: goto label_288088;
        case 0x28809cu: goto label_28809c;
        case 0x2880a8u: goto label_2880a8;
        case 0x2880b8u: goto label_2880b8;
        case 0x2880d0u: goto label_2880d0;
        case 0x2880dcu: goto label_2880dc;
        case 0x2880e8u: goto label_2880e8;
        case 0x288100u: goto label_288100;
        case 0x288110u: goto label_288110;
        case 0x288124u: goto label_288124;
        case 0x288134u: goto label_288134;
        case 0x288150u: goto label_288150;
        case 0x28815cu: goto label_28815c;
        case 0x288178u: goto label_288178;
        case 0x288190u: goto label_288190;
        case 0x28819cu: goto label_28819c;
        case 0x2881acu: goto label_2881ac;
        case 0x2881c4u: goto label_2881c4;
        case 0x2881d0u: goto label_2881d0;
        case 0x2881dcu: goto label_2881dc;
        case 0x2881f0u: goto label_2881f0;
        case 0x288204u: goto label_288204;
        case 0x288218u: goto label_288218;
        case 0x288228u: goto label_288228;
        case 0x288238u: goto label_288238;
        case 0x288248u: goto label_288248;
        case 0x288260u: goto label_288260;
        case 0x288270u: goto label_288270;
        default: break;
    }

    ctx->pc = 0x287f60u;

    // 0x287f60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x287f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x287f64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x287f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x287f68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x287f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x287f6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x287f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x287f70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x287f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x287f74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x287f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x287f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x287f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x287f7c: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x287f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x287f80: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x287f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x287f84: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x287f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x287f88: 0x100300bd  beq         $zero, $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x287F88u;
    {
        const bool branch_taken_0x287f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x287f88) {
            ctx->pc = 0x288280u;
            goto label_288280;
        }
    }
    ctx->pc = 0x287F90u;
    // 0x287f90: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x287f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x287f94: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x287f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x287f98: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x287f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x287f9c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x287F9Cu;
    SET_GPR_U32(ctx, 31, 0x287FA4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x287F9Cu, 0x287FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FA4u;
label_287fa4:
    // 0x287fa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x287fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fac: 0xc093728  jal         func_24DCA0
    ctx->pc = 0x287FACu;
    SET_GPR_U32(ctx, 31, 0x287FB4u);
    ctx->pc = 0x24DCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DCA0u, 0x287FACu, 0x287FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FB4u;
label_287fb4:
    // 0x287fb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x287fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fb8: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x287fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x287fbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x287fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fc0: 0xc064064  jal         func_190190
    ctx->pc = 0x287FC0u;
    SET_GPR_U32(ctx, 31, 0x287FC8u);
    ctx->pc = 0x190190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190190u, 0x287FC0u, 0x287FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FC8u;
label_287fc8:
    // 0x287fc8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x287fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x287fcc: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x287fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x287fd0: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x287fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x287fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fd8: 0xc0542d8  jal         func_150B60
    ctx->pc = 0x287FD8u;
    SET_GPR_U32(ctx, 31, 0x287FE0u);
    ctx->pc = 0x150B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B60u, 0x287FD8u, 0x287FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FE0u;
label_287fe0:
    // 0x287fe0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x287FE0u;
    {
        const bool branch_taken_0x287fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287fe0) {
            ctx->pc = 0x288228u;
            goto label_288228;
        }
    }
    ctx->pc = 0x287FE8u;
label_287fe8:
    // 0x287fe8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x287fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x287fec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x287fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ff0: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x287FF0u;
    SET_GPR_U32(ctx, 31, 0x287FF8u);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x287FF0u, 0x287FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FF8u;
label_287ff8:
    // 0x287ff8: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x287ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x287ffc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x287ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x288000: 0xc041998  jal         func_106660
    ctx->pc = 0x288000u;
    SET_GPR_U32(ctx, 31, 0x288008u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x288000u, 0x288008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288008u;
label_288008:
    // 0x288008: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x288008u;
    {
        const bool branch_taken_0x288008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288008) {
            ctx->pc = 0x2880F0u;
            goto label_2880f0;
        }
    }
    ctx->pc = 0x288010u;
    // 0x288010: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x288010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x288014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288018: 0xc054288  jal         func_150A20
    ctx->pc = 0x288018u;
    SET_GPR_U32(ctx, 31, 0x288020u);
    ctx->pc = 0x150A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A20u, 0x288018u, 0x288020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288020u;
label_288020:
    // 0x288020: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x288020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x288024: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x288024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x288028: 0xc041998  jal         func_106660
    ctx->pc = 0x288028u;
    SET_GPR_U32(ctx, 31, 0x288030u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x288028u, 0x288030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288030u;
label_288030:
    // 0x288030: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x288030u;
    {
        const bool branch_taken_0x288030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288030) {
            ctx->pc = 0x2880F0u;
            goto label_2880f0;
        }
    }
    ctx->pc = 0x288038u;
    // 0x288038: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x288038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x28803c: 0xc054648  jal         func_151920
    ctx->pc = 0x28803Cu;
    SET_GPR_U32(ctx, 31, 0x288044u);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x28803Cu, 0x288044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288044u;
label_288044:
    // 0x288044: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x288044u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288048: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x288048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x28804c: 0xc0542b4  jal         func_150AD0
    ctx->pc = 0x28804Cu;
    SET_GPR_U32(ctx, 31, 0x288054u);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x28804Cu, 0x288054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288054u;
label_288054:
    // 0x288054: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x288054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288058: 0x16820025  bne         $s4, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x288058u;
    {
        const bool branch_taken_0x288058 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x288058) {
            ctx->pc = 0x2880F0u;
            goto label_2880f0;
        }
    }
    ctx->pc = 0x288060u;
    // 0x288060: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x288060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x288064: 0xc054648  jal         func_151920
    ctx->pc = 0x288064u;
    SET_GPR_U32(ctx, 31, 0x28806Cu);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x288064u, 0x28806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28806Cu;
label_28806c:
    // 0x28806c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x28806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x288070: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x288070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x288074: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x288074u;
    {
        const bool branch_taken_0x288074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288074) {
            ctx->pc = 0x2880D0u;
            goto label_2880d0;
        }
    }
    ctx->pc = 0x28807Cu;
    // 0x28807c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x28807cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x288080: 0xc0542c0  jal         func_150B00
    ctx->pc = 0x288080u;
    SET_GPR_U32(ctx, 31, 0x288088u);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x288080u, 0x288088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288088u;
label_288088:
    // 0x288088: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x288088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28808c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x28808cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x288090: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x288090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288094: 0xc0a247c  jal         func_2891F0
    ctx->pc = 0x288094u;
    SET_GPR_U32(ctx, 31, 0x28809Cu);
    ctx->pc = 0x2891F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2891F0u, 0x288094u, 0x28809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28809Cu;
label_28809c:
    // 0x28809c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x28809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2880a0: 0xc0542c0  jal         func_150B00
    ctx->pc = 0x2880A0u;
    SET_GPR_U32(ctx, 31, 0x2880A8u);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x2880A0u, 0x2880A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2880A8u;
label_2880a8:
    // 0x2880a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2880a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880ac: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2880acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2880b0: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x2880B0u;
    SET_GPR_U32(ctx, 31, 0x2880B8u);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x2880B0u, 0x2880B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2880B8u;
label_2880b8:
    // 0x2880b8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2880b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2880bc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2880bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2880c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2880c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2880c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880c8: 0xc0a23c8  jal         func_288F20
    ctx->pc = 0x2880C8u;
    SET_GPR_U32(ctx, 31, 0x2880D0u);
    ctx->pc = 0x288F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F20u, 0x2880C8u, 0x2880D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2880D0u;
label_2880d0:
    // 0x2880d0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2880d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2880d4: 0xc064054  jal         func_190150
    ctx->pc = 0x2880D4u;
    SET_GPR_U32(ctx, 31, 0x2880DCu);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x2880D4u, 0x2880DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2880DCu;
label_2880dc:
    // 0x2880dc: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2880dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2880e0: 0xc054278  jal         func_1509E0
    ctx->pc = 0x2880E0u;
    SET_GPR_U32(ctx, 31, 0x2880E8u);
    ctx->pc = 0x1509E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509E0u, 0x2880E0u, 0x2880E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2880E8u;
label_2880e8:
    // 0x2880e8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2880E8u;
    {
        const bool branch_taken_0x2880e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2880e8) {
            ctx->pc = 0x288228u;
            goto label_288228;
        }
    }
    ctx->pc = 0x2880F0u;
label_2880f0:
    // 0x2880f0: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x2880f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2880f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2880f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880f8: 0xc054288  jal         func_150A20
    ctx->pc = 0x2880F8u;
    SET_GPR_U32(ctx, 31, 0x288100u);
    ctx->pc = 0x150A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A20u, 0x2880F8u, 0x288100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288100u;
label_288100:
    // 0x288100: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x288100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x288104: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x288104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x288108: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x288108u;
    SET_GPR_U32(ctx, 31, 0x288110u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x288108u, 0x288110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288110u;
label_288110:
    // 0x288110: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x288110u;
    {
        const bool branch_taken_0x288110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288110) {
            ctx->pc = 0x288144u;
            goto label_288144;
        }
    }
    ctx->pc = 0x288118u;
    // 0x288118: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x288118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x28811c: 0xc054648  jal         func_151920
    ctx->pc = 0x28811Cu;
    SET_GPR_U32(ctx, 31, 0x288124u);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x28811Cu, 0x288124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288124u;
label_288124:
    // 0x288124: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x288124u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288128: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x288128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x28812c: 0xc0542b4  jal         func_150AD0
    ctx->pc = 0x28812Cu;
    SET_GPR_U32(ctx, 31, 0x288134u);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x28812Cu, 0x288134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288134u;
label_288134:
    // 0x288134: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x288134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288138: 0x282082b  sltu        $at, $s4, $v0
    ctx->pc = 0x288138u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28813c: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x28813Cu;
    {
        const bool branch_taken_0x28813c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28813c) {
            ctx->pc = 0x2881E4u;
            goto label_2881e4;
        }
    }
    ctx->pc = 0x288144u;
label_288144:
    // 0x288144: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x288144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x288148: 0xc0a407c  jal         func_2901F0
    ctx->pc = 0x288148u;
    SET_GPR_U32(ctx, 31, 0x288150u);
    ctx->pc = 0x2901F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2901F0u, 0x288148u, 0x288150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288150u;
label_288150:
    // 0x288150: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x288150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x288154: 0xc054648  jal         func_151920
    ctx->pc = 0x288154u;
    SET_GPR_U32(ctx, 31, 0x28815Cu);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x288154u, 0x28815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28815Cu;
label_28815c:
    // 0x28815c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28815cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288160: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x288160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x288164: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x288164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x288168: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28816c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x28816cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x288170: 0xc0a2118  jal         func_288460
    ctx->pc = 0x288170u;
    SET_GPR_U32(ctx, 31, 0x288178u);
    ctx->pc = 0x288460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288460u, 0x288170u, 0x288178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288178u;
label_288178:
    // 0x288178: 0x93a2007c  lbu         $v0, 0x7C($sp)
    ctx->pc = 0x288178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x28817c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x28817cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x288180: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x288180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x288184: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x288184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x288188: 0xc0542c8  jal         func_150B20
    ctx->pc = 0x288188u;
    SET_GPR_U32(ctx, 31, 0x288190u);
    ctx->pc = 0x150B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B20u, 0x288188u, 0x288190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288190u;
label_288190:
    // 0x288190: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x288190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x288194: 0xc0542c0  jal         func_150B00
    ctx->pc = 0x288194u;
    SET_GPR_U32(ctx, 31, 0x28819Cu);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x288194u, 0x28819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28819Cu;
label_28819c:
    // 0x28819c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28819cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881a0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2881a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2881a4: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x2881A4u;
    SET_GPR_U32(ctx, 31, 0x2881ACu);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x2881A4u, 0x2881ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881ACu;
label_2881ac:
    // 0x2881ac: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2881acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2881b0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2881b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2881b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2881b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2881b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881bc: 0xc0a23c8  jal         func_288F20
    ctx->pc = 0x2881BCu;
    SET_GPR_U32(ctx, 31, 0x2881C4u);
    ctx->pc = 0x288F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F20u, 0x2881BCu, 0x2881C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881C4u;
label_2881c4:
    // 0x2881c4: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2881c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2881c8: 0xc064054  jal         func_190150
    ctx->pc = 0x2881C8u;
    SET_GPR_U32(ctx, 31, 0x2881D0u);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x2881C8u, 0x2881D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881D0u;
label_2881d0:
    // 0x2881d0: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2881d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2881d4: 0xc054278  jal         func_1509E0
    ctx->pc = 0x2881D4u;
    SET_GPR_U32(ctx, 31, 0x2881DCu);
    ctx->pc = 0x1509E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509E0u, 0x2881D4u, 0x2881DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881DCu;
label_2881dc:
    // 0x2881dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2881DCu;
    {
        const bool branch_taken_0x2881dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2881dc) {
            ctx->pc = 0x288228u;
            goto label_288228;
        }
    }
    ctx->pc = 0x2881E4u;
label_2881e4:
    // 0x2881e4: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2881e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2881e8: 0xc0542c0  jal         func_150B00
    ctx->pc = 0x2881E8u;
    SET_GPR_U32(ctx, 31, 0x2881F0u);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x2881E8u, 0x2881F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881F0u;
label_2881f0:
    // 0x2881f0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2881f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2881f4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2881f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2881f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2881f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881fc: 0xc0a247c  jal         func_2891F0
    ctx->pc = 0x2881FCu;
    SET_GPR_U32(ctx, 31, 0x288204u);
    ctx->pc = 0x2891F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2891F0u, 0x2881FCu, 0x288204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288204u;
label_288204:
    // 0x288204: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x288204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x288208: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x288208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x28820c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28820cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288210: 0xc0a20f4  jal         func_2883D0
    ctx->pc = 0x288210u;
    SET_GPR_U32(ctx, 31, 0x288218u);
    ctx->pc = 0x2883D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2883D0u, 0x288210u, 0x288218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288218u;
label_288218:
    // 0x288218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28821c: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x28821cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x288220: 0xc0a20ac  jal         func_2882B0
    ctx->pc = 0x288220u;
    SET_GPR_U32(ctx, 31, 0x288228u);
    ctx->pc = 0x2882B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2882B0u, 0x288220u, 0x288228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288228u;
label_288228:
    // 0x288228: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x288228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x28822c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28822cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288230: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x288230u;
    SET_GPR_U32(ctx, 31, 0x288238u);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x288230u, 0x288238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288238u;
label_288238:
    // 0x288238: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x288238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x28823c: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x28823cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x288240: 0xc041998  jal         func_106660
    ctx->pc = 0x288240u;
    SET_GPR_U32(ctx, 31, 0x288248u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x288240u, 0x288248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288248u;
label_288248:
    // 0x288248: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x288248u;
    {
        const bool branch_taken_0x288248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288248) {
            ctx->pc = 0x287FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287fe8;
        }
    }
    ctx->pc = 0x288250u;
    // 0x288250: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x288250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x288254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288258: 0xc054288  jal         func_150A20
    ctx->pc = 0x288258u;
    SET_GPR_U32(ctx, 31, 0x288260u);
    ctx->pc = 0x150A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A20u, 0x288258u, 0x288260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288260u;
label_288260:
    // 0x288260: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x288260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x288264: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x288264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x288268: 0xc041998  jal         func_106660
    ctx->pc = 0x288268u;
    SET_GPR_U32(ctx, 31, 0x288270u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x288268u, 0x288270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288270u;
label_288270:
    // 0x288270: 0x1440ff5d  bnez        $v0, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x288270u;
    {
        const bool branch_taken_0x288270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288270) {
            ctx->pc = 0x287FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287fe8;
        }
    }
    ctx->pc = 0x288278u;
    // 0x288278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x288278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28827c: 0xa383a2c4  sb          $v1, -0x5D3C($gp)
    ctx->pc = 0x28827cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943428), (uint8_t)GPR_U32(ctx, 3));
label_288280:
    // 0x288280: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x288280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288284: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x288284u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288288: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x288288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28828c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28828cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x288290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x288294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288298: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x288298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x28829c: 0x3e00008  jr          $ra
    ctx->pc = 0x28829Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28829Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2882A4u;
    // 0x2882a4: 0x0  nop
    ctx->pc = 0x2882a4u;
    // NOP
    // 0x2882a8: 0x0  nop
    ctx->pc = 0x2882a8u;
    // NOP
    // 0x2882ac: 0x0  nop
    ctx->pc = 0x2882acu;
    // NOP
    ctx->pc = 0x2882b0u;
}
