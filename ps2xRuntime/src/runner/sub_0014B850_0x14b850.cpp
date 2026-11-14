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

// Function: sub_0014B850
// Address: 0x14b850 - 0x14ba90
void sub_0014B850_0x14b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B850_0x14b850");
#endif

    switch (ctx->pc) {
        case 0x14b878u: goto label_14b878;
        case 0x14b8c0u: goto label_14b8c0;
        case 0x14b8d0u: goto label_14b8d0;
        case 0x14b8e8u: goto label_14b8e8;
        case 0x14b918u: goto label_14b918;
        case 0x14b928u: goto label_14b928;
        case 0x14b940u: goto label_14b940;
        case 0x14b9ecu: goto label_14b9ec;
        case 0x14b9f8u: goto label_14b9f8;
        case 0x14ba38u: goto label_14ba38;
        case 0x14ba44u: goto label_14ba44;
        case 0x14ba58u: goto label_14ba58;
        case 0x14ba78u: goto label_14ba78;
        default: break;
    }

    ctx->pc = 0x14b850u;

    // 0x14b850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14b850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14b854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14b854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14b858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b85c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b860: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x14b860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x14b864: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x14b864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x14b868: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x14b868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b86c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x14b86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b870: 0xc0ad6a8  jal         func_2B5AA0
    ctx->pc = 0x14B870u;
    SET_GPR_U32(ctx, 31, 0x14B878u);
    ctx->pc = 0x2B5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AA0u, 0x14B870u, 0x14B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B878u;
label_14b878:
    // 0x14b878: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x14b878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x14b87c: 0x24633920  addiu       $v1, $v1, 0x3920
    ctx->pc = 0x14b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14624));
    // 0x14b880: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x14b880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b884: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14b884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14b888: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x14b888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b88c: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x14b88cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b890: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x14b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b894: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x14b894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x14b898: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x14b898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x14b89c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b8a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x14b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b8a4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x14b8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x14b8a8: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14b8ac: 0x14020014  bne         $zero, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14B8ACu;
    {
        const bool branch_taken_0x14b8ac = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x14b8ac) {
            ctx->pc = 0x14B900u;
            goto label_14b900;
        }
    }
    ctx->pc = 0x14B8B4u;
    // 0x14b8b4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x14b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x14b8b8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x14B8B8u;
    SET_GPR_U32(ctx, 31, 0x14B8C0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x14B8B8u, 0x14B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8C0u;
label_14b8c0:
    // 0x14b8c0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x14b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x14b8c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14b8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8c8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x14B8C8u;
    SET_GPR_U32(ctx, 31, 0x14B8D0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x14B8C8u, 0x14B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8D0u;
label_14b8d0:
    // 0x14b8d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14b8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8d4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B8D4u;
    {
        const bool branch_taken_0x14b8d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b8d4) {
            ctx->pc = 0x14B8ECu;
            goto label_14b8ec;
        }
    }
    ctx->pc = 0x14B8DCu;
    // 0x14b8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8e0: 0xc0526a8  jal         func_149AA0
    ctx->pc = 0x14B8E0u;
    SET_GPR_U32(ctx, 31, 0x14B8E8u);
    ctx->pc = 0x149AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AA0u, 0x14B8E0u, 0x14B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8E8u;
label_14b8e8:
    // 0x14b8e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14b8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14b8ec:
    // 0x14b8ec: 0xaf91ba98  sw          $s1, -0x4568($gp)
    ctx->pc = 0x14b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949528), GPR_U32(ctx, 17));
    // 0x14b8f0: 0x8f83ba98  lw          $v1, -0x4568($gp)
    ctx->pc = 0x14b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14b8f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x14b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14b8f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b8fc: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x14b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_14b900:
    // 0x14b900: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x14b900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14b904: 0x14020015  bne         $zero, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14B904u;
    {
        const bool branch_taken_0x14b904 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x14b904) {
            ctx->pc = 0x14B95Cu;
            goto label_14b95c;
        }
    }
    ctx->pc = 0x14B90Cu;
    // 0x14b90c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x14b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x14b910: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x14B910u;
    SET_GPR_U32(ctx, 31, 0x14B918u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x14B910u, 0x14B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B918u;
label_14b918:
    // 0x14b918: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x14b918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x14b91c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14b91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b920: 0xc0400e0  jal         func_100380
    ctx->pc = 0x14B920u;
    SET_GPR_U32(ctx, 31, 0x14B928u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x14B920u, 0x14B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B928u;
label_14b928:
    // 0x14b928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b92c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B92Cu;
    {
        const bool branch_taken_0x14b92c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b92c) {
            ctx->pc = 0x14B944u;
            goto label_14b944;
        }
    }
    ctx->pc = 0x14B934u;
    // 0x14b934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b938: 0xc0526dc  jal         func_149B70
    ctx->pc = 0x14B938u;
    SET_GPR_U32(ctx, 31, 0x14B940u);
    ctx->pc = 0x149B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B70u, 0x14B938u, 0x14B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B940u;
label_14b940:
    // 0x14b940: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14b944:
    // 0x14b944: 0xaf90ba9c  sw          $s0, -0x4564($gp)
    ctx->pc = 0x14b944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949532), GPR_U32(ctx, 16));
    // 0x14b948: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x14b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14b94c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b950: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x14b950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b954: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x14b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14b958: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14b958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_14b95c:
    // 0x14b95c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x14b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b960: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14b960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b96c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x14b96cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14b970: 0x3e00008  jr          $ra
    ctx->pc = 0x14B970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B978u;
    // 0x14b978: 0x0  nop
    ctx->pc = 0x14b978u;
    // NOP
    // 0x14b97c: 0x0  nop
    ctx->pc = 0x14b97cu;
    // NOP
    // 0x14b980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14b980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14b984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14b988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14b98c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x14b98cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x14b990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b994: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x14B994u;
    {
        const bool branch_taken_0x14b994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b994) {
            ctx->pc = 0x14BA78u;
            goto label_14ba78;
        }
    }
    ctx->pc = 0x14B99Cu;
    // 0x14b99c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x14b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x14b9a0: 0x24633920  addiu       $v1, $v1, 0x3920
    ctx->pc = 0x14b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14624));
    // 0x14b9a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b9a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14b9ac: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x14b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14b9b0: 0x10020012  beq         $zero, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14B9B0u;
    {
        const bool branch_taken_0x14b9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b9b0) {
            ctx->pc = 0x14B9FCu;
            goto label_14b9fc;
        }
    }
    ctx->pc = 0x14B9B8u;
    // 0x14b9b8: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x14b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14b9bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b9c0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x14b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14b9c4: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x14b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14b9c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14b9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14b9cc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14B9CCu;
    {
        const bool branch_taken_0x14b9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b9cc) {
            ctx->pc = 0x14B9FCu;
            goto label_14b9fc;
        }
    }
    ctx->pc = 0x14B9D4u;
    // 0x14b9d4: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x14b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14b9d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B9D8u;
    {
        const bool branch_taken_0x14b9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b9d8) {
            ctx->pc = 0x14B9FCu;
            goto label_14b9fc;
        }
    }
    ctx->pc = 0x14B9E0u;
    // 0x14b9e0: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14b9e4: 0xc05250c  jal         func_149430
    ctx->pc = 0x14B9E4u;
    SET_GPR_U32(ctx, 31, 0x14B9ECu);
    ctx->pc = 0x149430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149430u, 0x14B9E4u, 0x14B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9ECu;
