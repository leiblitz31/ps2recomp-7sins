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

// Function: sub_001FCC30
// Address: 0x1fcc30 - 0x1fcd50
void sub_001FCC30_0x1fcc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCC30_0x1fcc30");
#endif

    switch (ctx->pc) {
        case 0x1fcc4cu: goto label_1fcc4c;
        case 0x1fcc58u: goto label_1fcc58;
        default: break;
    }

    ctx->pc = 0x1fcc30u;

    // 0x1fcc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fcc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fcc34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fcc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fcc38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fcc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fcc3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1fcc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1fcc40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fcc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc44: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FCC44u;
    {
        const bool branch_taken_0x1fcc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc44) {
            ctx->pc = 0x1FCC9Cu;
            goto label_1fcc9c;
        }
    }
    ctx->pc = 0x1FCC4Cu;
label_1fcc4c:
    // 0x1fcc4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fcc4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FCC50u;
    {
        const bool branch_taken_0x1fcc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc50) {
            ctx->pc = 0x1FCC84u;
            goto label_1fcc84;
        }
    }
    ctx->pc = 0x1FCC58u;
label_1fcc58:
    // 0x1fcc58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fcc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcc5c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1fcc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fcc60: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1fcc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1fcc64: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fcc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fcc68: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1fcc68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1fcc6c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1fcc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1fcc70: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1fcc70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fcc74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fcc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fcc78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fcc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fcc7c: 0xa0600014  sb          $zero, 0x14($v1)
    ctx->pc = 0x1fcc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcc80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fcc80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fcc84:
    // 0x1fcc84: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fcc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fcc88: 0x8c63bfac  lw          $v1, -0x4054($v1)
    ctx->pc = 0x1fcc88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fcc8c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fcc8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fcc90: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FCC90u;
    {
        const bool branch_taken_0x1fcc90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc90) {
            ctx->pc = 0x1FCC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcc58;
        }
    }
    ctx->pc = 0x1FCC98u;
    // 0x1fcc98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fcc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1fcc9c:
    // 0x1fcc9c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fcc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fcca0: 0x8c63bfb0  lw          $v1, -0x4050($v1)
    ctx->pc = 0x1fcca0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB0u));
    // 0x1fcca4: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1fcca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fcca8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1FCCA8u;
    {
        const bool branch_taken_0x1fcca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcca8) {
            ctx->pc = 0x1FCC4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcc4c;
        }
    }
    ctx->pc = 0x1FCCB0u;
    // 0x1fccb0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1fccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fccb4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fccb8: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x1fccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x1fccbc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fccc0: 0xac6400fc  sw          $a0, 0xFC($v1)
    ctx->pc = 0x1fccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 4));
    // 0x1fccc4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fccc8: 0x8c64bfac  lw          $a0, -0x4054($v1)
    ctx->pc = 0x1fccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fcccc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fccccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fccd0: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1fccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1fccd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fccd8: 0xac6400ec  sw          $a0, 0xEC($v1)
    ctx->pc = 0x1fccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 4));
    // 0x1fccdc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fcce0: 0x8c64bfb0  lw          $a0, -0x4050($v1)
    ctx->pc = 0x1fcce0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x60BFB0u));
    // 0x1fcce4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fcce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fcce8: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1fcce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1fccec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fccf0: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x1fccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x1fccf4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1fccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fccf8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fccfc: 0xac640110  sw          $a0, 0x110($v1)
    ctx->pc = 0x1fccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 4));
    // 0x1fcd00: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fcd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcd04: 0xac64010c  sw          $a0, 0x10C($v1)
    ctx->pc = 0x1fcd04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 4));
    // 0x1fcd08: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1fcd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fcd0c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fcd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcd10: 0xac640118  sw          $a0, 0x118($v1)
    ctx->pc = 0x1fcd10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 280), GPR_U32(ctx, 4));
    // 0x1fcd14: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fcd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcd18: 0xac640114  sw          $a0, 0x114($v1)
    ctx->pc = 0x1fcd18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 4));
    // 0x1fcd1c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1fcd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fcd20: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fcd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcd24: 0xac640108  sw          $a0, 0x108($v1)
    ctx->pc = 0x1fcd24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 4));
    // 0x1fcd28: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fcd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcd2c: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x1fcd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x1fcd30: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fcd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcd34: 0xa0600121  sb          $zero, 0x121($v1)
    ctx->pc = 0x1fcd34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 289), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcd38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fcd38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcd3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fcd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcd40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fcd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fcd44: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCD4Cu;
    // 0x1fcd4c: 0x0  nop
    ctx->pc = 0x1fcd4cu;
    // NOP
    ctx->pc = 0x1fcd50u;
}
