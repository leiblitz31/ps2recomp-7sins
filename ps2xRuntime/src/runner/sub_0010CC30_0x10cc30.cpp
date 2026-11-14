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

// Function: sub_0010CC30
// Address: 0x10cc30 - 0x10ce80
void sub_0010CC30_0x10cc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CC30_0x10cc30");
#endif

    switch (ctx->pc) {
        case 0x10cc84u: goto label_10cc84;
        case 0x10cc94u: goto label_10cc94;
        case 0x10ccb8u: goto label_10ccb8;
        case 0x10ccccu: goto label_10cccc;
        case 0x10ccdcu: goto label_10ccdc;
        case 0x10ccecu: goto label_10ccec;
        case 0x10ccf8u: goto label_10ccf8;
        case 0x10cd0cu: goto label_10cd0c;
        case 0x10cd28u: goto label_10cd28;
        case 0x10cd38u: goto label_10cd38;
        case 0x10cd40u: goto label_10cd40;
        case 0x10cd4cu: goto label_10cd4c;
        case 0x10cd5cu: goto label_10cd5c;
        case 0x10cd6cu: goto label_10cd6c;
        case 0x10cd80u: goto label_10cd80;
        case 0x10cd94u: goto label_10cd94;
        case 0x10cda4u: goto label_10cda4;
        case 0x10cdb8u: goto label_10cdb8;
        case 0x10cdccu: goto label_10cdcc;
        case 0x10cdd8u: goto label_10cdd8;
        case 0x10cde8u: goto label_10cde8;
        case 0x10cdf8u: goto label_10cdf8;
        case 0x10ce10u: goto label_10ce10;
        case 0x10ce24u: goto label_10ce24;
        case 0x10ce34u: goto label_10ce34;
        case 0x10ce44u: goto label_10ce44;
        default: break;
    }

    ctx->pc = 0x10cc30u;

    // 0x10cc30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x10cc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x10cc34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x10cc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x10cc38: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x10cc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x10cc3c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x10cc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x10cc40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x10cc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x10cc44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10cc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10cc48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10cc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10cc4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10cc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10cc50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10cc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10cc54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10cc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10cc58: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x10cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x10cc5c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x10cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x10cc60: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x10cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x10cc64: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x10cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10cc68: 0x10030076  beq         $zero, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x10CC68u;
    {
        const bool branch_taken_0x10cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x10cc68) {
            ctx->pc = 0x10CE44u;
            goto label_10ce44;
        }
    }
    ctx->pc = 0x10CC70u;
    // 0x10cc70: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x10cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10cc74: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x10cc78: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x10cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10cc7c: 0xc044da4  jal         func_113690
    ctx->pc = 0x10CC7Cu;
    SET_GPR_U32(ctx, 31, 0x10CC84u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x10CC7Cu, 0x10CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC84u;
label_10cc84:
    // 0x10cc84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x10cc84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10cc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc8c: 0xc0457e8  jal         func_115FA0
    ctx->pc = 0x10CC8Cu;
    SET_GPR_U32(ctx, 31, 0x10CC94u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x10CC8Cu, 0x10CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC94u;
label_10cc94:
    // 0x10cc94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10cc94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc98: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x10cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10cc9c: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x10cc9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x10cca0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CCA0u;
    {
        const bool branch_taken_0x10cca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cca0) {
            ctx->pc = 0x10CCACu;
            goto label_10ccac;
        }
    }
    ctx->pc = 0x10CCA8u;
    // 0x10cca8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10cca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ccac:
    // 0x10ccac: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x10ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10ccb0: 0xc0457d0  jal         func_115F40
    ctx->pc = 0x10CCB0u;
    SET_GPR_U32(ctx, 31, 0x10CCB8u);
    ctx->pc = 0x115F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F40u, 0x10CCB0u, 0x10CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCB8u;
label_10ccb8:
    // 0x10ccb8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x10ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10ccbc: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x10ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x10ccc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ccc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccc4: 0xc0445c0  jal         func_111700
    ctx->pc = 0x10CCC4u;
    SET_GPR_U32(ctx, 31, 0x10CCCCu);
    ctx->pc = 0x111700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111700u, 0x10CCC4u, 0x10CCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCCCu;
label_10cccc:
    // 0x10cccc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x10ccccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x10ccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccd4: 0xc044844  jal         func_112110
    ctx->pc = 0x10CCD4u;
    SET_GPR_U32(ctx, 31, 0x10CCDCu);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10CCD4u, 0x10CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCDCu;
label_10ccdc:
    // 0x10ccdc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10ccdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cce0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10cce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cce4: 0xc041010  jal         func_104040
    ctx->pc = 0x10CCE4u;
    SET_GPR_U32(ctx, 31, 0x10CCECu);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x10CCE4u, 0x10CCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCECu;
label_10ccec:
    // 0x10ccec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10ccecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccf0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x10CCF0u;
    {
        const bool branch_taken_0x10ccf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ccf0) {
            ctx->pc = 0x10CE04u;
            goto label_10ce04;
        }
    }
    ctx->pc = 0x10CCF8u;
