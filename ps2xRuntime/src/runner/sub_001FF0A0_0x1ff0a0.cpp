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

// Function: sub_001FF0A0
// Address: 0x1ff0a0 - 0x1ff1b0
void sub_001FF0A0_0x1ff0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF0A0_0x1ff0a0");
#endif

    ctx->pc = 0x1ff0a0u;

    // 0x1ff0a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ff0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ff0a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ff0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ff0a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ff0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ff0ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ff0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff0b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ff0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ff0b4: 0xa3a40040  sb          $a0, 0x40($sp)
    ctx->pc = 0x1ff0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ff0b8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1ff0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1ff0bc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ff0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ff0c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF0C0u;
    {
        const bool branch_taken_0x1ff0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff0c0) {
            ctx->pc = 0x1FF0D4u;
            goto label_1ff0d4;
        }
    }
    ctx->pc = 0x1FF0C8u;
    // 0x1ff0c8: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x1ff0c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff0cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF0CCu;
    {
        const bool branch_taken_0x1ff0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff0cc) {
            ctx->pc = 0x1FF0DCu;
            goto label_1ff0dc;
        }
    }
    ctx->pc = 0x1FF0D4u;
label_1ff0d4:
    // 0x1ff0d4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1FF0D4u;
    {
        const bool branch_taken_0x1ff0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff0d4) {
            ctx->pc = 0x1FF190u;
            goto label_1ff190;
        }
    }
    ctx->pc = 0x1FF0DCu;
label_1ff0dc:
    // 0x1ff0dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ff0dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff0e0: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1ff0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ff0e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ff0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff0e8: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1ff0e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff0ec: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1ff0ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff0f0: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x1ff0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1ff0f4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1ff0f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1ff0f8: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x1ff0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1ff0fc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF0FCu;
    {
        const bool branch_taken_0x1ff0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ff0fc) {
            ctx->pc = 0x1FF120u;
            goto label_1ff120;
        }
    }
    ctx->pc = 0x1FF104u;
    // 0x1ff104: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1ff104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff108: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x1ff108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1ff10c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1ff10cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1ff110: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x1ff110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x1ff114: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF114u;
    {
        const bool branch_taken_0x1ff114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ff114) {
            ctx->pc = 0x1FF120u;
            goto label_1ff120;
        }
    }
    ctx->pc = 0x1FF11Cu;
    // 0x1ff11c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ff11cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff120:
    // 0x1ff120: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF120u;
    {
        const bool branch_taken_0x1ff120 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff120) {
            ctx->pc = 0x1FF138u;
            goto label_1ff138;
        }
    }
    ctx->pc = 0x1FF128u;
    // 0x1ff128: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ff128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff12c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1ff12cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff130: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF130u;
    {
        const bool branch_taken_0x1ff130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff130) {
            ctx->pc = 0x1FF13Cu;
            goto label_1ff13c;
        }
    }
    ctx->pc = 0x1FF138u;
label_1ff138:
    // 0x1ff138: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ff138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff13c:
    // 0x1ff13c: 0x323300ff  andi        $s3, $s1, 0xFF
    ctx->pc = 0x1ff13cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1ff140: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FF140u;
    {
        const bool branch_taken_0x1ff140 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff140) {
            ctx->pc = 0x1FF190u;
            goto label_1ff190;
        }
    }
    ctx->pc = 0x1FF148u;
    // 0x1ff148: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1ff148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff14c: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x1ff14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1ff150: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1ff150u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1ff154: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x1ff154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1ff158: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF158u;
    {
        const bool branch_taken_0x1ff158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ff158) {
            ctx->pc = 0x1FF17Cu;
            goto label_1ff17c;
        }
    }
    ctx->pc = 0x1FF160u;
    // 0x1ff160: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ff160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff164: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1ff164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff168: 0xac640110  sw          $a0, 0x110($v1)
    ctx->pc = 0x1ff168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 4));
    // 0x1ff16c: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1ff16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff170: 0xac64010c  sw          $a0, 0x10C($v1)
    ctx->pc = 0x1ff170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 4));
    // 0x1ff174: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF174u;
    {
        const bool branch_taken_0x1ff174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff174) {
            ctx->pc = 0x1FF190u;
            goto label_1ff190;
        }
    }
    ctx->pc = 0x1FF17Cu;
label_1ff17c:
    // 0x1ff17c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ff17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff180: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1ff180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff184: 0xac640118  sw          $a0, 0x118($v1)
    ctx->pc = 0x1ff184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 280), GPR_U32(ctx, 4));
    // 0x1ff188: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1ff188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff18c: 0xac640114  sw          $a0, 0x114($v1)
    ctx->pc = 0x1ff18cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 4));
label_1ff190:
    // 0x1ff190: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ff190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff194: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ff194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff1a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1ff1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ff1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF1ACu;
    // 0x1ff1ac: 0x0  nop
    ctx->pc = 0x1ff1acu;
    // NOP
    ctx->pc = 0x1ff1b0u;
}
