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

// Function: sub_004658F0
// Address: 0x4658f0 - 0x4659b0
void sub_004658F0_0x4658f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004658F0_0x4658f0");
#endif

    switch (ctx->pc) {
        case 0x465948u: goto label_465948;
        default: break;
    }

    ctx->pc = 0x4658f0u;

    // 0x4658f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4658f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4658f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4658f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4658f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4658f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4658fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4658fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x465900: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x465900u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x465904: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x465904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x465908: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x465908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46590c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x465910: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x465910u;
    {
        const bool branch_taken_0x465910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x465910) {
            ctx->pc = 0x465924u;
            goto label_465924;
        }
    }
    ctx->pc = 0x465918u;
    // 0x465918: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x465918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46591c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x46591Cu;
    {
        const bool branch_taken_0x46591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46591c) {
            ctx->pc = 0x465994u;
            goto label_465994;
        }
    }
    ctx->pc = 0x465924u;
label_465924:
    // 0x465924: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x465924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x465928: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x465928u;
    {
        const bool branch_taken_0x465928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x465928) {
            ctx->pc = 0x46593Cu;
            goto label_46593c;
        }
    }
    ctx->pc = 0x465930u;
    // 0x465930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x465930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465934: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x465934u;
    {
        const bool branch_taken_0x465934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465934) {
            ctx->pc = 0x465994u;
            goto label_465994;
        }
    }
    ctx->pc = 0x46593Cu;
label_46593c:
    // 0x46593c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46593cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465940: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x465940u;
    {
        const bool branch_taken_0x465940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465940) {
            ctx->pc = 0x465978u;
            goto label_465978;
        }
    }
    ctx->pc = 0x465948u;
label_465948:
    // 0x465948: 0x83a30030  lb          $v1, 0x30($sp)
    ctx->pc = 0x465948u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46594c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x465950: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x465950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x465954: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x465954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x465958: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x465958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46595c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x465960: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x465960u;
    {
        const bool branch_taken_0x465960 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x465960) {
            ctx->pc = 0x465974u;
            goto label_465974;
        }
    }
    ctx->pc = 0x465968u;
    // 0x465968: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x465968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46596c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x46596Cu;
    {
        const bool branch_taken_0x46596c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46596c) {
            ctx->pc = 0x465978u;
            goto label_465978;
        }
    }
    ctx->pc = 0x465974u;
label_465974:
    // 0x465974: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x465974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_465978:
    // 0x465978: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x465978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46597c: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x46597cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x465980: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x465980u;
    {
        const bool branch_taken_0x465980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x465980) {
            ctx->pc = 0x465990u;
            goto label_465990;
        }
    }
    ctx->pc = 0x465988u;
    // 0x465988: 0x1220ffef  beqz        $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x465988u;
    {
        const bool branch_taken_0x465988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x465988) {
            ctx->pc = 0x465948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465948;
        }
    }
    ctx->pc = 0x465990u;
label_465990:
    // 0x465990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x465990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_465994:
    // 0x465994: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46599c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x46599cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4659a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4659A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4659A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4659A8u;
    // 0x4659a8: 0x0  nop
    ctx->pc = 0x4659a8u;
    // NOP
    // 0x4659ac: 0x0  nop
    ctx->pc = 0x4659acu;
    // NOP
    ctx->pc = 0x4659b0u;
}