label_10ccf8:
    // 0x10ccf8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x10ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10ccfc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x10ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x10cd00: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x10cd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10cd04: 0xc042c08  jal         func_10B020
    ctx->pc = 0x10CD04u;
    SET_GPR_U32(ctx, 31, 0x10CD0Cu);
    ctx->pc = 0x10B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B020u, 0x10CD04u, 0x10CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD0Cu;
label_10cd0c:
    // 0x10cd0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10cd0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd10: 0x1012003b  beq         $zero, $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x10CD10u;
    {
        const bool branch_taken_0x10cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x10cd10) {
            ctx->pc = 0x10CE00u;
            goto label_10ce00;
        }
    }
    ctx->pc = 0x10CD18u;
    // 0x10cd18: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x10cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x10cd1c: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x10cd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x10cd20: 0xc04340c  jal         func_10D030
    ctx->pc = 0x10CD20u;
    SET_GPR_U32(ctx, 31, 0x10CD28u);
    ctx->pc = 0x10D030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D030u, 0x10CD20u, 0x10CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD28u;
label_10cd28:
    // 0x10cd28: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x10cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x10cd2c: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x10cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x10cd30: 0xc043400  jal         func_10D000
    ctx->pc = 0x10CD30u;
    SET_GPR_U32(ctx, 31, 0x10CD38u);
    ctx->pc = 0x10D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D000u, 0x10CD30u, 0x10CD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD38u;
label_10cd38:
    // 0x10cd38: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10CD38u;
    {
        const bool branch_taken_0x10cd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cd38) {
            ctx->pc = 0x10CDD8u;
            goto label_10cdd8;
        }
    }
    ctx->pc = 0x10CD40u;
label_10cd40:
    // 0x10cd40: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x10cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x10cd44: 0xc0433ec  jal         func_10CFB0
    ctx->pc = 0x10CD44u;
    SET_GPR_U32(ctx, 31, 0x10CD4Cu);
    ctx->pc = 0x10CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CFB0u, 0x10CD44u, 0x10CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD4Cu;
label_10cd4c:
    // 0x10cd4c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x10cd4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10cd50: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x10cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10cd54: 0xc0457e8  jal         func_115FA0
    ctx->pc = 0x10CD54u;
    SET_GPR_U32(ctx, 31, 0x10CD5Cu);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x10CD54u, 0x10CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD5Cu;
