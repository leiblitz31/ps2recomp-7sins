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

// Function: sub_00214FC0
// Address: 0x214fc0 - 0x2150b0
void sub_00214FC0_0x214fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214FC0_0x214fc0");
#endif

    switch (ctx->pc) {
        case 0x214fe4u: goto label_214fe4;
        case 0x215000u: goto label_215000;
        case 0x215034u: goto label_215034;
        case 0x215044u: goto label_215044;
        case 0x215064u: goto label_215064;
        case 0x21508cu: goto label_21508c;
        default: break;
    }

    ctx->pc = 0x214fc0u;

    // 0x214fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x214fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x214fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x214fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x214fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x214fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x214fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x214fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x214fd0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x214fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x214fd4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x214fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x214fd8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x214fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214fdc: 0xc085490  jal         func_215240
    ctx->pc = 0x214FDCu;
    SET_GPR_U32(ctx, 31, 0x214FE4u);
    ctx->pc = 0x215240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215240u, 0x214FDCu, 0x214FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214FE4u;
label_214fe4:
    // 0x214fe4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x214fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214fe8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x214fe8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x214fec: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x214FECu;
    {
        const bool branch_taken_0x214fec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x214fec) {
            ctx->pc = 0x21508Cu;
            goto label_21508c;
        }
    }
    ctx->pc = 0x214FF4u;
    // 0x214ff4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x214ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214ff8: 0xc085138  jal         func_2144E0
    ctx->pc = 0x214FF8u;
    SET_GPR_U32(ctx, 31, 0x215000u);
    ctx->pc = 0x2144E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2144E0u, 0x214FF8u, 0x215000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215000u;
label_215000:
    // 0x215000: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x215000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215004: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215008: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x215008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21500c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21500Cu;
    {
        const bool branch_taken_0x21500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21500c) {
            ctx->pc = 0x21504Cu;
            goto label_21504c;
        }
    }
    ctx->pc = 0x215014u;
    // 0x215014: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x215014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215018: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21501c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x21501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215020: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x215020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215024: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x215024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215028: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x215028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21502c: 0xc08542c  jal         func_2150B0
    ctx->pc = 0x21502Cu;
    SET_GPR_U32(ctx, 31, 0x215034u);
    ctx->pc = 0x2150B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2150B0u, 0x21502Cu, 0x215034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215034u;
label_215034:
    // 0x215034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215038: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x215038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21503c: 0xc0850d8  jal         func_214360
    ctx->pc = 0x21503Cu;
    SET_GPR_U32(ctx, 31, 0x215044u);
    ctx->pc = 0x214360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214360u, 0x21503Cu, 0x215044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215044u;
label_215044:
    // 0x215044: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x215044u;
    {
        const bool branch_taken_0x215044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215044) {
            ctx->pc = 0x215068u;
            goto label_215068;
        }
    }
    ctx->pc = 0x21504Cu;
label_21504c:
    // 0x21504c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x21504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215050: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x215050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x215054: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x215054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215058: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x215058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21505c: 0xc085300  jal         func_214C00
    ctx->pc = 0x21505Cu;
    SET_GPR_U32(ctx, 31, 0x215064u);
    ctx->pc = 0x214C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214C00u, 0x21505Cu, 0x215064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215064u;
label_215064:
    // 0x215064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215068:
    // 0x215068: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x215068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21506c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x21506cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x215070: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x215070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215078: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x215078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21507c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x21507cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215080: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215084: 0xc0850c4  jal         func_214310
    ctx->pc = 0x215084u;
    SET_GPR_U32(ctx, 31, 0x21508Cu);
    ctx->pc = 0x214310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214310u, 0x215084u, 0x21508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21508Cu;
label_21508c:
    // 0x21508c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x215090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215098: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x215098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21509c: 0x3e00008  jr          $ra
    ctx->pc = 0x21509Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21509Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2150A4u;
    // 0x2150a4: 0x0  nop
    ctx->pc = 0x2150a4u;
    // NOP
    // 0x2150a8: 0x0  nop
    ctx->pc = 0x2150a8u;
    // NOP
    // 0x2150ac: 0x0  nop
    ctx->pc = 0x2150acu;
    // NOP
    ctx->pc = 0x2150b0u;
}
