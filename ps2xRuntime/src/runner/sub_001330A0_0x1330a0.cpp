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

// Function: sub_001330A0
// Address: 0x1330a0 - 0x133160
void sub_001330A0_0x1330a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001330A0_0x1330a0");
#endif

    switch (ctx->pc) {
        case 0x1330d0u: goto label_1330d0;
        case 0x133100u: goto label_133100;
        case 0x133110u: goto label_133110;
        default: break;
    }

    ctx->pc = 0x1330a0u;

    // 0x1330a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1330a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1330a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1330a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1330a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1330a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1330ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1330acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1330b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1330b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1330b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1330b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1330b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1330b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1330bc: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1330bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x1330c0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1330c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1330c4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1330c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1330c8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1330C8u;
    SET_GPR_U32(ctx, 31, 0x1330D0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1330C8u, 0x1330D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1330D0u;
label_1330d0:
    // 0x1330d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1330d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330d4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1330D4u;
    {
        const bool branch_taken_0x1330d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1330d4) {
            ctx->pc = 0x133138u;
            goto label_133138;
        }
    }
    ctx->pc = 0x1330DCu;
    // 0x1330dc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1330dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1330e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1330e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1330e4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1330e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330e8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1330e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1330ec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1330ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1330f0: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x1330f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1330f4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1330f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1330F8u;
    {
        const bool branch_taken_0x1330f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1330f8) {
            ctx->pc = 0x13312Cu;
            goto label_13312c;
        }
    }
    ctx->pc = 0x133100u;
label_133100:
    // 0x133100: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x133100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133104: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x133104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133108: 0xc0400e0  jal         func_100380
    ctx->pc = 0x133108u;
    SET_GPR_U32(ctx, 31, 0x133110u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x133108u, 0x133110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133110u;
label_133110:
    // 0x133110: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x133110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x133114: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133114u;
    {
        const bool branch_taken_0x133114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133114) {
            ctx->pc = 0x133124u;
            goto label_133124;
        }
    }
    ctx->pc = 0x13311Cu;
    // 0x13311c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x13311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x133120: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x133120u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_133124:
    // 0x133124: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x133124u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x133128: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x133128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13312c:
    // 0x13312c: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x13312Cu;
    {
        const bool branch_taken_0x13312c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x13312c) {
            ctx->pc = 0x133100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133100;
        }
    }
    ctx->pc = 0x133134u;
    // 0x133134: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x133134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133138:
    // 0x133138: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x133138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13313c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13313cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133140: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x133140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133144: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13314c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13314cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133154: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x133154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x133158: 0x3e00008  jr          $ra
    ctx->pc = 0x133158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133160u;
}
