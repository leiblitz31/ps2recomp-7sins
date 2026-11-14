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

// Function: sub_00242050
// Address: 0x242050 - 0x242110
void sub_00242050_0x242050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242050_0x242050");
#endif

    switch (ctx->pc) {
        case 0x242080u: goto label_242080;
        case 0x2420b0u: goto label_2420b0;
        case 0x2420c0u: goto label_2420c0;
        default: break;
    }

    ctx->pc = 0x242050u;

    // 0x242050: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x242050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x242054: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x242054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x242058: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x242058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24205c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x242060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x242060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x242064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x242068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x242068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24206c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x24206cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x242070: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x242070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x242074: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x242074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x242078: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x242078u;
    SET_GPR_U32(ctx, 31, 0x242080u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x242078u, 0x242080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242080u;
label_242080:
    // 0x242080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x242080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242084: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x242084u;
    {
        const bool branch_taken_0x242084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x242084) {
            ctx->pc = 0x2420E8u;
            goto label_2420e8;
        }
    }
    ctx->pc = 0x24208Cu;
    // 0x24208c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x24208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x242090: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x242090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x242094: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x242094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242098: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x242098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x24209c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x24209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2420a0: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x2420a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2420a4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2420a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2420A8u;
    {
        const bool branch_taken_0x2420a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2420a8) {
            ctx->pc = 0x2420DCu;
            goto label_2420dc;
        }
    }
    ctx->pc = 0x2420B0u;
label_2420b0:
    // 0x2420b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2420b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2420b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2420b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420b8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2420B8u;
    SET_GPR_U32(ctx, 31, 0x2420C0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2420B8u, 0x2420C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420C0u;
label_2420c0:
    // 0x2420c0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2420c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2420c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2420C4u;
    {
        const bool branch_taken_0x2420c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2420c4) {
            ctx->pc = 0x2420D4u;
            goto label_2420d4;
        }
    }
    ctx->pc = 0x2420CCu;
    // 0x2420cc: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x2420ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2420d0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2420d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2420d4:
    // 0x2420d4: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x2420d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2420d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2420d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2420dc:
    // 0x2420dc: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x2420DCu;
    {
        const bool branch_taken_0x2420dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x2420dc) {
            ctx->pc = 0x2420B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2420b0;
        }
    }
    ctx->pc = 0x2420E4u;
    // 0x2420e4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2420e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2420e8:
    // 0x2420e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2420e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2420ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2420f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2420f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2420f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2420f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2420f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2420f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2420fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2420fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242104: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x242104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x242108: 0x3e00008  jr          $ra
    ctx->pc = 0x242108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242110u;
}