label_14b9ec:
    // 0x14b9ec: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x14b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x14b9f0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x14B9F0u;
    SET_GPR_U32(ctx, 31, 0x14B9F8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x14B9F0u, 0x14B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9F8u;
label_14b9f8:
    // 0x14b9f8: 0xaf80ba9c  sw          $zero, -0x4564($gp)
    ctx->pc = 0x14b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949532), GPR_U32(ctx, 0));
label_14b9fc:
    // 0x14b9fc: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14ba00: 0x10020011  beq         $zero, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14BA00u;
    {
        const bool branch_taken_0x14ba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ba00) {
            ctx->pc = 0x14BA48u;
            goto label_14ba48;
        }
    }
    ctx->pc = 0x14BA08u;
    // 0x14ba08: 0x8f83ba98  lw          $v1, -0x4568($gp)
    ctx->pc = 0x14ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14ba0c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x14ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14ba10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14ba14: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x14ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x14ba18: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14BA18u;
    {
        const bool branch_taken_0x14ba18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ba18) {
            ctx->pc = 0x14BA48u;
            goto label_14ba48;
        }
    }
    ctx->pc = 0x14BA20u;
    // 0x14ba20: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14ba24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BA24u;
    {
        const bool branch_taken_0x14ba24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ba24) {
            ctx->pc = 0x14BA48u;
            goto label_14ba48;
        }
    }
    ctx->pc = 0x14BA2Cu;
    // 0x14ba2c: 0x8f84ba98  lw          $a0, -0x4568($gp)
    ctx->pc = 0x14ba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14ba30: 0xc052ea4  jal         func_14BA90
    ctx->pc = 0x14BA30u;
    SET_GPR_U32(ctx, 31, 0x14BA38u);
    ctx->pc = 0x14BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BA90u, 0x14BA30u, 0x14BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA38u;
label_14ba38:
    // 0x14ba38: 0x8f84ba98  lw          $a0, -0x4568($gp)
    ctx->pc = 0x14ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14ba3c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x14BA3Cu;
    SET_GPR_U32(ctx, 31, 0x14BA44u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x14BA3Cu, 0x14BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA44u;
label_14ba44:
    // 0x14ba44: 0xaf80ba98  sw          $zero, -0x4568($gp)
    ctx->pc = 0x14ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949528), GPR_U32(ctx, 0));
label_14ba48:
    // 0x14ba48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ba4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14ba4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba50: 0xc0ad6d4  jal         func_2B5B50
    ctx->pc = 0x14BA50u;
    SET_GPR_U32(ctx, 31, 0x14BA58u);
    ctx->pc = 0x2B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B50u, 0x14BA50u, 0x14BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA58u;
label_14ba58:
    // 0x14ba58: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x14ba58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ba5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14ba5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14ba60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14ba60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14ba64: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BA64u;
    {
        const bool branch_taken_0x14ba64 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14ba64) {
            ctx->pc = 0x14BA78u;
            goto label_14ba78;
        }
    }
    ctx->pc = 0x14BA6Cu;
    // 0x14ba6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ba70: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x14BA70u;
    SET_GPR_U32(ctx, 31, 0x14BA78u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x14BA70u, 0x14BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA78u;
label_14ba78:
    // 0x14ba78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ba7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ba7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ba80: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14ba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14ba84: 0x3e00008  jr          $ra
    ctx->pc = 0x14BA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BA8Cu;
    // 0x14ba8c: 0x0  nop
    ctx->pc = 0x14ba8cu;
    // NOP
    ctx->pc = 0x14ba90u;
}
