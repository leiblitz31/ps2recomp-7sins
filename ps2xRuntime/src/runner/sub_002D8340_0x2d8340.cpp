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

// Function: sub_002D8340
// Address: 0x2d8340 - 0x2d8490
void sub_002D8340_0x2d8340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8340_0x2d8340");
#endif

    switch (ctx->pc) {
        case 0x2d8374u: goto label_2d8374;
        case 0x2d8380u: goto label_2d8380;
        case 0x2d83a8u: goto label_2d83a8;
        case 0x2d83c4u: goto label_2d83c4;
        case 0x2d83e4u: goto label_2d83e4;
        case 0x2d83f4u: goto label_2d83f4;
        case 0x2d841cu: goto label_2d841c;
        case 0x2d8434u: goto label_2d8434;
        case 0x2d844cu: goto label_2d844c;
        case 0x2d845cu: goto label_2d845c;
        default: break;
    }

    ctx->pc = 0x2d8340u;

    // 0x2d8340: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d8340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d8344: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d8344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d8348: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d8348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d834c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d834cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d8350: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d8350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d8354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d8358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d835c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2d835cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2d8360: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2d8360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2d8364: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x2d8364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x2d8368: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2d8368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d836c: 0xc068ea0  jal         func_1A3A80
    ctx->pc = 0x2D836Cu;
    SET_GPR_U32(ctx, 31, 0x2D8374u);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x2D836Cu, 0x2D8374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8374u;
label_2d8374:
    // 0x2d8374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8378: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2D8378u;
    {
        const bool branch_taken_0x2d8378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8378) {
            ctx->pc = 0x2D8450u;
            goto label_2d8450;
        }
    }
    ctx->pc = 0x2D8380u;
label_2d8380:
    // 0x2d8380: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d8380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8384: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2d8384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d8388: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2d8388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d838c: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D838Cu;
    {
        const bool branch_taken_0x2d838c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d838c) {
            ctx->pc = 0x2D844Cu;
            goto label_2d844c;
        }
    }
    ctx->pc = 0x2D8394u;
    // 0x2d8394: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d8394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8398: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d8398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d839c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2d839cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d83a0: 0xc0b4db0  jal         func_2D36C0
    ctx->pc = 0x2D83A0u;
    SET_GPR_U32(ctx, 31, 0x2D83A8u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2D83A0u, 0x2D83A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D83A8u;
label_2d83a8:
    // 0x2d83a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D83A8u;
    {
        const bool branch_taken_0x2d83a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d83a8) {
            ctx->pc = 0x2D83D0u;
            goto label_2d83d0;
        }
    }
    ctx->pc = 0x2D83B0u;
    // 0x2d83b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d83b4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2d83b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d83b8: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2d83b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d83bc: 0xc0b59c0  jal         func_2D6700
    ctx->pc = 0x2D83BCu;
    SET_GPR_U32(ctx, 31, 0x2D83C4u);
    ctx->pc = 0x2D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6700u, 0x2D83BCu, 0x2D83C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D83C4u;
label_2d83c4:
    // 0x2d83c4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2d83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d83c8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D83C8u;
    {
        const bool branch_taken_0x2d83c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d83c8) {
            ctx->pc = 0x2D844Cu;
            goto label_2d844c;
        }
    }
    ctx->pc = 0x2D83D0u;
label_2d83d0:
    // 0x2d83d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d83d4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2d83d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d83d8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d83d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d83dc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D83DCu;
    SET_GPR_U32(ctx, 31, 0x2D83E4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D83DCu, 0x2D83E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D83E4u;
label_2d83e4:
    // 0x2d83e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d83e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d83e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d83e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d83ec: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2D83ECu;
    SET_GPR_U32(ctx, 31, 0x2D83F4u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2D83ECu, 0x2D83F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D83F4u;
label_2d83f4:
    // 0x2d83f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d83f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d83f8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D83F8u;
    {
        const bool branch_taken_0x2d83f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d83f8) {
            ctx->pc = 0x2D840Cu;
            goto label_2d840c;
        }
    }
    ctx->pc = 0x2D8400u;
    // 0x2d8400: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d8400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d8404: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D8404u;
    {
        const bool branch_taken_0x2d8404 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d8404) {
            ctx->pc = 0x2D844Cu;
            goto label_2d844c;
        }
    }
    ctx->pc = 0x2D840Cu;
label_2d840c:
    // 0x2d840c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2d840cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d8410: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d8410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d8414: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D8414u;
    SET_GPR_U32(ctx, 31, 0x2D841Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D8414u, 0x2D841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D841Cu;
label_2d841c:
    // 0x2d841c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d841cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8420: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d8420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8424: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2d8424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d8428: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d8428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d842c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D842Cu;
    SET_GPR_U32(ctx, 31, 0x2D8434u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D842Cu, 0x2D8434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8434u;
label_2d8434:
    // 0x2d8434: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d8434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8438: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d8438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d843c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d843cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8440: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d8440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8444: 0xc0b5ff8  jal         func_2D7FE0
    ctx->pc = 0x2D8444u;
    SET_GPR_U32(ctx, 31, 0x2D844Cu);
    ctx->pc = 0x2D7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7FE0u, 0x2D8444u, 0x2D844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D844Cu;
label_2d844c:
    // 0x2d844c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d844cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d8450:
    // 0x2d8450: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2d8450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d8454: 0xc068e98  jal         func_1A3A60
    ctx->pc = 0x2D8454u;
    SET_GPR_U32(ctx, 31, 0x2D845Cu);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x2D8454u, 0x2D845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D845Cu;
label_2d845c:
    // 0x2d845c: 0x1602ffc8  bne         $s0, $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2D845Cu;
    {
        const bool branch_taken_0x2d845c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d845c) {
            ctx->pc = 0x2D8380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8380;
        }
    }
    ctx->pc = 0x2D8464u;
    // 0x2d8464: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d8464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8468: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d8468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d846c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d846cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d8470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d847c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2d847cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d8480: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8488u;
    // 0x2d8488: 0x0  nop
    ctx->pc = 0x2d8488u;
    // NOP
    // 0x2d848c: 0x0  nop
    ctx->pc = 0x2d848cu;
    // NOP
    ctx->pc = 0x2d8490u;
}
