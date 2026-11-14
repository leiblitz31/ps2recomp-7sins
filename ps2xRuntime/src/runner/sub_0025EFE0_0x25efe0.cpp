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

// Function: sub_0025EFE0
// Address: 0x25efe0 - 0x25f0d0
void sub_0025EFE0_0x25efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EFE0_0x25efe0");
#endif

    switch (ctx->pc) {
        case 0x25f004u: goto label_25f004;
        case 0x25f020u: goto label_25f020;
        case 0x25f054u: goto label_25f054;
        case 0x25f064u: goto label_25f064;
        case 0x25f084u: goto label_25f084;
        case 0x25f0acu: goto label_25f0ac;
        default: break;
    }

    ctx->pc = 0x25efe0u;

    // 0x25efe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25efe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25efe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25efe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25efec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25efecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25eff0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25eff4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25eff8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25effc: 0xc097c8c  jal         func_25F230
    ctx->pc = 0x25EFFCu;
    SET_GPR_U32(ctx, 31, 0x25F004u);
    ctx->pc = 0x25F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F230u, 0x25EFFCu, 0x25F004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F004u;
label_25f004:
    // 0x25f004: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x25f004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f008: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x25f008u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25f00c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x25F00Cu;
    {
        const bool branch_taken_0x25f00c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f00c) {
            ctx->pc = 0x25F0ACu;
            goto label_25f0ac;
        }
    }
    ctx->pc = 0x25F014u;
    // 0x25f014: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25f014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f018: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x25F018u;
    SET_GPR_U32(ctx, 31, 0x25F020u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x25F018u, 0x25F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F020u;
label_25f020:
    // 0x25f020: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25f020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f024: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25f024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f028: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25f028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25f02c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25F02Cu;
    {
        const bool branch_taken_0x25f02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f02c) {
            ctx->pc = 0x25F06Cu;
            goto label_25f06c;
        }
    }
    ctx->pc = 0x25F034u;
    // 0x25f034: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25f034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f038: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25f038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f03c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f040: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x25f040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f044: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x25f044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f048: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x25f048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25f04c: 0xc097c34  jal         func_25F0D0
    ctx->pc = 0x25F04Cu;
    SET_GPR_U32(ctx, 31, 0x25F054u);
    ctx->pc = 0x25F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F0D0u, 0x25F04Cu, 0x25F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F054u;
label_25f054:
    // 0x25f054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f058: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25f058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f05c: 0xc0421a4  jal         func_108690
    ctx->pc = 0x25F05Cu;
    SET_GPR_U32(ctx, 31, 0x25F064u);
    ctx->pc = 0x108690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108690u, 0x25F05Cu, 0x25F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F064u;
label_25f064:
    // 0x25f064: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25F064u;
    {
        const bool branch_taken_0x25f064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f064) {
            ctx->pc = 0x25F088u;
            goto label_25f088;
        }
    }
    ctx->pc = 0x25F06Cu;
label_25f06c:
    // 0x25f06c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f070: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x25f070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25f074: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x25f074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f078: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25f078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f07c: 0xc04246c  jal         func_1091B0
    ctx->pc = 0x25F07Cu;
    SET_GPR_U32(ctx, 31, 0x25F084u);
    ctx->pc = 0x1091B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1091B0u, 0x25F07Cu, 0x25F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F084u;
label_25f084:
    // 0x25f084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f088:
    // 0x25f088: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25f088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25f08c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x25f08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25f090: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25f094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25f098: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x25f098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25f09c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f0a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25f0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0a4: 0xc042190  jal         func_108640
    ctx->pc = 0x25F0A4u;
    SET_GPR_U32(ctx, 31, 0x25F0ACu);
    ctx->pc = 0x108640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108640u, 0x25F0A4u, 0x25F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0ACu;
label_25f0ac:
    // 0x25f0ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25f0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f0b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f0b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f0b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25f0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25F0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F0C4u;
    // 0x25f0c4: 0x0  nop
    ctx->pc = 0x25f0c4u;
    // NOP
    // 0x25f0c8: 0x0  nop
    ctx->pc = 0x25f0c8u;
    // NOP
    // 0x25f0cc: 0x0  nop
    ctx->pc = 0x25f0ccu;
    // NOP
    ctx->pc = 0x25f0d0u;
}
