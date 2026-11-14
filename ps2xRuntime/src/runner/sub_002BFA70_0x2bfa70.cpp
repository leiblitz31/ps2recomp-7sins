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

// Function: sub_002BFA70
// Address: 0x2bfa70 - 0x2bfbe0
void sub_002BFA70_0x2bfa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFA70_0x2bfa70");
#endif

    switch (ctx->pc) {
        case 0x2bfa9cu: goto label_2bfa9c;
        case 0x2bfae4u: goto label_2bfae4;
        case 0x2bfb00u: goto label_2bfb00;
        case 0x2bfb34u: goto label_2bfb34;
        case 0x2bfb78u: goto label_2bfb78;
        case 0x2bfbacu: goto label_2bfbac;
        case 0x2bfbb8u: goto label_2bfbb8;
        default: break;
    }

    ctx->pc = 0x2bfa70u;

    // 0x2bfa70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bfa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2bfa74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bfa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bfa78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bfa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bfa7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bfa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bfa80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bfa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bfa84: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2bfa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2bfa88: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2bfa88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2bfa8c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2bfa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2bfa90: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2bfa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfa94: 0xc042290  jal         func_108A40
    ctx->pc = 0x2BFA94u;
    SET_GPR_U32(ctx, 31, 0x2BFA9Cu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x2BFA94u, 0x2BFA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA9Cu;
label_2bfa9c:
    // 0x2bfa9c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2bfa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfaa0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2bfaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bfaa4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bfaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bfaa8: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x2bfaa8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2bfaac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFAACu;
    {
        const bool branch_taken_0x2bfaac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2bfaac) {
            ctx->pc = 0x2BFABCu;
            goto label_2bfabc;
        }
    }
    ctx->pc = 0x2BFAB4u;
    // 0x2bfab4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2bfab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2bfab8: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x2bfab8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_2bfabc:
    // 0x2bfabc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2bfabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfac0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2bfac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bfac4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2bfac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfac8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bfacc: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2BFACCu;
    {
        const bool branch_taken_0x2bfacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bfacc) {
            ctx->pc = 0x2BFB88u;
            goto label_2bfb88;
        }
    }
    ctx->pc = 0x2BFAD4u;
    // 0x2bfad4: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x2bfad4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfad8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2bfad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfadc: 0xc042288  jal         func_108A20
    ctx->pc = 0x2BFADCu;
    SET_GPR_U32(ctx, 31, 0x2BFAE4u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x2BFADCu, 0x2BFAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAE4u;
label_2bfae4:
    // 0x2bfae4: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BFAE4u;
    {
        const bool branch_taken_0x2bfae4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bfae4) {
            ctx->pc = 0x2BFB18u;
            goto label_2bfb18;
        }
    }
    ctx->pc = 0x2BFAECu;
    // 0x2bfaec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2bfaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfaf0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2bfaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bfaf4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2bfaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bfaf8: 0xc0421e0  jal         func_108780
    ctx->pc = 0x2BFAF8u;
    SET_GPR_U32(ctx, 31, 0x2BFB00u);
    ctx->pc = 0x108780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108780u, 0x2BFAF8u, 0x2BFB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB00u;
label_2bfb00:
    // 0x2bfb00: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2bfb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfb04: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2bfb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bfb08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bfb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bfb0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2bfb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2bfb10: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2BFB10u;
    {
        const bool branch_taken_0x2bfb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfb10) {
            ctx->pc = 0x2BFBACu;
            goto label_2bfbac;
        }
    }
    ctx->pc = 0x2BFB18u;
label_2bfb18:
    // 0x2bfb18: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2bfb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfb1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2bfb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfb20: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2bfb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bfb24: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2bfb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bfb28: 0x2445fffc  addiu       $a1, $v0, -0x4
    ctx->pc = 0x2bfb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2bfb2c: 0xc0421e0  jal         func_108780
    ctx->pc = 0x2BFB2Cu;
    SET_GPR_U32(ctx, 31, 0x2BFB34u);
    ctx->pc = 0x108780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108780u, 0x2BFB2Cu, 0x2BFB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB34u;
label_2bfb34:
    // 0x2bfb34: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2bfb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfb38: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2bfb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bfb3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bfb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bfb40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2bfb40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2bfb44: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2bfb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bfb48: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2bfb48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bfb4c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2bfb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfb50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2bfb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bfb54: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2bfb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfb58: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2bfb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bfb5c: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x2bfb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfb60: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2bfb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfb64: 0x2465fff8  addiu       $a1, $v1, -0x8
    ctx->pc = 0x2bfb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2bfb68: 0x2446fffc  addiu       $a2, $v0, -0x4
    ctx->pc = 0x2bfb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2bfb6c: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x2bfb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2bfb70: 0xc0afef8  jal         func_2BFBE0
    ctx->pc = 0x2BFB70u;
    SET_GPR_U32(ctx, 31, 0x2BFB78u);
    ctx->pc = 0x2BFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFBE0u, 0x2BFB70u, 0x2BFB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB78u;
label_2bfb78:
    // 0x2bfb78: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2bfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfb7c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2bfb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2bfb80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BFB80u;
    {
        const bool branch_taken_0x2bfb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfb80) {
            ctx->pc = 0x2BFBACu;
            goto label_2bfbac;
        }
    }
    ctx->pc = 0x2BFB88u;
label_2bfb88:
    // 0x2bfb88: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x2bfb88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfb8c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2bfb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfb90: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2bfb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfb94: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2bfb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bfb98: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x2bfb98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2bfb9c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bfb9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfba0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bfba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfba4: 0xc04214c  jal         func_108530
    ctx->pc = 0x2BFBA4u;
    SET_GPR_U32(ctx, 31, 0x2BFBACu);
    ctx->pc = 0x108530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108530u, 0x2BFBA4u, 0x2BFBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFBACu;
label_2bfbac:
    // 0x2bfbac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2bfbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfbb0: 0xc042290  jal         func_108A40
    ctx->pc = 0x2BFBB0u;
    SET_GPR_U32(ctx, 31, 0x2BFBB8u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x2BFBB0u, 0x2BFBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFBB8u;
label_2bfbb8:
    // 0x2bfbb8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2bfbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2bfbbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bfbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bfbc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bfbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bfbc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bfbc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bfbc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bfbc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfbcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bfbccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfbd0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2bfbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2bfbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFBDCu;
    // 0x2bfbdc: 0x0  nop
    ctx->pc = 0x2bfbdcu;
    // NOP
    ctx->pc = 0x2bfbe0u;
}
