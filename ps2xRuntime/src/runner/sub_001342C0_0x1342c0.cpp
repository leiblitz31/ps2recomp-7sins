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

// Function: sub_001342C0
// Address: 0x1342c0 - 0x1343f0
void sub_001342C0_0x1342c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001342C0_0x1342c0");
#endif

    switch (ctx->pc) {
        case 0x134324u: goto label_134324;
        case 0x134344u: goto label_134344;
        case 0x134354u: goto label_134354;
        case 0x134380u: goto label_134380;
        default: break;
    }

    ctx->pc = 0x1342c0u;

    // 0x1342c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1342c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1342c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1342c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1342c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1342c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1342cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1342ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1342d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1342d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1342d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1342d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1342d8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1342d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1342dc: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1342dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1342e0: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1342e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1342e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1342e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1342e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1342e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1342ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1342ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1342f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1342f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1342f4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1342f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1342f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1342f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1342fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1342fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134300: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x134300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x134304: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134304u;
    {
        const bool branch_taken_0x134304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134304) {
            ctx->pc = 0x134318u;
            goto label_134318;
        }
    }
    ctx->pc = 0x13430Cu;
    // 0x13430c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13430cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134310: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x134310u;
    {
        const bool branch_taken_0x134310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134310) {
            ctx->pc = 0x1343C8u;
            goto label_1343c8;
        }
    }
    ctx->pc = 0x134318u;
label_134318:
    // 0x134318: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x134318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13431c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x13431Cu;
    {
        const bool branch_taken_0x13431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13431c) {
            ctx->pc = 0x1343B8u;
            goto label_1343b8;
        }
    }
    ctx->pc = 0x134324u;
label_134324:
    // 0x134324: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x134324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134328: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x134328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x13432c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x134330: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x134330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x134334: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x134334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x134338: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x134338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13433c: 0xc04cc18  jal         func_133060
    ctx->pc = 0x13433Cu;
    SET_GPR_U32(ctx, 31, 0x134344u);
    ctx->pc = 0x133060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133060u, 0x13433Cu, 0x134344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134344u;
label_134344:
    // 0x134344: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x134344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134348: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x134348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13434c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x13434Cu;
    {
        const bool branch_taken_0x13434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13434c) {
            ctx->pc = 0x1343A8u;
            goto label_1343a8;
        }
    }
    ctx->pc = 0x134354u;
label_134354:
    // 0x134354: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x134354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134358: 0x8c530030  lw          $s3, 0x30($v0)
    ctx->pc = 0x134358u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13435c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x13435cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134360: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x134360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x134364: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x134364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x134368: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x134368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13436c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x134370: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x134370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134378: 0xc04cc00  jal         func_133000
    ctx->pc = 0x134378u;
    SET_GPR_U32(ctx, 31, 0x134380u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x134378u, 0x134380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134380u;
label_134380:
    // 0x134380: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x134380u;
    {
        const bool branch_taken_0x134380 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x134380) {
            ctx->pc = 0x1343A4u;
            goto label_1343a4;
        }
    }
    ctx->pc = 0x134388u;
    // 0x134388: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x134388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13438c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x13438cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x134390: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x134390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134394: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x134394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x134398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13439c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13439Cu;
    {
        const bool branch_taken_0x13439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13439c) {
            ctx->pc = 0x1343C8u;
            goto label_1343c8;
        }
    }
    ctx->pc = 0x1343A4u;
label_1343a4:
    // 0x1343a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1343a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1343a8:
    // 0x1343a8: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x1343a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1343ac: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1343ACu;
    {
        const bool branch_taken_0x1343ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1343ac) {
            ctx->pc = 0x134354u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134354;
        }
    }
    ctx->pc = 0x1343B4u;
    // 0x1343b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1343b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1343b8:
    // 0x1343b8: 0x2e020014  sltiu       $v0, $s0, 0x14
    ctx->pc = 0x1343b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1343bc: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1343BCu;
    {
        const bool branch_taken_0x1343bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1343bc) {
            ctx->pc = 0x134324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134324;
        }
    }
    ctx->pc = 0x1343C4u;
    // 0x1343c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1343c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1343c8:
    // 0x1343c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1343c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1343cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1343ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1343d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1343d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1343d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1343d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1343d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1343d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1343dc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1343dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1343e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1343E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1343E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1343E8u;
    // 0x1343e8: 0x0  nop
    ctx->pc = 0x1343e8u;
    // NOP
    // 0x1343ec: 0x0  nop
    ctx->pc = 0x1343ecu;
    // NOP
    ctx->pc = 0x1343f0u;
}