label_10cd5c:
    // 0x10cd5c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x10cd5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd60: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x10cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x10cd64: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x10CD64u;
    SET_GPR_U32(ctx, 31, 0x10CD6Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x10CD64u, 0x10CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD6Cu;
label_10cd6c:
    // 0x10cd6c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x10cd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd70: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10cd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10cd74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10cd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd78: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x10CD78u;
    SET_GPR_U32(ctx, 31, 0x10CD80u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x10CD78u, 0x10CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD80u;
label_10cd80:
    // 0x10cd80: 0x10130012  beq         $zero, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x10CD80u;
    {
        const bool branch_taken_0x10cd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x10cd80) {
            ctx->pc = 0x10CDCCu;
            goto label_10cdcc;
        }
    }
    ctx->pc = 0x10CD88u;
    // 0x10cd88: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x10cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10cd8c: 0xc0457e8  jal         func_115FA0
    ctx->pc = 0x10CD8Cu;
    SET_GPR_U32(ctx, 31, 0x10CD94u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x10CD8Cu, 0x10CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD94u;
label_10cd94:
    // 0x10cd94: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x10cd94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd98: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x10cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x10cd9c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x10CD9Cu;
    SET_GPR_U32(ctx, 31, 0x10CDA4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x10CD9Cu, 0x10CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDA4u;
label_10cda4:
    // 0x10cda4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10cda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cda8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10cdac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10cdacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdb0: 0xc041a50  jal         func_106940
    ctx->pc = 0x10CDB0u;
    SET_GPR_U32(ctx, 31, 0x10CDB8u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x10CDB0u, 0x10CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDB8u;
label_10cdb8:
    // 0x10cdb8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x10cdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdbc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10cdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10cdc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10cdc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdc4: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x10CDC4u;
    SET_GPR_U32(ctx, 31, 0x10CDCCu);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x10CDC4u, 0x10CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDCCu;
label_10cdcc:
    // 0x10cdcc: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x10cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x10cdd0: 0xc0433cc  jal         func_10CF30
    ctx->pc = 0x10CDD0u;
    SET_GPR_U32(ctx, 31, 0x10CDD8u);
    ctx->pc = 0x10CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF30u, 0x10CDD0u, 0x10CDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDD8u;
label_10cdd8:
    // 0x10cdd8: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x10cdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x10cddc: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x10cddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x10cde0: 0xc0433a0  jal         func_10CE80
    ctx->pc = 0x10CDE0u;
    SET_GPR_U32(ctx, 31, 0x10CDE8u);
    ctx->pc = 0x10CE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CE80u, 0x10CDE0u, 0x10CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDE8u;
label_10cde8:
    // 0x10cde8: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x10cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x10cdec: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x10cdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x10cdf0: 0xc041998  jal         func_106660
    ctx->pc = 0x10CDF0u;
    SET_GPR_U32(ctx, 31, 0x10CDF8u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x10CDF0u, 0x10CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDF8u;
label_10cdf8:
    // 0x10cdf8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x10CDF8u;
    {
        const bool branch_taken_0x10cdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cdf8) {
            ctx->pc = 0x10CD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cd40;
        }
    }
    ctx->pc = 0x10CE00u;
label_10ce00:
    // 0x10ce00: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x10ce00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_10ce04:
    // 0x10ce04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10ce04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce08: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x10CE08u;
    SET_GPR_U32(ctx, 31, 0x10CE10u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x10CE08u, 0x10CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE10u;
label_10ce10:
    // 0x10ce10: 0x1622ffb9  bne         $s1, $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x10CE10u;
    {
        const bool branch_taken_0x10ce10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x10ce10) {
            ctx->pc = 0x10CCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ccf8;
        }
    }
    ctx->pc = 0x10CE18u;
    // 0x10ce18: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x10ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10ce1c: 0xc0457e8  jal         func_115FA0
    ctx->pc = 0x10CE1Cu;
    SET_GPR_U32(ctx, 31, 0x10CE24u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x10CE1Cu, 0x10CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE24u;
label_10ce24:
    // 0x10ce24: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x10ce24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10ce28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce2c: 0xc0457e8  jal         func_115FA0
    ctx->pc = 0x10CE2Cu;
    SET_GPR_U32(ctx, 31, 0x10CE34u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x10CE2Cu, 0x10CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE34u;
label_10ce34:
    // 0x10ce34: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x10ce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ce38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce3c: 0xc088fb4  jal         func_223ED0
    ctx->pc = 0x10CE3Cu;
    SET_GPR_U32(ctx, 31, 0x10CE44u);
    ctx->pc = 0x223ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223ED0u, 0x10CE3Cu, 0x10CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE44u;
label_10ce44:
    // 0x10ce44: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x10ce44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10ce48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x10ce48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10ce4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x10ce4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10ce50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10ce50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ce54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10ce54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ce58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10ce58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ce5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10ce5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ce60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10ce60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ce64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ce64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ce68: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x10ce68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x10ce6c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CE74u;
    // 0x10ce74: 0x0  nop
    ctx->pc = 0x10ce74u;
    // NOP
    // 0x10ce78: 0x0  nop
    ctx->pc = 0x10ce78u;
    // NOP
    // 0x10ce7c: 0x0  nop
    ctx->pc = 0x10ce7cu;
    // NOP
    ctx->pc = 0x10ce80u;
}
