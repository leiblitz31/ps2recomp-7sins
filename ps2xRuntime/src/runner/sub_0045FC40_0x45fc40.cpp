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

// Function: sub_0045FC40
// Address: 0x45fc40 - 0x45fcd0
void sub_0045FC40_0x45fc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045FC40_0x45fc40");
#endif

    switch (ctx->pc) {
        case 0x45fc84u: goto label_45fc84;
        case 0x45fc9cu: goto label_45fc9c;
        case 0x45fcb0u: goto label_45fcb0;
        default: break;
    }

    ctx->pc = 0x45fc40u;

    // 0x45fc40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x45fc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x45fc44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45fc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45fc48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45fc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45fc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45fc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45fc50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x45fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x45fc54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x45fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x45fc58: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x45fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x45fc5c: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x45fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x45fc60: 0x8fb10030  lw          $s1, 0x30($sp)
    ctx->pc = 0x45fc60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45fc64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45fc68: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x45fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x45fc6c: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x45fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
    // 0x45fc70: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45fc74: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x45fc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45fc78: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x45fc78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x45fc7c: 0xc11818c  jal         func_460630
    ctx->pc = 0x45FC7Cu;
    SET_GPR_U32(ctx, 31, 0x45FC84u);
    ctx->pc = 0x460630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460630u, 0x45FC7Cu, 0x45FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FC84u;
label_45fc84:
    // 0x45fc84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45fc84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45fc88: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x45fc8c: 0x24844e3c  addiu       $a0, $a0, 0x4E3C
    ctx->pc = 0x45fc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20028));
    // 0x45fc90: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x45fc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45fc94: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x45FC94u;
    SET_GPR_U32(ctx, 31, 0x45FC9Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45FC94u, 0x45FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FC9Cu;
label_45fc9c:
    // 0x45fc9c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45fc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x45fca0: 0x24844e5c  addiu       $a0, $a0, 0x4E5C
    ctx->pc = 0x45fca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20060));
    // 0x45fca4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x45fca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45fca8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x45FCA8u;
    SET_GPR_U32(ctx, 31, 0x45FCB0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45FCA8u, 0x45FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FCB0u;
label_45fcb0:
    // 0x45fcb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45fcb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45fcb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45fcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45fcb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45fcb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45fcbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45fcbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45fcc0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x45fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x45fcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x45FCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45FCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45FCCCu;
    // 0x45fccc: 0x0  nop
    ctx->pc = 0x45fcccu;
    // NOP
    ctx->pc = 0x45fcd0u;
}
