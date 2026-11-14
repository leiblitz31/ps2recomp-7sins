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

// Function: sub_001BCBA0
// Address: 0x1bcba0 - 0x1bccc0
void sub_001BCBA0_0x1bcba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCBA0_0x1bcba0");
#endif

    switch (ctx->pc) {
        case 0x1bcbd4u: goto label_1bcbd4;
        case 0x1bcbecu: goto label_1bcbec;
        case 0x1bcc00u: goto label_1bcc00;
        case 0x1bcc0cu: goto label_1bcc0c;
        case 0x1bcc4cu: goto label_1bcc4c;
        case 0x1bcc60u: goto label_1bcc60;
        case 0x1bcc74u: goto label_1bcc74;
        default: break;
    }

    ctx->pc = 0x1bcba0u;

    // 0x1bcba0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bcba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bcba4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bcba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bcba8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bcba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bcbac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bcbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bcbb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bcbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bcbb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bcbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bcbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bcbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bcbbc: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1bcbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1bcbc0: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x1bcbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x1bcbc4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1bcbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bcbc8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1bcbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bcbcc: 0xc06f2a4  jal         func_1BCA90
    ctx->pc = 0x1BCBCCu;
    SET_GPR_U32(ctx, 31, 0x1BCBD4u);
    ctx->pc = 0x1BCA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA90u, 0x1BCBCCu, 0x1BCBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBD4u;
label_1bcbd4:
    // 0x1bcbd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bcbd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbd8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1bcbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bcbdc: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1bcbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1bcbe0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1bcbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bcbe4: 0xc06ea80  jal         func_1BAA00
    ctx->pc = 0x1BCBE4u;
    SET_GPR_U32(ctx, 31, 0x1BCBECu);
    ctx->pc = 0x1BAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAA00u, 0x1BCBE4u, 0x1BCBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBECu;
label_1bcbec:
    // 0x1bcbec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bcbecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbf0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bcbf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bcbf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbf8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1BCBF8u;
    {
        const bool branch_taken_0x1bcbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcbf8) {
            ctx->pc = 0x1BCC8Cu;
            goto label_1bcc8c;
        }
    }
    ctx->pc = 0x1BCC00u;
label_1bcc00:
    // 0x1bcc00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bcc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc04: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1BCC04u;
    {
        const bool branch_taken_0x1bcc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc04) {
            ctx->pc = 0x1BCC7Cu;
            goto label_1bcc7c;
        }
    }
    ctx->pc = 0x1BCC0Cu;
label_1bcc0c:
    // 0x1bcc0c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1bcc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bcc10: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1bcc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1bcc14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bcc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bcc18: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1bcc18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcc1c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1bcc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bcc20: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1bcc20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1bcc24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcc28: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BCC28u;
    {
        const bool branch_taken_0x1bcc28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcc28) {
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCC30u;
    // 0x1bcc30: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x1bcc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1bcc34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bcc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bcc38: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1bcc38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1bcc3c: 0x24a574d0  addiu       $a1, $a1, 0x74D0
    ctx->pc = 0x1bcc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29904));
    // 0x1bcc40: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x1bcc40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bcc44: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1BCC44u;
    SET_GPR_U32(ctx, 31, 0x1BCC4Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1BCC44u, 0x1BCC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC4Cu;
label_1bcc4c:
    // 0x1bcc4c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1bcc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bcc50: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1bcc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1bcc54: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1bcc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bcc58: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1BCC58u;
    SET_GPR_U32(ctx, 31, 0x1BCC60u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1BCC58u, 0x1BCC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC60u;
label_1bcc60:
    // 0x1bcc60: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1bcc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1bcc64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bcc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc68: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x1bcc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1bcc6c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1BCC6Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC74u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1BCC6Cu, 0x1BCC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC74u;
label_1bcc74:
    // 0x1bcc74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bcc74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bcc78:
    // 0x1bcc78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bcc78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bcc7c:
    // 0x1bcc7c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1bcc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bcc80: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1BCC80u;
    {
        const bool branch_taken_0x1bcc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc80) {
            ctx->pc = 0x1BCC0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcc0c;
        }
    }
    ctx->pc = 0x1BCC88u;
    // 0x1bcc88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bcc88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bcc8c:
    // 0x1bcc8c: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1bcc8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bcc90: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1BCC90u;
    {
        const bool branch_taken_0x1bcc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc90) {
            ctx->pc = 0x1BCC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcc00;
        }
    }
    ctx->pc = 0x1BCC98u;
    // 0x1bcc98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcc9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bcc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bcca0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bcca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bcca4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bcca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bcca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bcca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bccac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bccacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bccb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bccb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bccb4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1bccb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bccb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCCC0u;
}
