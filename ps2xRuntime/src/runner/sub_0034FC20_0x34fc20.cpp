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

// Function: sub_0034FC20
// Address: 0x34fc20 - 0x34fcf8
void sub_0034FC20_0x34fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FC20_0x34fc20");
#endif

    switch (ctx->pc) {
        case 0x34fce4u: goto label_34fce4;
        default: break;
    }

    ctx->pc = 0x34fc20u;

    // 0x34fc20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34fc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34fc24: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x34fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x34fc28: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x34fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x34fc2c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34fc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34fc30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34fc30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc34: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x34fc34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x34fc38: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34fc3c: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x34fc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x34fc40: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x34fc40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x34fc44: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x34fc44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x34fc48: 0x3c0a0035  lui         $t2, 0x35
    ctx->pc = 0x34fc48u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)53 << 16));
    // 0x34fc4c: 0x3c0b0035  lui         $t3, 0x35
    ctx->pc = 0x34fc4cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)53 << 16));
    // 0x34fc50: 0x3c0c0034  lui         $t4, 0x34
    ctx->pc = 0x34fc50u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52 << 16));
    // 0x34fc54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34fc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34fc58: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x34fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x34fc5c: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x34fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x34fc60: 0xac40ffd8  sw          $zero, -0x28($v0)
    ctx->pc = 0x34fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967256), GPR_U32(ctx, 0));
    // 0x34fc64: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x34fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x34fc68: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x34fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
    // 0x34fc6c: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x34fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
    // 0x34fc70: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x34fc70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
    // 0x34fc74: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x34fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
    // 0x34fc78: 0xac40ffe4  sw          $zero, -0x1C($v0)
    ctx->pc = 0x34fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), GPR_U32(ctx, 0));
    // 0x34fc7c: 0xac40ffe0  sw          $zero, -0x20($v0)
    ctx->pc = 0x34fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), GPR_U32(ctx, 0));
    // 0x34fc80: 0xac40ffdc  sw          $zero, -0x24($v0)
    ctx->pc = 0x34fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967260), GPR_U32(ctx, 0));
    // 0x34fc84: 0x24638c58  addiu       $v1, $v1, -0x73A8
    ctx->pc = 0x34fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937688));
    // 0x34fc88: 0x24848cf8  addiu       $a0, $a0, -0x7308
    ctx->pc = 0x34fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937848));
    // 0x34fc8c: 0x24a5cc70  addiu       $a1, $a1, -0x3390
    ctx->pc = 0x34fc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954096));
    // 0x34fc90: 0x24c68d60  addiu       $a2, $a2, -0x72A0
    ctx->pc = 0x34fc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937952));
    // 0x34fc94: 0x24e78e68  addiu       $a3, $a3, -0x7198
    ctx->pc = 0x34fc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938216));
    // 0x34fc98: 0x25088f18  addiu       $t0, $t0, -0x70E8
    ctx->pc = 0x34fc98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938392));
    // 0x34fc9c: 0x252983b0  addiu       $t1, $t1, -0x7C50
    ctx->pc = 0x34fc9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935472));
    // 0x34fca0: 0x254a8810  addiu       $t2, $t2, -0x77F0
    ctx->pc = 0x34fca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294936592));
    // 0x34fca4: 0x256b8f88  addiu       $t3, $t3, -0x7078
    ctx->pc = 0x34fca4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294938504));
    // 0x34fca8: 0x258c7bc8  addiu       $t4, $t4, 0x7BC8
    ctx->pc = 0x34fca8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 31688));
    // 0x34fcac: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x34fcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x34fcb0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x34fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x34fcb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34fcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fcb8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x34fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x34fcbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fcc0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x34fcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x34fcc4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34fcc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fcc8: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x34fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x34fccc: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x34fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x34fcd0: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x34fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x34fcd4: 0xafaa0020  sw          $t2, 0x20($sp)
    ctx->pc = 0x34fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
    // 0x34fcd8: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x34fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    // 0x34fcdc: 0xc0d042c  jal         func_3410B0
    ctx->pc = 0x34FCDCu;
    SET_GPR_U32(ctx, 31, 0x34FCE4u);
    ctx->pc = 0x34FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FCDCu;
    // 0x34fce0: 0xafac0028  sw          $t4, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410B0u, 0x34FCDCu, 0x34FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FCE4u;
label_34fce4:
    // 0x34fce4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34fce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fce8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34fce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34fcec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x34fcecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34fcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x34FCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FCF0u;
        // 0x34fcf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FCF8u;
}
